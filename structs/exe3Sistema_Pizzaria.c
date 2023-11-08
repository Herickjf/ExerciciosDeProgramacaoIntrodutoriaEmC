#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//define o numero maximo de clientes, pizzas e pedidos, que pode ser alterado para atender qualquer demanda
#define MAXcliente 5
#define MAXpizzas 3
#define MAXpedidos 6 

//declarando as structs, union e enum
typedef struct pessoa{
    char tel[15]/*XX XXXXX-XXXX*/, cep[10]/*XXXXX-XXX*/;
    char nome[100], rua[100], complemento[50];
} Cliente;

typedef struct pizza{
    int codPizza;
	float valor;
    char pizzaTipo[100];
} Pizza;

typedef enum situacao{none, EmPreparo, ACaminho, Entregue} situacao;

typedef struct pedido{
    int npedido, codPizza, codMot;
    char tel[15];
    situacao situacao;
} Pedido;

typedef union escolhas{
    char menu;
} Escolhas;

//declarando as funcoes
void CadastraCliente(Cliente cliente[]);
void CadastraPizza(Pizza pizza[]);
void CadastraPedido(Pedido npedido[]);
void DespachaPedido(Pedido npedido[]);
void MarcarPedidoEntregue(Pedido npedido[]);
void PedidosEntregues(Pedido npedido[]);

