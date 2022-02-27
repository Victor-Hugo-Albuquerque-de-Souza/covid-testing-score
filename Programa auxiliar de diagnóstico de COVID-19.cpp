#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <strings.h>
#include <conio.h>

int menu, score, resp;
char febre, dorc, secre, garg, tosse, ar, corpo, dia, contato, aglo;

struct cadastro {
	char nome[30];
	char cpf [20];
	int idade;
	char sexo;
		};
struct cadastro paciente;
	
int main (){
	
	setlocale(LC_ALL, "Portuguese");
	FILE *fichas;
	
	system("cls");
	printf ("++++++++++++ PROGRAMA AUXILIAR DE DIAGNÓSTICO DE COVID-19 DA UNICESUMAR ++++++++++++ \n\n");
	printf ("==========================  DIGITE UMA DAS OPÇÕES ABAIXO: ==========================\n\n");
	printf ("      1. Informações sobre medidas não farmacológicas de prevenção ao COVID-19;      \n");
	printf ("                              2. Cadastro de pacientes e triagem;                    \n");
	printf ("                                      3. Sair;                                       \n\n");
	printf ("====================================================================================\n\n");
	scanf ("%i", &menu);
	
	switch (menu) {
		case 1:
			fflush(stdin);
			system("cls");
			printf ("========================  PRINCIPAIS MEDIDAS DE PREVENÇÃO: =========================\n\n");
			printf ("              1. Lave as mãos frequentemente com sabão e água abundante;             \n");
			printf ("   2. Se puder, fique em casa. Se não, use máscaras do tipo PFF2, de preferência;     \n");
			printf ("              3. Higienize as mãos com álcool em gel 70 %% com frequência;            \n");
			printf ("                              4. Evite aglomerações;                                 \n\n");
			printf ("==================================================================================== \n\n");
			system ("pause");
			return main();	
			
		case 2:
			fflush(stdin);
			system("cls");
			
			char caractere;
			int i = 0;
			
			printf ("========================= CADASTRO E ANAMNESE DE PACIENTES: ======================== \n\n");
			printf ("Digite o nome do paciente: ");					
			gets (paciente.nome);
			fichas = fopen("fichas.txt", "a");
			fprintf (fichas, "=============================== FICHA DE TRIAGEM: ================================\n\n"); 
			fprintf (fichas, "Nome do paciente: %s \n", paciente.nome);
			printf ("\n");
			fflush(stdin);
			printf ("Digite o CPF: ");
			scanf ("%s", &paciente.cpf);
			fprintf (fichas, "CPF: %s \n", paciente.cpf);
			printf ("\n");
			fflush(stdin);
			printf ("Digite a idade: ");
			scanf ("%i", &paciente.idade);
			fprintf (fichas, "Idade: %i \n", paciente.idade);
			printf ("\n");
			fflush(stdin);
			printf ("Sexo (M/F): ");
			scanf ("%s", &paciente.sexo);
			fprintf (fichas, "Sexo: %c \n\n", paciente.sexo);
			printf ("\n\n");
			printf ("==================================================================================== \n\n");
			fflush(stdin);
			system ("pause");
			
			system ("cls");
			printf ("=============================== ANÁLISE DOS SINTOMAS: ============================== \n\n");
			printf ("                        1. O paciente apresenta febre (S/N): \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &febre);
			if (febre == 's') {
				score += 5;
			} else if (febre == 'S') {
				score += 5;
				} else if (febre == 'n') {
					} else if (febre == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
			
			system ("cls");
			printf ("==================================================================================== \n\n");
			printf ("                      2. O paciente apresenta dores de cabeça (S/N)? \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &dorc);
			if (dorc == 's') {
				score += 1;
			} else if (dorc == 'S') {
				score += 1;
				} else if (dorc == 'n') {
					} else if (dorc == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
			
			system ("cls");
			printf ("==================================================================================== \n\n");
			printf ("                       3. Tem secreção nasal ou espirros (S/N)? \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &secre);
			if (secre == 's') {
				score += 1;
			} else if (secre == 'S') {
				score += 1;
				} else if (secre == 'n') {
					} else if (secre == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
			
			system ("cls");
			printf ("==================================================================================== \n\n");
			printf ("                        4. Tem dor/irritação na garganta (S/N)? \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &garg);
			if (garg == 's') {
				score += 1;
			} else if (garg == 'S') {
				score += 1;
				} else if (garg == 'n') {
					} else if (garg == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
			
			system ("cls");
			printf ("==================================================================================== \n\n");
			printf ("                            5. Tem tosse seca (S/N)? \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &tosse);
			if (tosse == 's') {
				score += 3;
			} else if (tosse == 'S') {
				score += 3;
				} else if (tosse == 'n') {
					} else if (tosse == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
			
			system ("cls");
			printf ("==================================================================================== \n\n");
			printf ("                        6. Tem dificuldade respiratória? (S/N) \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &ar);
			if (ar == 's') {
				score += 10;
			} else if (ar == 'S') {
				score += 10;
				} else if (ar == 'n') {
					} else if (ar == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
							
			system ("cls");
			printf ("==================================================================================== \n\n");
			printf ("                           7. Tem dores no corpo (S/N)? \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &corpo);
			if (corpo == 's') {
				score += 1;
			} else if (corpo == 'S') {
				score += 1;
				} else if (corpo == 'n') {
					} else if (corpo == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
							
			system ("cls");
			printf ("==================================================================================== \n\n");
			printf ("                               8. Tem diarréia (S/N)? \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &dia);
			if (dia == 's') {
				score += 1;
			} else if (dia == 'S') {
				score += 1;
				} else if (dia == 'n') {
					} else if (dia == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
							
			system ("cls");
			printf ("==================================================================================== \n\n");
			printf ("9. Esteve em contato, nos últimos 14 dias, com um caso positivo de COVID-19 (S/N)? \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &contato);
			if (contato == 's') {
				score += 10;
			} else if (contato == 'S') {
				score += 10;
				} else if (contato == 'n') {
					} else if (contato == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
							
		
			system ("cls");
			printf ("==================================================================================== \n\n");
			printf ("             10. Esteve em locais com grande aglomeração? (S/N)? \n\n");
			printf ("==================================================================================== \n\n");
			printf ("Resposta = ");
			scanf ("%s", &aglo);
			if (aglo == 's') {
				score += 3;
			} else if (aglo == 'S') {
				score += 3;
				} else if (aglo == 'n') {
					} else if (aglo == 'N') {
						} else {
							printf ("Resposta inválida. \n\n");
							resp += 1;
							system ("pause");	
							}
			fflush(stdin);
			
			fprintf (fichas, "O paciente apresenta os seguintes sintomas: \n\n");
			fprintf (fichas, "Febre = %c; \n", febre);
			fprintf (fichas, "Dor de cabeça = %c; \n", dorc);
			fprintf (fichas, "Secreção nasal ou espirros = %c; \n", secre);
			fprintf (fichas, "Dor ou irritação na garganta = %c; \n", garg);
			fprintf (fichas, "Tosse seca = %c; \n", tosse);
			fprintf (fichas, "Dificuldade respiratória = %c; \n", ar);
			fprintf (fichas, "Dores pelo corpo = %c; \n", corpo);
			fprintf (fichas, "Diarréia = %c; \n", dia);
			fprintf (fichas, "Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19 = %c; \n", contato);
			fprintf (fichas, "Esteve em aglomeração = %c; \n\n", aglo);
			if (resp != 0) {
				fprintf (fichas, "O paciente deu alguma(s) resposta(s) inválida(s), favor considerar este fato. \n\n");
			}
			fclose (fichas);
			
			system ("cls");				
			printf ("+++++++++++++++++++++ RESULTADO DO SCORE DE SINTOMAS ++++++++++++++++++++++ \n\n");
			if (score <= 9) {
				printf ("Prezado paciente, siga para a ala de RISCO BAIXO. \n");
				if (resp != 0) {
						printf ("Contudo, alguma(s) resposta(s) da sua análise não foram válidas. Sugere-se \nnovo preenchimento. \n\n");
						}
				printf ("=========================================================================== \n\n");
			} 
					else if (score >= 10 && score <= 19) {
					printf ("Prezado paciente, siga para a ala de RISCO MÉDIO. \n");
					if (resp != 0) {
						printf ("Contudo, alguma(s) resposta(s) da sua análise não foram válidas. Sugere-se \nnovo preenchimento. \n\n");
					    }
					printf ("=========================================================================== \n\n");
				    }	
						else {
							printf ("Prezado paciente, siga para a ala de RISCO ALTO. \n");
							if (resp != 0) {
								printf ("Contudo, alguma(s) resposta(s) da sua análise não foram válidas. Sugere-se \nnovo preenchimento. \n\n");
						    }	
							printf ("=========================================================================== \n\n");
						}
						system ("pause");					
		
		case 3: {
			fflush(stdin);
			system("cls");
			printf ("======================================== \n\n");
			printf ("      Obrigado pelo uso, melhoras! \n\n");
			printf ("======================================== \n");
			printf ("    Dev. por Victor H. Souza 2021 ® \n\n");
			system ("pause");
			exit(0);
		}

		default:{
			fflush(stdin);
			system ("cls");
			printf ("\a======================== \n\n");
			printf ("Digite uma opção válida. \n\n");
			printf ("========================= \n\n");
			system ("pause");
			return main ();
			break;
		}
	
	
	return 0;
}
