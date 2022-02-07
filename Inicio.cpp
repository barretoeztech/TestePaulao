#include <stdio.h>
/**
 * @brief Classe de teste, para testar o funcionamento do programa
 *
 */
class teste
{
public:
    int valor;                    // variavel
    teste();                      // metodo contrutor
    ~teste();                     // metodo destrutor
    void set_valor(int variavel); // metodo para setar uma variavel
    int get_valor();              // metodo para ler uma variavel
};

teste newteste = teste(); // instancia da classe teste

int main(void)
{
    printf("Hola mundo\n");
    printf("Valor inicial: %d\n", newteste.get_valor());
    newteste.set_valor(10);
    printf("Valor = %d\n", newteste.get_valor());
    return 0;
}
/**
 * @brief Construtor da classe teste
 *
 */
teste::teste()
{
    printf("Contrutor\n");
    valor = 5; // inicializa a variavel
}
/**
 * @brief Destroy the teste::teste object
 *
 */
teste::~teste()
{
    printf("Destrutor\n");
}
/**
 * @brief Metodo para setar uma variavel
 *
 * @param variavel
 */
void teste::set_valor(int variavel)
{
    printf("Grava_valor(%d)\n", variavel);
    valor = variavel;
}
/**
 * @brief Metodo para ler uma variavel
 *
 * @return int
 */
int teste::get_valor()
{
    printf("Le_valor\n");
    return valor;
}