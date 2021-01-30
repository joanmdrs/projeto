///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///           Projeto Sistema de Controle de Despensa Doméstica             ///
///              Developed by  @allangbr @joanmdrs - Jan, 2021              ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void menuPrincipal(void);

void menuProdutos(void);
void telaCadastrarProduto(void);
void telaPesquisarProduto(void);
void telaExcluirProduto(void);
void telaAlterarProduto(void);
///void telaListarProdutos(void);

void menuCompras(void);
void telaCadastrarCompra(void);
///void telaPesquisarCompra(void);
///void telaExcluirCompra(void);
///void telaAlterarCompra(void);
///void telaListarCompras(void);

void menuConsumo(void);
void telaCadastrarConsumo(void);
///void telaPesquisarConsumo(void);
///void telaExcluirConsumo(void);
///void telaAlterarConsumo(void);
///void telaListarConsumos(void);

void menuSobre(void);

int main(void) {
    ///menuSobre();
    ///menuPrincipal();
    ///menuProdutos();
    ///telaCadastrarProduto();
    ///telaPesquisarProduto();
    ///telaExcluirProduto();
    ///telaAlterarProduto();
    ///menuCompras();
    ///telaCadastrarCompra();
    ///menuConsumo();
    ///telaCadastrarConsumo();
    
    return 0;

}

