//FONSECA SANCHEZ JORGE JARED
//2CV3
//2019302227

#include <iostream>
#include <stdio.h>
#include < stdlib.h>
using namespace std;

int main(){
	
	int aux = 0, j = 0, k = 0, n = 2000, i = 0;  //DECLARACION DE VARIABLES, AUXILIARES Y ARREGLOS
	int A[n];
	int B[n];
	int C[n];
	
	
	for (i=0;i<n;i++)  //LECTURA DE DATOS
	{
		scanf("%d", &A[i]);
		B[i]=A[i];
		C[i]=A[i];
	}
    
    int opcion = 0;
    do{ //CICLO PARA REPETIR EL MENU
           
           cout << "     MENU" << endl;
           cout << "---------------" << endl << endl;
           cout << "1. VER DATOS SIN ORDEN" << endl;
           cout << "2. ORDENAMIENTO BURBUJA" << endl;
           cout << "3. ORDENAMIENTO POR SELECCION" << endl;
           cout << "4. ORDENAMIENTO POR INSERCION" << endl;
           cout << "5. SALIR" << endl;
           cin >> opcion;
           
           switch(opcion) //MENU
           {
            case 1:  //MOSTRAR DATOS SIN ORDEN
			j = 0;

      	      for(j = 0; j < n; j++)
				{
					cout << "   " << A[j] << "   ";
				}
				
                 break;
                 
                case 2: //ORDENAMIENTO BURBUJA
                aux = 0; 
					j = 0;
					k = 0; 
					i = 0;
                 	for(j = 0; j < n; j++)
					{
						aux = A[0];
						for(k = 0; k < n; k++)
						{		
							if(aux > A[k])
							{
				
								A[k-1] = A[k];
								A[k] = aux;
								for(i = 0; i < n; i++)
								{
									cout << "   " << A[i] << "   ";
								}	
							}
							else
							{
								aux = A[k];
							}
						}
					}
                      break;
                      
                    case 3: //ORDENAMIENTO POR SELECCION
                    aux = 0; 
					j = 0;
					k = 0; 
					i = 0;
                    for(j = 0; j < n; j++)
					{
						for(k = j; k < n; k++)
						{
							aux = B[j];
		
							if(B[j] > B[k])
							{
								B[j] = B[k];
								B[k] = aux;
							}
						}
					}
                           break;
                           
                           case 4: //ORDENAMIENTO POR INSERCION
                            aux = 0; 
							j = 0;
							k = 0; 
							i = 0;
                           	for(i = 0; i < n; i++)
							{
								if(aux > C[i])
								{
									for(j = 0; j < n; j++)
									{
										C[j] = C[j+1];
								    }
								    C[n-1] = aux;
						
								}
								else
								{
									aux = C[i];
								}
							}
                                break;  
                                
                                case 5: //SALIR
                                
                                cout << "BYEEEE" << endl;
                                     break;     
           }
           
           
           
    }while(opcion != 5);
    
    
    return 0; 
}
