#include <stdio.h>

int main()
{
    int x,y,z,i;
    int con;
    i = 0;
    x = 1;
    y = 0;
    z = 1;
    int v = 1;
    int r[12];
    int a[12];
    r[1] = 5;
    a[1] = 3;
    r[2] = 4;
    a[2] = 3;
    r[3] = 6;
    a[3] = 6;
    r[4] = 2;
    a[4] = 1;
    r[5] = 6;
    a[5] = 3;
    r[6] = 9;
    a[6] = 5;
    r[7] = 4;
    a[7] = 1;
    r[8] = 7;
    a[8] = 4;
    r[9] = 3;
    a[9] = 0;
    r[10] = 4;
    a[10] = 2;
    r[11] = 6;
    a[11] = 2;
    r[12] = 4;
    a[12] = 4;
    while(x != 0){
   
    printf("Escolha a informcao que voce deseja acessar sobre a empresa RCLYR:\n");
    printf("1- Numero de Ligacoes.\n");
    printf("0- Encerrar secao.\n");
    scanf("%d", &x);
   
    switch(x){
        case 1:
       
            while( x == 1){
                printf("\n\n(----------- Numero de Ligacoes -----------)\n\n");
                printf("|-------------| (1) Registrar |------------|\n");
                printf("|-------------| (2) Recebidos |------------|\n");
                printf("|-------------| (0) Encerrar  |------------|\n");
                scanf("%d", &x);
                if(x == 0){
                    break;
                }
                if(x == 1){
                    z = 1;
                    while(z != 0){
                        printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                        printf("|-----------------|   Informe o mes   |----------------|\n");
                        printf("|-----------------|   (0) Encerrar    |----------------|\n");
                        scanf("%d", &v);
                        if(v == 0){
                            break;
                        }
                        switch(v){
                            case 1:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|--------------------|   JANEIRO   |-------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|--------------------|   JANEIRO   |-------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                            case 2:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|-------------------|   FEVEREIRO   |------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|-------------------|   FEVEREIRO   |------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 3:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   MARCO   |--------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   MARCO   |--------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 4:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   ABRIL   |--------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   ABRIL   |--------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 5:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   JUNHO   |--------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   JUNHO   |--------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 6:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   JULHO   |--------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   JULHO   |--------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 7:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   JULHO   |--------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   JULHO   |--------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 8:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   AGOSTO   |-------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|---------------------|   AGOSTO   |-------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 9:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|-------------------|   SETEMBRO   |-------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|-------------------|   SETEMBRO   |-------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 10:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|--------------------|   OUTUBRO   |-------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|--------------------|   OUTUBRO   |-------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 11:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|-------------------|   NOVEMBRO   |-------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|-------------------|   NOVEMBRO   |-------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                             case 12:
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|-------------------|   DEZEMBRO   |-------------------|\n");
                                printf("|-----------|   Informe as ligacoes FEITAS  |----------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                r[v] = con;
                               
                                printf("|-----------| Area de Registros e Alteracoes|----------|\n");
                                printf("|-------------------|   DEZEMBRO   |-------------------|\n");
                                printf("|----------|  Informe as ligacoes ATENDIDAS  |---------|\n");
                                printf("|------------------|  (-1) Encerrar   |----------------|\n");
                                scanf("%d", &con);
                                if(con == -1){
                                    break;
                                }
                                a[v] = con;
                             break;
                        }
                    }
                }
               
            }
            if(x == 2){
                while(x == 2){
                    printf("|--| Area de Conferencia de Informacoes |--|\n");
                    printf("|------------------------------------------|\n");
                    printf("| (1)JAN  |  (2)FEV  |  (3)MAR  |  (4)ABR  |\n");
                    printf("|                                          |\n");
                    printf("| (5)MAI  |  (6)JUN  |  (7)JUL  |  (8)AGO  |\n");
                    printf("|                                          |\n");
                    printf("| (9)SET  | (10)OUT  | (11)NOV  | (12)DEZ  |\n");
                    printf("|------------------------------------------|\n");
                    printf("|--------------| (0) TODOS |---------------|\n");
                    printf("|------------| (-1) Encerrar |-------------|\n");
                    scanf("%d", &y);
                    if(y == -1){
                        break;
                    }
       
                    while(y != -1){
                        scanf("%d", &y);
                       
                        if(y == 0){
                            printf("|--------------------Recebidas---Atendidas-||--------------------Recebidas---Atendidas-||--------------------Recebidas---Atendidas-|\n");
                            printf("|      (1)JAN      |     %d     |     %d     ||      (2)FEV      |     %d     |     %d     ||      (3)MAR      |     %d     |     %d     |\n", r[1], a[1],r[2], a[2],r[3], a[3]);
                            printf("|------------------------------------------||------------------------------------------||------------------------------------------|\n");
                            printf("|--------------------Recebidas---Atendidas-||--------------------Recebidas---Atendidas-||--------------------Recebidas---Atendidas-|\n");
                            printf("|      (4)ABR      |     %d     |     %d     ||      (5)MAI      |     %d     |     %d     ||      (6)JUN      |     %d     |     %d     |\n",r[4], a[4], r[5], a[5],r[6], a[6]);
                            printf("|------------------------------------------||------------------------------------------||------------------------------------------|\n");
                            printf("|--------------------Recebidas---Atendidas-||--------------------Recebidas---Atendidas-||--------------------Recebidas---Atendidas-|\n");
                            printf("|      (7)JUL      |     %d     |     %d     ||      (8)AGO      |     %d     |     %d     ||      (9)SET      |     %d     |     %d     |\n",r[7], a[7],r[8], a[8], r[9], a[9]);
                            printf("|------------------------------------------||------------------------------------------||------------------------------------------|\n");
                            printf("|--------------------Recebidas---Atendidas-||--------------------Recebidas---Atendidas-||--------------------Recebidas---Atendidas-|\n");
                            printf("|     (10)OUT      |     %d     |     %d     ||     (11)NOV      |     %d     |     %d     ||     (12)DEZ      |     %d     |     %d     |\n",r[10], a[10],r[11], a[11],r[12], a[12]);
                            printf("|------------------------------------------||------------------------------------------||------------------------------------------|\n");
                            printf("|-----------|   (0) Encerrar    |----------|\n");
                            scanf("%d", &z);
                            if(z == 0){
                                break;
                            }else{
                                printf("Coloque um valor valido!");
                                z = 1;
                            }
                            z = 1;
                        }
                        z = 1;
                       
                       
                        if(y == 1){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|      (1)JAN      |     %d     |     %d     |\n", r[1], a[1]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 2){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|      (2)FEV      |     %d     |     %d     |\n", r[2], a[2]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 3){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|      (3)MAR      |     %d     |     %d     |\n", r[3], a[3]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 4){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|      (4)ABR      |     %d     |     %d     |\n", r[4], a[4]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 5){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|      (5)MAI      |     %d     |     %d     |\n", r[5], a[5]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 6){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|      (6)JUN      |     %d     |     %d     |\n", r[6], a[6]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 7){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|      (7)JUL      |     %d     |     %d     |\n", r[7], a[7]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 8){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|      (8)AGO      |     %d     |     %d     |\n", r[8], a[8]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 9){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|      (9)SET      |     %d     |     %d     |\n", r[9], a[9]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 10){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|     (10)OUT      |     %d     |     %d     |\n", r[10], a[10]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 11){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|     (11)NOV      |     %d     |     %d     |\n", r[11], a[11]);
                            printf("|------------------------------------------|\n");
                        }
                        if(y == 12){
                            printf("|--------------------Recebidas---Atendidas-|\n");
                            printf("|     (12)DEZ      |     %d     |     %d     |\n", r[12], a[12]);
                            printf("|------------------------------------------|\n");
                        }
                       
                    }
                }
            }
           
           
            break;
            default:
            printf("Coloque uma opcao valida\n\n");
            break;
            




       
    }  
    }

    return 0;
}
