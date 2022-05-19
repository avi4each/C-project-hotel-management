#include<iostream>
using namespace std;

int main(){
	int quant;
	int choice;
	
	int Qrooms=0; //items available in stock
	int Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
	
	int Srooms=0; //total sold items
	int Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
	 //totol price of items we have
	int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
	 
	cout<<"\n/t Quantity of items we have in hotel";
	cout<<"\n Rooms available";
	cin>>Qrooms;
	cout<<"\n Pasta available";
	cin>>Qpasta;
	cout<<"\n Burger available";
	cin>>Qburger;
	cout<<"\n Noodles available";
	cin>>Qnoodles;
	cout<<"\n Shake available";
	cin>>Qshake;
	cout<<"\n Chicken available";
	cin>>Qchicken;
	
	m:
	
	cout<<"\n\t\t\t Please select from the menu options";
	cout<<"\n\n1) Rooms";
	cout<<"\n2)Pasta";
	cout<<"\n3)Burger";
	cout<<"\n4)Noodles";
	cout<<"\n5)Shake";
	cout<<"\n6)Chicken";
	cout<<"\n7) Information regarding sales and collection:";
	cout<<"\n8)Exit";
	
	cout<<"\n\n Please Enter your chioice";
	cin>>choice;
	
	switch(choice){
		case 1:
			 	cout<<"\n\n Enter the no of rooms you want: ";
			 	cin>>quant;
			 	if(Qrooms-Srooms>=quant){
			 		Srooms=Srooms+quant;
			 		Total_rooms = Total_rooms+quant*1200;
			 		cout<<"\n\n\t\t"<<quant<<"rooms have been allotted to you";
			 		
				 }
				 else{
				 	cout<<"\n\tOnly "<<Qrooms-Srooms<<"rooms remaining in hotel";
				 	
				 }
				 
				 break;
		case 2:
			cout<<"\n\n Enter the Pasta Quantity: ";
			 	cin>>quant;
			 	if(Qpasta-Spasta>=quant){
			 		Spasta=Spasta+quant;
			 		Total_pasta = Total_pasta+quant*250;
			 		cout<<"\n\n\t\t"<<quant<<"pasta is the order";
			 		
				 }
				 else{
				 	cout<<"\n\tOnly "<<Qpasta-Spasta<<"pasta remaining in hotel";
				 	
				 }
				 
				 break;
		
		case 3:
			cout<<"\n\n Enter the Qburger Quantity: ";
			 	cin>>quant;
			 	if(Qburger-Sburger>=quant){
			 		Sburger=Sburger+quant;
			 		Total_burger = Total_burger+quant*120;
			 		cout<<"\n\n\t\t"<<quant<<"burger is the order";
			 		
				 }
				 else{
				 	cout<<"\n\tOnly "<<Qburger-Sburger<<"burger remaining in hotel";
				 	
				 }
				 
				 break;
			
		case 4:
			cout<<"\n\n Enter the Qnoodles Quantity: ";
			 	cin>>quant;
			 	if(Qnoodles-Snoodles>=quant){
			 		Snoodles=Snoodles+quant;
			 		Total_noodles = Total_noodles+quant*140;
			 		cout<<"\n\n\t\t"<<quant<<"noodles is the order";
			 		
				 }
				 else{
				 	cout<<"\n\tOnly "<<Qnoodles-Snoodles<<"noodles remaining in hotel";
				 	
				 }
				 
				 break;
				 
		case 5:
			cout<<"\n\n Enter the QShake Quantity: ";
			 	cin>>quant;
			 	if(Qshake-Sshake>=quant){
			 		Sshake=Sshake+quant;
			 		Total_shake = Total_shake+quant*120;
			 		cout<<"\n\n\t\t"<<quant<<"shake is the order";
			 		
				 }
				 else{
				 	cout<<"\n\tOnly "<<Qshake-Sshake<<"shake remaining in hotel";
				 	
				 }
				 
				 break;
			
			
		
		case 6:
			cout<<"\n\n Enter the Qchicken Quantity: ";
			 	cin>>quant;
			 	if(Qchicken-Schicken>=quant){
			 		Schicken=Schicken+quant;
			 		Total_chicken = Total_chicken+quant*150;
			 		cout<<"\n\n\t\t"<<quant<<"chicken is the order";
			 		
				 }
				 else{
				 	cout<<"\n\tOnly "<<Qchicken-Schicken<<"chicken remaining in hotel";
				 	
				 }
				 
				 break;
			
		case 7:
			cout<<"\n\t\tdetails of sales and collection";
			cout<<"\n\n NUMBEr of rooms we had:"<<Qrooms;
			cout<<"\n\n NUMBEr of rooms we gave on rent"<<Srooms;
			cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
			cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;
			
			cout<<"\n\n NUMBEr of pastas we had:"<<Qpasta;
			cout<<"\n\n NUMBEr of pastas we gave on rent"<<Spasta;
			cout<<"\n\n Remaining pastas: "<<Qpasta-Spasta;
			cout<<"\n\n Total pastas collection for the day : "<<Total_pasta;
			
			cout<<"\n\n NUMBEr of rooms we had:"<<Qpasta;
			cout<<"\n\n NUMBEr of rooms we gave on rent"<<Spasta;
			cout<<"\n\n Remaining rooms: "<<Qpasta-Spasta;
			cout<<"\n\n Total rooms collection for the day : "<<Total_pasta;
			
			cout<<"\n\n NUMBEr of burger we had:"<<Qburger;
			cout<<"\n\n NUMBEr of burger we gave on rent"<<Sburger;
			cout<<"\n\n Remaining burger: "<<Qburger-Sburger;
			cout<<"\n\n Total burger collection for the day : "<<Total_burger;
			
			cout<<"\n\n NUMBEr of chicken we had:"<<Qchicken;
			cout<<"\n\n NUMBEr of chicken we gave on rent"<<Schicken;
			cout<<"\n\n Remaining chicken: "<<Qchicken-Schicken;
			cout<<"\n\n Total chickenr collection for the day : "<<Total_chicken;
			
			cout<<"\n\n NUMBEr of shakes we had:"<<Qshake;
			cout<<"\n\n NUMBEr of shakes we gave on rent"<<Sshake;
			cout<<"\n\n Remaining shakes: "<<Qshake-Sshake;
			cout<<"\n\n Total shakes collection for the day : "<<Total_shake;
			
			cout<<"\n\n \n Total collection for the day : "<<Total_rooms+Total_pasta+Total_shake+Total_chicken+Total_noodles+Total_burger;
			
			break;
	case 8: 
			exit(0);
			
	default:
		 cout<<"please select a no that has been selected above:  ";
	
	
	}
	goto m;  //transfer control to m  with help of jump statement
	
	
	
	
	
}