int main(){
	//declarando variaveis structs e union
    Cliente cliente[MAXcliente];
    Pizza pizza[MAXpizzas];
    Pedido npedido[MAXpedidos];
    Escolhas menu;

    do{
    	//inicializando menu = '\0' para evitar conflito na leitura e no switch case:
        menu.menu = '\0';
        //limpa o terminal(100% opcional)
        system("cls");
        //mostra o menu:
        printf("\nMENU da CATCH THE PIZZA:\n\n\t(a)    Cadastrar cliente;"
                                           "\n\t(b)    Cadastrar pizzas;"
                                           "\n\t(c)    Cadastrar pedido;"
                                           "\n\t(d)    Despachar pedido;"
                                           "\n\t(e)    Marcar pedido como entregue;"
                                           "\n\t(f)    Ver pedidos entregues;"
                                           "\n\t(s)    Sair.\n"
                                           "\nEscolha uma opcao: ");
        scanf(" %c%*c", &menu.menu);

        switch(menu.menu){
            case 'a':
                CadastraCliente(cliente);
                break;
            case 'b':
                CadastraPizza(pizza);
                break;
            case 'c':
                CadastraPedido(npedido);
                break;
            case 'd':
                DespachaPedido(npedido);
                break;
            case 'e':
                MarcarPedidoEntregue(npedido);
                break;
            case 'f':
                PedidosEntregues(npedido);
                break;
            case 's':
                exit(0);
                break;
            default:puts("\nOpcao Invalida :/ \n");
        }
    }while(1);
    return 0;
}
void CadastraCliente(Cliente cliente[]){
    int i, j;
    //cadastrando os clientes
    for(i=0, j=0; i<MAXcliente; i++){
        printf("\nCliente %d", i+1);
        puts("\nDigite o numero de telefone: ");
        scanf("%[^\n]%*c", cliente[i].tel); 
        puts("Digite o nome: ");
        scanf("%[^\n]%*c", cliente[i].nome);
        puts("Digite a rua: ");
        scanf("%[^\n]%*c", cliente[i].rua);
        puts("Digite o complemento: ");
        scanf("%[^\n]%*c", cliente[i].complemento);
        puts("Digite o CEP: ");
        scanf("%[^\n]%*c", cliente[i].cep);
        //so printa a mensagem e recebe j se o cliente nao for o ultimo.
        if(i<MAXcliente-1){
        	puts("\nDeseja cadastrar mais algum cliente? Digite 0 para sim, qualquer outro numero para voltar ao menu: ");
        	scanf("%d%*c", &j);
		}
        if(j)break;
    }
}
void CadastraPizza(Pizza pizza[]){
    int i, j;
    //cadastrando as pizzas
    for(i=0, j=0; i<MAXpizzas; i++){
        printf("\n\nPizza %d:", i+1);
        puts("\nDigite o tipo de pizza: ");
        scanf("%[^\n]%*c", pizza[i].pizzaTipo);
        puts("Digite o codigo da pizza: ");
        scanf("%d", &pizza[i].codPizza);
        puts("Digite o valor da pizza: ");
        scanf("%f", &pizza[i].valor);
        //so printa a mensagem e recebe j se a pizza nao for a ultima.
        if(i<MAXpizzas-1){
        	puts("\nDeseja cadastrar mais alguma pizza? Digite 0 para sim, qualquer outro numero para voltar ao menu: ");
        	scanf("%d%*c", &j);
		}
        if(j)break;
    }
}
void CadastraPedido(Pedido npedido[]){
    int i, j;
    //cadastrando os pedidos
    for(i=0, j=0; i<MAXpedidos; i++){
        printf("\n\nPedido %d:", i+1);
        puts("\nDigite o numero de telefone do cliente: ");
        scanf("%[^\n]%*c", npedido[i].tel);
        puts("Digite o numero do pedido: ");
        scanf("%d", &npedido[i].npedido);
        puts("Digite o codigo da pizza: ");
        scanf("%d", &npedido[i].codPizza);
        npedido[i].situacao = EmPreparo;
        puts("Status do pedido: EM PREPARO.");
        //so printa a mensagem e recebe j se o pedido nao for o ultimo.
        if(i<MAXpedidos-1){
        	puts("\nDeseja cadastrar mais algum pedido? Digite 0 para sim, qualquer outro numero para voltar ao menu: ");
        	scanf("%d%*c", &j);
		}
        if(j)break;
    }     
}
void DespachaPedido(Pedido npedido[]){
    int i, n, j=0;
    do{
        puts("\n\nQual pedido voce deseja despachar?\nCodigo do pedido: ");
        scanf("%d", &n);
        //encontra o pedido
        for(i=0; i<MAXpedidos; i++){
            if(n==npedido[i].npedido) break;
        }
        //se sair do for sem entrar naquele if, nao existe um pedido com esse numero cadastrado
        if(i==MAXpedidos){
        	puts("\nPedido nao cadastrado :/");
		} 
		//do contrario, encontrado o codigo do pedido, pede o codigo do motoqueiro e altera a situacao do pedido para "A CAMINHO"
        else{
        puts("\nDigite o codigo do motoqueiro: ");
        scanf("%d", &npedido[i].codMot);
        npedido[i].situacao = ACaminho;
        puts("\nStatus do pedido: A CAMINHO.");
        }
        //da a opcao de permanecer despachando pedidos ou voltar ao menu
        puts("\n\nDeseja despachar mais algum pedido? Digite 0 para sim, qualquer outro numero para voltar ao menu: ");
        scanf("%d%*c", &j);
    }while(!j);  
}
void MarcarPedidoEntregue(Pedido npedido[]){
    int n, i, j=0;
    do{
        puts("\n\nQual pedido voce deseja marcar como entregue?\nCodigo do pedido: ");
        scanf("%d", &n);
        //encontra o pedido
        for(i=0; i<MAXpedidos; i++){
            if(n==npedido[i].npedido) break;
        }
        //se sair do for sem entrar naquele if, nao existe um pedido com esse numero cadastrado
        if(i==MAXpedidos){
        	puts("\nPedido nao cadastrado :/");
		}
		//do contrario, encontrado o codigo do pedido, altera a situacao do pedido para "Entregue"
        else{
            npedido[i].situacao = Entregue;
            puts("\nPedido marcado como entregue!");
        }
        //da a opcao de marcar mais algum pedido como entregue ou de voltar ao menu
        puts("\n\nDeseja marcar mais algum pedido como entregue? Digite 0 para sim, qualquer outro numero para voltar ao menu: ");
        scanf("%d%*c", &j);
    }while(!j);
}
void PedidosEntregues(Pedido npedido[]){
	int i, j=0;
	//mostra todos os pedidos entregues
    for(i=0; i<MAXpedidos; i++){
        if(npedido[i].situacao == Entregue){
            printf("\n\nPedido %d:", i+1);
            printf("\nNumero de telefone do cliente: %s", npedido[i].tel);
            printf("\nNumero do pedido: %d", npedido[i].npedido);
            printf("\nCodigo da pizza: %d", npedido[i].codPizza);
            printf("\nStatus do pedido: ENTREGUE\n");
            j++;
        }
    }
    if(j==0){
    	printf("\nNenhum pedido entregue!\n");
	}
}
