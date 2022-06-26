#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define max 200
#define T 1024
typedef struct registro {
	int ID, IDADE;
	char ETNIA [max], SEXO [max], MUNICIPIO_RESIDENCIA[max], CLASSIFICACAO[max], SINTUACAO_ATUAL[max],
	DATA_RESULTADO_EXAME[max], DATA_ATENDIMENTO[max], TIPO_COLETA[max], FLG_OBITO[max], DATA_OBITO[max],
	VALID_OBITO[max], AUSEGIA[max], ANOSMIA[max], FEBRE[max], TOSSE[max], CEFALEIA[max], DIFICULDADE_RESPIRATORIA[max],
	DISPINEIA[max], MIALGIA[max], SATURACAO_MENOR_NOVENTA_CINCO[max], ADINOFAGIA[max], DIARREIA[max], ADINAMIA[max],
	NAUSEA_VOMITO[max], CORIZA[max], NAO_INFORMADO[max], DOENCA_CARDIOVASCULAR[max], DIABETES[max], DOENCA_RESPIRATORIA_CRONICA[max],
	HIPERTENSAO[max], PACIENTE_ONCOLOGICO[max], IDOSO[max], PROFISSIONAL_SAUDE[max], OBSIDADE[max], DOENCA_RENAL_CRONICA[max],
	DOENCA_AUTO_IMUNE[max], ASMA[max], SEM_COMORBIDADE[max], FATOR_NAO_INFORMADO[max], OUTROS_FATORES[max], PNEUMOPATIA[max];
	}dados;

void prencher(dados* doc);
void selectionsort(dados* doc, int tam);
void imprimir(dados* doc, int tam);

