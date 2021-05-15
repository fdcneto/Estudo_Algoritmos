//fdcneto@gmail.com
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip> //fun��o limitar casas decimais. Ex: cout <<fixed << setprecision (2) << VALOR A SER EXIBIDO
#include <locale> //Biblioteca que permite o uso de acentua��o.

#define HORA_CONVERT 3.6;
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

	/*A acelera��o da gravidade corresponde a 9,8 m/s�, isto quer dizer que um corpo em
queda livre aumenta sua velocidade em 9,8 m/s a cada 1 segundo. */
    //equa��es --> V = g * t
    // d = (g*t�)/2

    /*Onde:

    V = velocidade
    t =  tempo de queda
    g = acelera��o da gravidade
    d = dist�ncia percorrida pelo corpo em queda
    */

    float tempoQueda, g_Aceleracao, velocidadeQueda, kmConvert, distancia;
    int op;

    cout << "A queda livre � um movimento uniformemente acelerado e unidimensional, \ncuja acelera��o � a acelera��o da gravidade.\n";

    cout << "\nEscolha o c�lculo que deseja realizar:";

    cout << "\n1: CALCULAR VELOCIDADE DE QUEDA LIVRE \n2: CALCULAR ESPA�O PERCORRIDO E TEMPO DE QUEDA\n";
	cin >> op;

	switch (op){
    case 1:
    cout << "\n\nCALCULAR VELOCIDADE DE QUEDA LIVRE:" << endl;
    cout << "\nInforme o tempo de queda em SEGUNDOS: ";
    cin >> tempoQueda;
    cout << "Informe a acelera��o da GRAVIDADE em m/s: "; //Obs: formato exemplo--> 9.8
    cin >> g_Aceleracao;

    cout << "\nF�RMULA C�LCULO: \n";
    cout << "V = g * t \n";
    cout << "V = " << g_Aceleracao << " m/s� * " << tempoQueda << " segundos \n";
    velocidadeQueda = g_Aceleracao * tempoQueda;
    kmConvert = velocidadeQueda * HORA_CONVERT;
    cout << "Velocidade da queda = " << velocidadeQueda << " m/s ou " << kmConvert << " Km/h." << endl;
    break;

    case 2:
    cout << "\n\nCALCULAR ESPA�O PERCORRIDO E TEMPO DE QUEDA:" << endl;
    cout << "\nInforme a VELOCIDADE da queda em SEGUNDOS: ";
    cin >> velocidadeQueda;
    cout << "Informe a acelera��o da GRAVIDADE em m/s: "; //Obs: formato exemplo--> 9.8
    cin >> g_Aceleracao;

    cout << "\nF�RMULA C�LCULO: \n";
    cout << " V =  g * t \n";
    cout << velocidadeQueda << " = " << g_Aceleracao << " * t \n" ;
    cout << "     " << velocidadeQueda << "\n";
    cout << "t = ------- \n";
    cout << "     " << g_Aceleracao << "\n";
    tempoQueda = velocidadeQueda/g_Aceleracao;
    cout << "t =  " << tempoQueda << "s \n\n";
    //-------------------------------------------------------------------------------------------------
    cout << "      " << "g * t� \n";
    cout << "d = ------- \n";
    cout << "      2  \n\n";

    cout << "      " << g_Aceleracao << " * " << tempoQueda << "� \n";
    cout << "d = ------- \n";
    cout << "      2  \n\n";

    cout << "      " << g_Aceleracao * (pow(tempoQueda, 2)) << "\n";
    cout << "d = ------- \n";
    cout << "      2  \n\n";
    distancia = g_Aceleracao * (pow(tempoQueda, 2))/2;
    cout << "d = "<< distancia << "m \n";

        break;

        default:
        cout << "Opera��o inv�lida\n";
        cout << "\nO programa ser� encerrado";
	}


	cout << "\n\n";
	system("pause");
	return 0;
}
