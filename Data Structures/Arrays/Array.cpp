#include<iostream>
using namespace std;


void deletion(int arr[],int &size,int delInd){
	// Checking if such index even exits
	if (delInd<=size-1){
		cout<<"Deleted "<<arr[delInd]<<" from "<<delInd<<"th position of array"<<endl;
		
		for(int i =delInd;i<size;++i){
			// Switching each elements value after deleteInd
			// With the value of the next element
			arr[i]=arr[i+1];
		}
		// Decrementing the size by 1
		--size;
		return;
	}	
	else{
		cout<<"ERROR:Cannot delete an index out of array"<<endl;
	}

}
void replace(int arr[],int size,int ind,int data){
	// Taking size is optional 
	if (size-1>=ind){
	arr[ind]=data;
}
	else{
		cout<<"ERROR: can't replace element out of array"<<endl;
	}
	
}

void traversal(int arr[],int size){
	// To Print out the array
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}



int main(int argc, char const *argv[])
{
	// Simple Driver code
	int n;
	cout<<"Enter number of elements: "<<endl;
	cin>>n;

	int array[n];
	for (int i=0;i<n;++i){
		int element;
		cout<<"Enter the data of the "<<i<<"th element:";
		cin>>element;
		array[i]=element;
	}

	cout<<"\nChoose an operation(only the number) out of the following:"<<endl;
	cout<<"1.deletion 2.replace 3.print 4.to know size 5.exit"<<endl;
	while(true){
		int op;
		cout<<"\nYour Operation:"<<endl;
		cin>>op;
		cout<<endl;
		if (op==1){

				int del;
				cout<<"Deletion Index: "<<endl;
				cin>>del;
				deletion(array,n,del);

		}
		else if(op==2){
			
				int dat,ind;
				cout<<"Replacement index: "<<endl;
				cin>>ind;
				cout<<"New Data: "<<endl;
				cin>>dat;
				replace(array,n,ind,dat);
		}
		else if(op==3){
			traversal(array,n);
		}
		else if(op==4){

			cout<<"\nThe size of the array is "<<n<<" right now.\n"<<endl;
		}
		else if(op==5){
			break;
		}
		else{
				cout<<"No such command exists, please check the commands"<<endl;
				cout<<"1.deletion 2.replace 3.print 4.to know size"<<endl;
				cout<<"Only choose the numbers, dont type the text"<<endl;
			}
		}
		cout<<endl;
	
	

	return 0;
}