#include<iostream>
using namespace std;
main()
{
	int size,arr[100],c=1,count=0;
	cout<<"Enter the number of Saturdays: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter miles run for Saturday "<<c<<":";
		cin>>arr[i];
		c++;
	}
	for(int idx=1;idx<size;idx++)
	{
		if(arr[0]<arr[idx])
		{
			count++;
		}
		arr[0]=arr[idx];
	}
	cout<<"Total progress days: "count;
}
//Task2
#include<iostream>
using namespace std;
main()
{
	int size,k=1,count=0;
	char letter;
	string arr[100],arr1;
	cout<<"Enter how many words you want to enter: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter word "<<k<<":";
		cin>>arr[i];
		k++;
	}
	cout<<"Enter the letter you want to count: ";
	cin>>letter;
	for(int idx=0;idx<size;idx++)
	{
		 arr1=arr[idx];
		 
		
		{
			for(int c=0;arr1[c]!='\0';c++)
			{
				if(arr1[c]==letter)
				{
					count++;
				}
			}
		}
	}
	cout<<letter<<" shows up "<<count<<" times in the data.";
}
//task3
#include<iostream>
using namespace std;
bool isRepeatingCycle(int arrlength);
int arr[100];
main()
{
	int size,arrlength;
	cout<<"Enter the length of the array: ";
	cin>>size;
	cout<<"Enter elements of the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		
		cin>>arr[i];
		
	}
	cout<<"Enter the length of the cycle:";
	cin>>arrlength;
	if(arrlength>size)
	{
		cout<<"1";
	}
cout<<"Output: "<<isRepeatingCycle(arrlength);
}
bool isRepeatingCycle(int arrlength)
{int count=0;
int array=arrlength;

for(int i=0;i<=array;i++)	
{

	if(arr[i]==arr[arrlength])
	arrlength++;
	else
	count++;
	
	
}
if(count==0)
{
	return true;
}
else
return false;
}

//Task4
#include<iostream>
using namespace std;
main()
{
	int size,product=1,sum=0;
	int arr[100];
	cout<<"Enter the number of boxes: ";
	cin>>size;
	cout<<"Enter the dimensions of the boxes (length, width, height): ";
	for(int i=0;i<size*3;i++)
	{
		
		cin>>arr[i];
		
	}
	for(int c=0;c<=size*3;c++)
	{
		
		
	
		if(c%3==0&&c>0)
		{
			sum+=product;
			product=1;
				product*=arr[c];
		}
	
		else
		product*=arr[c];
	
		
		
	
	
	
}


	cout<<"Total volume of all boxes: "<<sum;
}
//task5
#include <iostream>
using namespace std;
int main(){
    int i, j, size=10, temp;
    int arr[10];
    
   
    cout << "Enter the weights of the 10 packages: " << endl;
    for (i = 0; i < size; i++){
        cin >> arr[i];
    }
    

    for (i = 0; i <size; i++){
        for (j = 0; j < size; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    

    cout << "Elements sorted in the ascending order are: ";
    cout<<"[";
    for (i = 0; i < size; i++){
     cout << arr[i];
     if(i==size-1)
	 cout <<", ";   
    }
    cout<<"]";
    return 0;
}
//task6
#include<iostream>
using namespace std;
string reverseWords(string input);
main()
{
	string word,reverse,arr,reverse1;
	int c;
	cout<<"Enter a string: ";
	getline(cin,word);
	
	for(int c=0;c<word.length();c++)
	{
		reverse+=word[c];
	if(word[c]==' ' || word[c]=='\0')	
{
	 reverse1=reverse+reverse1;
	reverse="";
}
	}
	cout<<"Reversed string: ";
cout << reverse<<" " ;	
cout<<reverse1<<endl;

}
//task7
#include <bits/stdc++.h>
using namespace std;
bool areConsecutive(int arr[],int n);
main()
{
	int word,reverse,arr[100],reverse1;
	int i,j;
	int n;
	cout<<"Enter the length of the array: ";
	cin>>n;
	int sum=0;
	cout<<"Enter the elements of the array: "<<endl;
	for(int c=0;c<n;c++)
	{
		cin>>arr[c];
	}
	cout<<"Can be arranged:"<<areConsecutive(arr,n);
}
 
bool areConsecutive(int arr[], int n)
{int i,j,temp;
    for (i = 0; i <n; i++){
        for (j = 0; j <n; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1]+1)
        {
            return false;
        }
    }
    return true;
}
//task8
#include<iostream>
using namespace std;
string reverseWords(string input);
main()
{
	string word,reverse,arr[100],reverse1;
	int size;
	cout<<"Enter the length of the array: ";
	cin>>size;
	int sum=0;
	cout<<"Enter the elements of the array ("left" or "right"): "<<endl;
	for(int c=0;c<size;c++)
	{
		cin>>arr[c];
	}
	for(int i=0;i<size;i++)
	{
		
		if(arr[i]=="right")
		
		sum+=90;
		if(arr[i]=="left")
		{
			sum=sum-90;
		}
		
		}
		if(sum<0)
		{
			sum=sum*-1;
		}
		cout<<"Number of full rotations: "<<sum/360;
		
		
	}
//task9
#include <bits/stdc++.h>
using namespace std;
int special(int arr[],int n);
main()
{
	int arr[100];
	int n;
	cout<<"Enter the length of the array: ";
	cin>>n;
	cout<<"Enter the elements of the array: "<<endl;
	for(int c=0;c<n;c++)
	{
		cin>>arr[c];
	}
	cout<<"Special value: "<<special(arr,n);
}
	int special(int arr[],int n)
	{
		int k=n,sum=0;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)

{
	k--;
		}
	}
	
		for(int v=0;v<n;v++)
	{
	
				if(arr[v]>k||arr[v]==k)
		{
			sum++;
		}
	}
	
	
	if(k==sum)
		return sum;
		if(k!=sum)
		{
			return -1;
		}
		
	
}

