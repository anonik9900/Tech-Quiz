#include <iostream>
#include <string>



using namespace std;

//Codice sorgente versione 0.1.1



int main()



{
    string nome;
	int x,y,z,w,l,m,n,o,p,q,r,s,t,u;
	cout<<"                     QUIZ IN C + +"<<endl;
	cout <<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout <<"              SVILUPPATO DA NICHOLAS IMPIERI"<<endl;
	cout<<endl;
	system ("pause");
	cout <<endl;
	cout<<"            Per cosa sta l'acronimo HTML? " <<endl; //DOMANDA N1
	cout<<endl;
	cout<<"1)HyperText Media Language"<<endl;
	cout<<endl;
	cout<<"2)HyperText Markup Language"<<endl;
	cout<<endl;
	cout<<"3)HyperTool Match Language"<<endl;
	cout<<endl;
	cout<<"4)Head Markup Language"<<endl;
	cout<<""<<endl;

	cin>>x;
	cout<<endl;

	switch(x){

		case(1):
			cout<<"SBAGLIATO"<<endl;
			break;

			case(2):
				cout<<"ESATTO"<<endl;
				break;

				case(3):
					cout<<"SBAGLIATO"<<endl;
					break;

					case(4):
						cout<<"SBAGLIATO"<<endl;
						break;

						default:
							cout<<"ERRORE IL NUMERO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
							break;

	}
	cout <<""<<endl;
	cout<<"              Seconda Domanda"<<endl;
	cout<<""<<endl;
	cout<<"       A quale data corrisponde l'uscita del primo iphone"<<endl;
	cout<<""<<endl;
	cout<<"1)9 GENNAIO 2007"<<endl;
	cout<<endl;
	cout<<"2)16 DICEMBRE 2008"<<endl;
	cout<<endl;
	cout<<"3)8 GIUGNO 2009"<<endl;
	cout<<endl;
	cout<<"4)4 OTTOBRE 2007"<<endl;
	cout<<""<<endl;

	cin>>y;
	cout<<endl;

	switch(y){

		case(1):
			cout<<"ESATTO"<<endl;
			break;

			case(2):
				cout<<"SBAGLIATO"<<endl;
				break;

				case(3):
					cout<<"MA SEI SERIO??"<<endl;
					break;

					case(4):
						cout<<"CI SEI ANDATO VICINO"<<endl;

						default:
							cout<<"ERRORE IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
							break;
	}
	cout<<""<<endl;
	cout<<"          TERZA DOMANDA"<<endl;
	cout<<endl;
	cout<<"    Quando e' stato fondato YouTube? "<< endl;
	cout<<""<<endl;
	cout<<"1)14 MARZO 2006"<<endl;
	cout<<endl;
	cout<<"2)17 OTTOBRE 2005"<<endl;
	cout<<endl;
	cout<<"3)24 FEBBRAIO 2009"<<endl;
	cout<<endl;
	cout<<"4)1 GENNAIO 2007"<<endl;
	cout<<endl;
	cout<<"5)4 FEBBRAIO 2005"<<endl;
	cout<<""<<endl;

	cin>>z;
	cout<<endl;

	switch(z){

		case(1):
			cout<<"SBAGLIATO"<<endl;
			break;

			case(2):
				cout<<"SBAGLIATO"<<endl;
				break;

				case(3):
					cout<<"SBAGLIATO"<<endl;
					break;

					case(4):
						cout<<"SBAGLIATO"<<endl;
						break;

						case(5):
							cout<<"ESATTO"<<endl;
							break;

							default:
								cout<<"ERRORE IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
								break;
	}



    cout<<""<<endl;
    cout <<" Chi ha fondato Google?"<<endl;
    cout<<""<<endl;
    cout<<"1) Larry Page e Steven Wozniak"<<endl;
    cout<<endl;
    cout<<"2) Steve Jobs e Bill Gates"<<endl;
    cout<<endl;
    cout<<"3) Larry Page e Sergey Brin"<<endl;
    cout<<endl;
    cout<<"4) Hideo Kojima e Andrew House"<<endl;
    cout<<""<<endl;

    cin>>w;
    cout<<endl;

    switch(w){

case(1):
    cout<<"SBAGLIATO"<<endl;
    break;

case(2):
    cout<<"SBAGLIATO"<<endl;
    break;

case(3):
    cout<<"ESATTO"<<endl;
    break;

case(4):
    cout<<"SBAGLIATO"<<endl;
    break;

default:
    cout<<"ERRORE IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
    break;

    }

   cout<<""<<endl;
   cout<<"Con quale sintassi si indica l'istruzione IF in QB64? "<<endl;
   cout<<""<<endl;
   cout<<"1) if var = x then "<<endl;
   cout<<endl;
   cout<<"2) if (var==x) {} "<<endl;
   cout<<endl;
   cout<<"3) if var$,x %d "<<endl;
   cout<<endl;
   cout<<"4) if var =x " <<endl;
   cout<<""<<endl;

   cin>>l;
   cout<<endl;

   switch(l){


case(1):
    cout<<"ESATTO"<<endl;
    break;

case(2):
    cout<<"SBAGLIATO"<<endl;
    break;

case(3):
    cout<<"SBAGLIATO"<<endl;
    break;

case(4):
    cout<<"SBAGLIATO"<<endl;
    break;

default:
    cout<<"ERRORE IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
    break;


   }


   cout<<""<<endl;
   cout<<"Chi ha fondato Microsoft? "<<endl;
   cout<<""<<endl;
   cout<<"1) Steve Jobs"<<endl;
   cout<<endl;
   cout<<"2) Phill Spencer"<<endl;
   cout<<endl;
   cout<<"3) Bill Gates"<<endl;
   cout<<endl;
   cout<<"4) Mark Zukemberg"<<endl;
   cout<<""<<endl;

   cin>>m;
   cout<<endl;

   switch(m){

case(1):
    cout<<"SBAGLIATO"<<endl;
    break;

case(2):
    cout<<"SBAGLIATO"<<endl;
    break;

case(3):
    cout<<"ESATTO"<<endl;
    break;

case(4):
    cout <<"SBAGLIATO"<<endl;
    break;

default:
    cout <<"ERRORE IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
    break;


   }

  //FINE NORMALI

  cout<<""<<endl;
  cout<<endl;
  cout<<"Vuoi aumentare la difficolta' con domande piu' specifiche ? "<<endl;
  cout<<"premi invio per continuare o chiudi il programma per terminare"<<endl;
  system("pause");
  cout<<endl;

  goto difficile;






 difficile: {
 cout<<" DOMANDE DIFFICILI"<<endl;



 cout<<endl;
 cout <<"In html come si dichiara la favicon? "<<endl;
 cout<<""<<endl;
 cout <<"1) <link image= 'icon' src= 'favicon.ico'>"<<endl;
 cout<<endl;
 cout <<"2) <link rel='icon' src='/favicon.ico'>"<<endl;
 cout<<endl;
 cout <<"3) <image src='favicon.ico' class = 'icon'>"<<endl;
 cout<<""<<endl;

 cin>>n;
 cout<<endl;

 switch(n)
 {
  case(1):
      cout<<"SBAGLIATO"<<endl;
      break;

  case(2):
    cout<<"ESATTO"<<endl;
    break;

  case(3):
    cout<<"SBAGLIATO"<<endl;
    break;

  default:
    cout<<"IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
    break;
 }


 cout<<""<<endl;
 cout<<"Nel linguaggio C++ come si dichiara una variabile testuale? "<<endl;
 cout<<""<<endl;
 cout<<"1) int var; "<<endl;
 cout<<endl;
 cout<<"2) char var; "<<endl;
 cout<<endl;
 cout<<"3) $var; "<<endl;
 cout<<endl;
 cout<<"4) string var; "<<endl;
 cout<<""<<endl;

 cin>>o;
 cout<<endl;

 switch(o){

case(1):
    cout<<"SBAGLIATO"<<endl;
    break;

case(2):
    cout<<"SBAGLIATO"<<endl;
    break;

case(3):
    cout<<"SBAGLIATO"<<endl;
    break;

case(4):
    cout<<"ESATTO"<<endl;
    break;

default:
    cout<<"IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
    break;

 }


 cout<<""<<endl;
 cout<<"Qual'e' l'estensione del sorgente dei programmi scritti in QB64 ? "<<endl;
 cout<<""<<endl;
 cout<<"1) .CPP"<<endl;
 cout<<endl;
 cout<<"2) .BAS"<<endl;
 cout<<endl;
 cout<<"3) .BAT"<<endl;
 cout<<endl;
 cout<<"4) .QB64"<<endl;
 cout<<""<<endl;

 cin>>p;
 cout<<endl;

 switch(p)
 {
 case(1):
    cout<<"SBAGLIATO"<<endl;
    break;

 case(2):
    cout<<"ESATTO"<<endl;
    break;

 case(3):
    cout<<"SBAGLIATO"<<endl;
    break;

 case(4):
    cout<<"SBAGLIATO"<<endl;
    break;

 default:
    cout<<"IL NUMERO INSERITO NON CORRISPONDE A NESSUNA RISPOSTA"<<endl;
    break;
 }

goto nome1;



 } //Fine difficile












nome1:{ //Nome del giocatore

cout<<endl;
cout<<"Inserisci il tuo nome "<<endl;
cout<<endl;
cin>>nome;



}





//CONDIZIONI DI VINCITA O SCONFITTA

    if (x==2,y==1,z==5,w==3,l==1,m==3,n==2,o==4,p==2)
    {
       cout<<endl;
       cout<<"Congratulazioni "<<nome;
       cout<<" hai superato il quiz"<<endl;
       cout<<endl;
    }

    else if (x>=3,y>=2,z<=4,w>=4,l>=2,m<=2,n<=1,o<=3,p==1)
    {
    cout<<endl;
    cout <<"Non hai superato il test "<<nome;
    cout<<endl;
    cout<<"riprova"<<endl;
    cout<<endl;

    }

    else if (x>=3,y>=2,z<=4,w<=2,l>=2,m>=4,n>=3,o<=3,p>=3)
    {
    cout<<endl;
    cout <<"Non hai superato il test "<<nome;
    cout<<endl;
    cout<<"riprova"<<endl;
    cout<<endl;

    }





/*
	cout<<"Congratulazioni hai superato il quiz"<<endl;
	*/
system ("pause");

return 0;
}
