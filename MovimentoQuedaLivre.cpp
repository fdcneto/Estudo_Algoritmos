//fdcneto@gmail.com
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip> //função limitar casas decimais. Ex: cout <<fixed << setprecision (2) << VALOR A SER EXIBIDO
#include <locale> //Biblioteca que permite o uso de acentuação.

#define HORA_CONVERT 3.6;
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

	/*A aceleração da gravidade corresponde a 9,8 m/s², isto quer dizer que um corpo em
queda livre aumenta sua velocidade em 9,8 m/s a cada 1 segundo. */
    //equações --> V = g * t
    // d = (g*t²)/2

    /*Onde:

    V = velocidade
    t =  tempo de queda
    g = aceleração da gravidade
    d = distância percorrida pelo corpo em queda
    */

    float tempoQueda, g_Aceleracao, velocidadeQueda, kmConvert, distancia;
    int op;

    cout << "A queda livre é um movimento uniformemente acelerado e unidimensional, \ncuja aceleração é a aceleração da gravidade.\n";

    cout << "\nEscolha o cálculo que deseja realizar:";

    cout << "\n1: CALCULAR VELOCIDADE DE QUEDA LIVRE \n2: CALCULAR ESPAÇO PERCORRIDO E TEMPO DE QUEDA\n";
	cin >> op;

	switch (op){
    case 1:
    cout << "\n\nCALCULAR VELOCIDADE DE QUEDA LIVRE:" << endl;
    cout << "\nInforme o tempo de queda em SEGUNDOS: ";
    cin >> tempoQueda;
    cout << "Informe a aceleração da GRAVIDADE em m/s: "; //Obs: formato exemplo--> 9.8
    cin >> g_Aceleracao;

    cout << "\nFÓRMULA CÁLCULO: \n";
    cout << "V = g * t \n";
    cout << "V = " << g_Aceleracao << " m/s² * " << tempoQueda << " segundos \n";
    velocidadeQueda = g_Aceleracao * tempoQueda;
    kmConvert = velocidadeQueda * HORA_CONVERT;
    cout << "Velocidade da queda = " << velocidadeQueda << " m/s ou " << kmConvert << " Km/h." << endl;
    break;

    case 2:
    cout << "\n\nCALCULAR ESPAÇO PERCORRIDO E TEMPO DE QUEDA:" << endl;
    cout << "\nInforme a VELOCIDADE da queda em SEGUNDOS: ";
    cin >> velocidadeQueda;
    cout << "Informe a aceleração da GRAVIDADE em m/s: "; //Obs: formato exemplo--> 9.8
    cin >> g_Aceleracao;

    cout << "\nFÓRMULA CÁLCULO: \n";
    cout << " V =  g * t \n";
    cout << velocidadeQueda << " = " << g_Aceleracao << " * t \n" ;
    cout << "     " << velocidadeQueda << "\n";
    cout << "t = ------- \n";
    cout << "     " << g_Aceleracao << "\n";
    tempoQueda = velocidadeQueda/g_Aceleracao;
    cout << "t =  " << tempoQueda << "s \n\n";
    //-------------------------------------------------------------------------------------------------
    cout << "      " << "g * t² \n";
    cout << "d = ------- \n";
    cout << "      2  \n\n";

    cout << "      " << g_Aceleracao << " * " << tempoQueda << "² \n";
    cout << "d = ------- \n";
    cout << "      2  \n\n";

    cout << "      " << g_Aceleracao * (pow(tempoQueda, 2)) << "\n";
    cout << "d = ------- \n";
    cout << "      2  \n\n";
    distancia = g_Aceleracao * (pow(tempoQueda, 2))/2;
    cout << "d = "<< distancia << "m \n";

        break;

        default:
        cout << "Operação inválida\n";
        cout << "\nO programa será encerrado";
	}


	cout << "\n\n";
	system("pause");
	return 0;
}
