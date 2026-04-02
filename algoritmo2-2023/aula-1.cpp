#include <stdio.h>
#include <stdlib.h>

char palavra[100];
int controle = 0;
int tamanho = 0;

void main(void)
{
	printf("\nConstruindo nosso primeiro Autom√¢to Finito Determin√≠stico");
	printf("\nEntre com uma palavra: ");
	scanf("%s", &palavra);
	//Calcula o tamanho da palavra
	while(palavra[tamanho]!='\0')
	{
		tamanho = tamanho + 1;
	}

	printf("\nPalavra lida: %s", palavra);
	printf("\nTamanho da Palavra: %d", tamanho);

	controle = 0;
	q0();

}

void q0()
{
	printf("\nq0");
	if(controle<tamanho)
	{
		if(palavra[controle]=='a')
		{
			controle = controle + 1;
			q1();
		}
		else if(palavra[controle]=='b')
		{
			controle = controle + 1;
			q2();
		}
		else
		{
			qErro();
		}
	}
	else
	{
		qErro();
	}


}

void q1()
{
	printf("\nq1");
	if(controle<tamanho)
	{
		if(palavra[controle]=='a')
		{
			controle = controle + 1;
			qf();
		}
		else if(palavra[controle]=='b')
		{
			controle = controle + 1;
			q2();
		}
		else
		{
			qErro();
		}
	}
	else
	{
		qErro();
	}
}

void q2()
{
	printf("\nq2");
	if(controle<tamanho)
	{
		if(palavra[controle]=='a')
		{
			controle = controle + 1;
			q1();
		}
		else if(palavra[controle]=='b')
		{
			controle = controle + 1;
			qf();
		}
		else
		{
			qErro();
		}
	}
	else
	{
		qErro();
	}

}

void qf()
{
	printf("\nqf");
	if(controle<tamanho)
	{
		if(palavra[controle]=='a')
		{
			controle = controle + 1;
			qf();
		}
		else if(palavra[controle]=='b')
		{
			controle = controle + 1;
			qf();
		}
		else
		{
			qErro();
		}
	}
	else
	{
		printf("\nPalavra Aceita");
	}

}

void qErro()
{
	printf("\nqErro");
	printf("\nPalavra N√£o Aceita");
}

