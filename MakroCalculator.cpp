#include<iostream>
#include<conio.h>
#include<locale>
#include<cstring>
using namespace std;

class Macros{
	public:
	int Calories, Fat, Protein, Carb, Selection, keto;
	
	ketoDiet (){
		keto = keto;
		Fat = Fat;
		Carb = Carb;
		Protein = (Calories / 100) * 27/4;
		Fat = (Calories / 100) * 68/9;
		Carb = (Calories / 100) * 5 / 4;
			
			
		cout<<endl<<endl;
		cout<<"Fat Rate : "<<Fat<<" grams in a Day"<<endl;
		cout<<"Protein Rate : "<<Protein<<" grams in a Day"<<endl;
		cout<<"Carb Rate : "<<Carb<<" grams in a Day"<<endl;
	}
	
	
	
	
	
	void Menu(){
		Calories = Calories;
		Selection = Selection;
		cout<<"-------Select to Diet Type"<<endl;
		cout<<"1 : "<<" "<<"Ketogenic Diet  (High Fat & Low Carb)"<<endl;
		
		cin>>Selection;
		cout<<endl<<endl;
		switch(Selection){
			case 1:
				cout<<"Dailly Calories Rate"<<endl;
				cin>>Calories;
				ketoDiet();
				break;
		}
	}
	
	
	
};


main(){
	
	Macros macro;
	
	cout<<"-----------------"<<endl;
	macro.Menu();
	
	
	
	
}







