#include <stdio.h>
#include <stdlib.h>

#include "ponto.h"

int main()
{
    Ponto *m_pto;
    float ext_x, ext_y;
    //m_pto = NULL;

    m_pto = Cria_ponto(ext_x,ext_y);
    m_pto=Cria_ponto(3.0, 2.3);

    Acessa_ponto(m_pto,&ext_x,&ext_y);

    printf ("\nValor de ext_x= %f", ext_x);
    printf ("\nValor de ext_y= %f", ext_y);

    printf ("\nValor de x no ponto= %f", m_pto->x);
    printf ("\nValor de y no ponto= %f", m_pto->y);


    printf ("\n---Depois de atribuir---");
    Atribuir_ponto(m_pto,5.0,5.3);

    Acessa_ponto(m_pto,&ext_x,&ext_y);

    printf ("\nValor de ext_x= %f", ext_x);
    printf ("\nValor de ext_y= %f", ext_y);

    printf ("\nValor de x= %f", m_pto->x);
    printf ("\nValor de y= %f", m_pto->y);

    Libera_ponto(m_pto);
    return 0;