int main(){
    setlocale(LC_ALL,"");
    dados* doc;
    doc = (dados*)malloc(sizeof(dados)* T);
    int tam = 101;
    int op;
    prencher(doc);
	while(op != 3){
        system ("cls");
        printf("\n\t   *** MENU ***\n\n");
		printf("1 => DESCRIÇÃO DO ARQUIVO DATASET\n");
		printf("2 => LISTAR ARQUIVO CSV ORDENADO\n");
		printf("3 => SAIR\n");
		printf("ESCOLHA UMA OPÇÃO\n");
		scanf( "%d" , &op);
		system ("cls");
		switch(op){
			case 1:
			    printf("\t\t\t\t\tPainel Covid-19 em Alagoas\n\n");
			    printf("\tPainel de informações interativas sobre a pandemia do COVID-19 em Alagoas e seus municípios.\n\tInformações de saúde, estatísticas e geoespaciais para o acompanhamento dos casos em Alagoas.\n\n");
				system("pause");
			break;
			case 2:
				selectionsort(doc, tam);
				imprimir(doc,  tam);
				system("pause");
			break;
			default :
			    break;
		}
	}
    return 0;
}
void prencher(dados* doc){
    int contLinhas;
	int cont, linha =0;
	char aux[T];
    char buf[T];
    FILE* arq = fopen("sample.csv", "r");
    if(arq == NULL){
         printf("ARQUIVO NÃO ENCONTRADO", arq);
         exit(0);
    }
    while(fgets(buf,T,arq)){
    cont = 0;
    if(contLinhas == 1) continue;
    char *campo = strtok(buf,",");
    while(campo){
        if(cont == 0)	{
            strcpy(aux,campo);
            doc[linha].ID = atoi(aux);
            }
        if(cont == 1){
            strcpy(aux,campo);
            strcpy(doc[linha].ETNIA,aux);
            }
        if(cont == 2){
            strcpy(aux,campo);
            strcpy(doc[linha].SEXO,aux);
            }
        if(cont == 3){
            strcpy(aux,campo);
            strcpy(doc[linha].MUNICIPIO_RESIDENCIA,aux);
            }
        if(cont == 4){
            strcpy(aux,campo);
            strcpy(doc[linha].CLASSIFICACAO,aux);
            }
        if(cont == 5){
            strcpy(aux,campo);
            strcpy(doc[linha].SINTUACAO_ATUAL,aux);
            }
        if(cont == 6){
            strcpy(aux,campo);
            strcpy(doc[linha].DATA_RESULTADO_EXAME,aux);
            }
        if(cont == 7){
            strcpy(aux,campo);
            strcpy(doc[linha].DATA_ATENDIMENTO,aux);
            }
            if(cont == 8){
            strcpy(aux,campo);
            strcpy(doc[linha].TIPO_COLETA,aux);
            }
        if(cont == 9){
            strcpy(aux,campo);
            doc[linha].IDADE = atoi(aux);
            }
        if(cont == 10){
            strcpy(aux,campo);
            strcpy(doc[linha].FLG_OBITO,aux);
            }
        if(cont == 11){
            strcpy(aux,campo);
            strcpy(doc[linha].DATA_OBITO,aux);
            }
        if(cont == 12){
            strcpy(aux,campo);
            strcpy(doc[linha].VALID_OBITO,aux);
            }
        if(cont == 13){
            strcpy(aux,campo);
            strcpy(doc[linha].AUSEGIA,aux);
            }
        if(cont == 14){
            strcpy(aux,campo);
            strcpy(doc[linha].ANOSMIA,aux);
            }
        if(cont == 15){
            strcpy(aux,campo);
            strcpy(doc[linha].FEBRE,aux);
            }
        if(cont == 16){
            strcpy(aux,campo);
            strcpy(doc[linha].TOSSE,aux);
            }
        if(cont == 17){
            strcpy(aux,campo);
            strcpy(doc[linha].CEFALEIA,aux);
            }
        if(cont == 18){
            strcpy(aux,campo);
            strcpy(doc[linha].DIFICULDADE_RESPIRATORIA,aux);
            }
        if(cont == 19){
            strcpy(aux,campo);
            strcpy(doc[linha].DISPINEIA,aux);
            }
        if(cont == 20){
            strcpy(aux,campo);
            strcpy(doc[linha].MIALGIA,aux);
            }
        if(cont == 21){
            strcpy(aux,campo);
            strcpy(doc[linha].SATURACAO_MENOR_NOVENTA_CINCO,aux);
            }
        if(cont == 22){
            strcpy(aux,campo);
            strcpy(doc[linha].ADINOFAGIA,aux);
            }
        if(cont == 23){
            strcpy(aux,campo);
            strcpy(doc[linha].DIARREIA,aux);
            }
        if(cont == 24){
            strcpy(aux,campo);
            strcpy(doc[linha].ADINAMIA,aux);
            }
        if(cont == 25){
            strcpy(aux,campo);
            strcpy(doc[linha].NAUSEA_VOMITO,aux);
            }
        if(cont == 26){
            strcpy(aux,campo);
            strcpy(doc[linha].CORIZA,aux);
            }
        if(cont == 27){
            strcpy(aux,campo);
            strcpy(doc[linha].NAO_INFORMADO,aux);
            }
        if(cont == 28){
            strcpy(aux,campo);
            strcpy(doc[linha].DOENCA_CARDIOVASCULAR,aux);
            }
        if(cont == 29){
            strcpy(aux,campo);
            strcpy(doc[linha].DIABETES,aux);
            }
        if(cont == 30){
            strcpy(aux,campo);
            strcpy(doc[linha].DOENCA_RESPIRATORIA_CRONICA,aux);
            }
        if(cont == 31){
            strcpy(aux,campo);
            strcpy(doc[linha].HIPERTENSAO,aux);
            }
        if(cont == 32){
            strcpy(aux,campo);
            strcpy(doc[linha].PACIENTE_ONCOLOGICO,aux);
            }
        if(cont == 33){
            strcpy(aux,campo);
            strcpy(doc[linha].IDOSO,aux);
            }
        if(cont == 34){
            strcpy(aux,campo);
            strcpy(doc[linha].PROFISSIONAL_SAUDE,aux);
            }
        if(cont == 35){
            strcpy(aux,campo);
            strcpy(doc[linha].OBSIDADE,aux);
            }
        if(cont == 36){
            strcpy(aux,campo);
            strcpy(doc[linha].DOENCA_RENAL_CRONICA,aux);
            }
        if(cont == 37){
            strcpy(aux,campo);
            strcpy(doc[linha].DOENCA_AUTO_IMUNE,aux);
            }
        if(cont == 38){
            strcpy(aux,campo);
            strcpy(doc[linha].ASMA,aux);
            }
        if(cont == 39){
            strcpy(aux,campo);
            strcpy(doc[linha].SEM_COMORBIDADE,aux);
            }
        if(cont == 40){
            strcpy(aux,campo);
            strcpy(doc[linha].FATOR_NAO_INFORMADO,aux);
            }
        if(cont == 41){
            strcpy(aux,campo);
            strcpy(doc[linha].OUTROS_FATORES,aux);
            }
        if(cont == 42){
            strcpy(aux,campo);
            strcpy(doc[linha].PNEUMOPATIA,aux);
            }
        campo = strtok(NULL,",");
        cont++;
        }
        linha++;
    }
fclose(arq);
}
void selectionsort(dados* doc, int tam){
    int i, j, min;
    dados troca;
    for(i = 0; i < tam; i++){
        min = i;
        for(j = i+1; j < tam; j++){
            if(doc[j].ID < doc[min].ID){
                min = j;
            }
            if(i != min){
                troca = doc[i];
                doc[i] = doc[min];
                doc[min] = troca;
            }
        }
    }
}
void imprimir(dados* doc, int tam){
    int i;
    for(i = 1;i < tam; i++){
    printf("____________________________________________________________________________\n");
    printf("  ID:\t\t\t\t     %d\n",doc[i].ID);
    printf("  ETNIA:\t\t\t    %s\n", doc[i].ETNIA);
    printf("  SEXO:\t\t\t\t    %s\n ", doc[i].SEXO);
    printf(" MUNICIPIO_RESIDENCIA:\t\t    %s\n", doc[i].MUNICIPIO_RESIDENCIA);
    printf("  CLASSIFICACAO:\t\t    %s\n  ", doc[i].CLASSIFICACAO);
    printf("SINTUACAO_ATUAL:\t\t    %s\n  ", doc[i].SINTUACAO_ATUAL);
    printf("DATA_RESULTADO_EXAME:\t\t    %s\n  ", doc[i].DATA_RESULTADO_EXAME);
    printf("DATA_ATENDIMENTO?:\t\t    %s \n", doc[i].DATA_ATENDIMENTO);
    printf("  TIPO_COLETA:\t\t\t    %s\n",doc[i].TIPO_COLETA);
    printf("  IDADE:\t\t\t     %d\n", doc[i].IDADE);
    printf("  FLG_OBITO:\t\t\t    %s \n", doc[i].FLG_OBITO);
    printf("  DATA_OBITO:\t\t\t    %s\n", doc[i].DATA_OBITO);
    printf("  VALID_OBITO:\t\t\t    %s \n", doc[i].VALID_OBITO);
    printf("  AUSEGIA:\t\t\t    %s\n", doc[i].AUSEGIA);
    printf("  ANOSMIA:\t\t\t    %s \n", doc[i].ANOSMIA);
    printf("  FEBRE:\t\t\t    %s\n", doc[i].FEBRE);
    printf("  TOSSE:\t\t\t    %s \n", doc[i].TOSSE);
    printf("  CEFALEIA:\t\t\t    %s \n", doc[i].CEFALEIA);
    printf("  DIFICULDADE_RESPIRATORIA:\t    %s \n",doc[i].DIFICULDADE_RESPIRATORIA);
    printf("  DISPINEIA:\t\t\t    %s \n", doc[i].DISPINEIA);
    printf("  MIALGIA:\t\t\t    %s \n", doc[i].MIALGIA);
    printf("  SATURAÇÃO_MENOR_NOVENTA_CINCO:    %s\n", doc[i].SATURACAO_MENOR_NOVENTA_CINCO);
    printf("  ADINOFAGIA:\t\t\t    %s\n", doc[i].ADINOFAGIA);
    printf("  DIARREIA:\t\t\t    %s\n", doc[i].DIARREIA);
    printf("  ADINAMIA:\t\t\t    %s\n", doc[i].ADINAMIA);
    printf("  NAUSEA_VOMITO:\t\t    %s\n", doc[i].NAUSEA_VOMITO);
    printf("  CORIZA:\t\t\t    %s\n", doc[i].CORIZA);
    printf("  NÃO_INFORMADO:\t\t    %s\n", doc[i].NAO_INFORMADO);
    printf("  DOENÇA_CARDIOVASCULAR:\t    %s\n", doc[i].DOENCA_CARDIOVASCULAR);
    printf("  DIABETES:\t\t\t    %s\n", doc[i].DIABETES);
    printf("  DOENÇA_RESPIRATÓRIA_CRONICA:\t    %s\n", doc[i].DOENCA_RENAL_CRONICA);
    printf("  HIPERTENSÃO:\t\t\t    %s\n", doc[i].HIPERTENSAO);
    printf("  PACIENTE_ONCOLOGICO: \t\t    %s\n", doc[i].PACIENTE_ONCOLOGICO);
    printf("  IDOSO:\t\t\t    %s\n", doc[i].IDOSO);
    printf("  PROFISSIONAL_SAÚDE:\t\t    %s\n", doc[i].PROFISSIONAL_SAUDE);
    printf("  OBSIDADE:\t\t\t    %s\n", doc[i].OBSIDADE);
    printf("  DOENÇA_RENAL_CRONICA:\t\t    %s\n", doc[i].DOENCA_RENAL_CRONICA);
    printf("  DOENÇA_AUTO_IMUNE:\t\t    %s\n", doc[i].DOENCA_AUTO_IMUNE);
    printf("  ASMA:\t\t\t\t    %s\n", doc[i].ASMA);
    printf("  SEM_COMORBIDADE:\t\t    %s\n", doc[i].SEM_COMORBIDADE);
    printf("  FATOR_NÃO_INFORMADO:\t\t    %s\n", doc[i].FATOR_NAO_INFORMADO);
    printf("  OUTROS_FATORES: \t\t    %s\n", doc[i].OUTROS_FATORES);
    printf("  PNEUMOPATIA:\t\t\t    %s\n", doc[i].PNEUMOPATIA);
    }
}