void menuPrincipal(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            MENU:                                                  ///\n");
    printf("///                                                                   ///\n");
    printf("///            1 - Módulo Produtos                                    ///\n");
    printf("///            2 - Módulo Compras                                      ///\n");
    printf("///            3 - Módulo Consumo                                     ///\n");
    printf("///            4 - Sobre o Sistema                                    ///\n");
    printf("///            0 - Encerrar Programa                                  ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuProdutos(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            PRODUTOS:                                              ///\n");
    printf("///                                                                   ///\n");
    printf("///            1 - Cadastrar produto                                  ///\n");
    printf("///            2 - Pesquisar produto                                  ///\n");
    printf("///            3 - Excluir produto                                    ///\n");
    printf("///            4 - Alterar produto                                    ///\n");
    printf("///            5 - Listar produtos                                    ///\n");
    printf("///            5 - Voltar                                             ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaCadastrarProduto(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            CADASTRAR PRODUTO:                                     ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Codigo de Barras:                                    ///\n");
    printf("///            - Nome:                                                ///\n");
    printf("///            - Data de Validade:                                    ///\n");
    printf("///            - Local:                                               ///\n");
    printf("///            - Status:                                              ///\n");
    printf("///            - Quantidade:                                          ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaPesquisarProduto(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            PESQUISAR PRODUTO:                                     ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Codigo de Barras:                                    ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            PRODUTO LOCALIZADO!                                    ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Codigo de Barras:                                    ///\n");
    printf("///            - Nome:                                                ///\n");
    printf("///            - Data de Validade:                                    ///\n");
    printf("///            - Local:                                               ///\n");
    printf("///            - Status:                                              ///\n");
    printf("///            - Quantidade:                                          ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");  
    printf("///            Não existem produtos cadastrados com o código          ///\n");    
    printf("///            de barras informado.                                   ///\n");    
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaExcluirProduto(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            EXCLUIR PRODUTO:                                       ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Codigo de Barras:                                    ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            PRODUTO LOCALIZADO!                                    ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Codigo de Barras:                                    ///\n");
    printf("///            - Nome:                                                ///\n");
    printf("///            - Data de Validade:                                    ///\n");
    printf("///            - Local:                                               ///\n");
    printf("///            - Status:                                              ///\n");
    printf("///            - Quantidade:                                          ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Confirmar operação (S/n): S                          ///\n");
    printf("///                                                                   ///\n");
    printf("///            Produto excluído com sucesso!                          ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");                                                                  ///\n");
    printf("///            - Confirmar operação (S/n): N                          ///\n");
    printf("///                                                                   ///\n");
    printf("///            Operação cancelada!                                    ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaAlterarProduto(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            ALTERAR PRODUTO:                                       ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Codigo de Barras:                                    ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            PRODUTO LOCALIZADO!                                    ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Codigo de Barras:                                    ///\n");
    printf("///            - Nome:                                                ///\n");
    printf("///            - Data de Validade:                                    ///\n");
    printf("///            - Local:                                               ///\n");
    printf("///            - Status:                                              ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Deseja alterar todos os valores (S/n)? S             ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Novo Nome:                                           ///\n");
    printf("///            - Nova Data de Validade:                               ///\n");
    printf("///            - Novo Local:                                          ///\n");
    printf("///            - Novo Status:                                         ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Deseja alterar todos os valores (S/n)? N            ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Digite 'a' para alterar o nome:                      ///\n");
    printf("///            - Digite 'b' para alterar a validade:                  ///\n");
    printf("///            - Digite 'c' para alterar o local:                     ///\n");
    printf("///            - Digite 'd' para alterar o status:                    ///\n");
    printf("///                                                                   ///\n");
    printf("///            - a) Novo Nome:                                        ///\n");
    printf("///            - b) Nova Data de Validade:                            ///\n");
    printf("///            - c) Novo Local:                                       ///\n");
    printf("///            - d) Novo Status:                                      ///\n");
    printf("///            - e) Nova Quantidade:                                  ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Confirmar operação (S/n): S                          ///\n");
    printf("///                                                                   ///\n");
    printf("///            Produto alterado com sucesso!                          ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Confirmar operação (S/n): N                          ///\n");
    printf("///                                                                   ///\n");
    printf("///            Operação cancelada!                                    ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuCompras(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            COMPRAS:                                               ///\n");
    printf("///                                                                   ///\n");
    printf("///            1 - Cadastrar compra                                   ///\n");
    printf("///            2 - Pesquisar compra                                   ///\n");
    printf("///            3 - Excluir compra                                     ///\n");
    printf("///            4 - Alterar compra                                     ///\n");
    printf("///            5 - Listar compras                                     ///\n");
    printf("///            0 - Voltar                                             ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaCadastrarCompra(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            CADASTRAR COMPRA:                                      ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Item:                                                ///\n");
    printf("///            - Quantidade:                                          ///\n");
    printf("///            - Data:                                                ///\n");
    printf("///            - Horário:                                             ///\n");
    printf("///            - Valor:                                               ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();


}

void menuConsumo(void){
    system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            CONSUMOS:                                              ///\n");
    printf("///                                                                   ///\n");
    printf("///            1 - Cadastrar consumo                                  ///\n");
    printf("///            2 - Pesquisar consumo                                  ///\n");
    printf("///            3 - Excluir consumo                                    ///\n");
    printf("///            4 - Alterar consumo                                    ///\n");
    printf("///            5 - Listar consumos                                    ///\n");
    printf("///            5 - Voltar                                             ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void telaCadastrarConsumo(void){
     system("clear");
    printf("/////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                   ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        * * *     SIGPENTRY - Controle de Despensa    * * *        ///\n");
    printf("///        * * * * * * * * * * * * * * * * * * * * * * * * * *        ///\n");
    printf("///        ***************************************************        ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("///            CADASTRAR CONSUMO:                                     ///\n");
    printf("///                                                                   ///\n");
    printf("///            - Item:                                                ///\n");
    printf("///            - Quantidade:                                          ///\n");
    printf("///            - Data:                                                ///\n");
    printf("///            - Horário:                                             ///\n");
    printf("///        ___________________________________________________        ///\n");
    printf("///                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////\n\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void menuSobre(void) {
    system("clear");
    printf("\n");
    printf("BEM VINDO AO MENU SOBRE!\n\n");
    printf("Aqui você encontra informações à respeito do projeto SIG-PANTRY e também sobre a \n");
    printf("sua equipe de desenvolvimento. \n\n");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                           ///\n");
    printf("///              Universidade Federal do Rio Grande do Norte                  ///\n");
    printf("///                  Centro de Ensino Superior do Seridó                      ///\n");
    printf("///                Departamento de Computação e Tecnologia                    ///\n");
    printf("///                   Disciplina DCT1106 -- Programação                       ///\n");
    printf("///            Projeto Sistema de Controle de Despensa Doméstica              ///\n");
    printf("///               Developed by  @allangbr @joanmdrs - Jan, 2021               ///\n");
    printf("///                                                                           ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                           ///\n");
    printf("///       = = = = = Sistema de Controle de Despensa Doméstica = = = = =       ///\n");
    printf("///                                                                           ///\n");
    printf("///   O controle do estoque de produtos de uma despensa doméstica é uma das   ///\n");
    printf("///   atividades necessárias em praticamente todas as residências, uma vez    ///\n");
    printf("///   que a aquisição de produtos alimentícios, de higiene pessoal e de lim-  ///\n");
    printf("///   peza é rotineira e se faz necessário monitorar quantidades e datas de   ///\n");
    printf("///   validade de tais produtos. Tal atividade pode demandar tempo e esfor-   ///\n");
    printf("///   o, principalmente se for realizado sem a ajuda de um software. O pre-   ///\n");
    printf("///   sente projeto tem como objetivo desenvolver um programa de computador   ///\n");
    printf("///   que realize o registro e o acompanhamento desses produtos em uma resi-  ///\n");
    printf("///   dência, evitando o descontrole causado pela compra excessiva, ou pela   ///\n");
    printf("///   falta ou pelo vencimento dos itens adquiridos.                          ///\n");
    printf("///                                                                           ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                           ///\n");
    printf("///       = = = = = = = = = = Equipe Desenvolvedora = = = = = = = = = =       ///\n");
    printf("///                                                                           ///\n");
    printf("///   A equipe desenvoldedora deste projeto é formada por Allan Gabriel de    ///\n");
    printf("///   Almeida Oliveira e Joan de Azevedo Medeiros. Ambos são graduandos do    ///\n");
    printf("///   curso de SISTEMAS DA INFORMAÇÃO pela Universidade Federal do Rio Gran-  ///\n");
    printf("///   de do Norte - UFRN.                                                     ///\n");
    printf("///                                                                           ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////\n");
    printf("\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();

}