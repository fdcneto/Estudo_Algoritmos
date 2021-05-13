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

    float tempoQueda, g_Aceleracao, velocidadeQueda, kmConvert;
    cout << "CALCULAR VELOCIDADE DE QUEDA LIVRE:" << endl;
    cout << "Informe o tempo de queda em SEGUNDOS: ";
    cin >> tempoQueda;
    cout << "Informe a aceleração da GRAVIDADE em m/s: "; //Obs: formato exemplo--> 9.8
    cin >> g_Aceleracao;

    cout << "\nFÓRMULA CÁLCULO: \n";
    cout << "V = g * t \n";
    cout << "V = " << g_Aceleracao << " m/s² * " << tempoQueda << " segundos \n";
    velocidadeQueda = g_Aceleracao * tempoQueda;
    kmConvert = velocidadeQueda * HORA_CONVERT;
    cout << "Velocidade da queda = " << velocidadeQueda << " m/s ou " << kmConvert << " Km/h." << endl;



	cout << "\n\n";
	system("pause");
	return 0;
}
