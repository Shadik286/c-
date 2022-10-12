#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int a,b;        
    // Declaration  of int variable a.
    string name;           
    // Declaration of string variable "name" (string name == char name[100])
    cin>>a>>b>>name;     
    // cin>> == scanf 
    cout<<a<<name;    
    // cout<< == printf
    a = min(a,b);
    b = max(a,b);
    swap(a,b);
    
    ////////////////////////////////////////////Inbuilt C++ functions//////////////////////////
    //############################## ARRAY ###############################
    int arr[5];                                
    // declaring an array of length 5(arr[0],arr[1].....arr[4])
    for(int i=0; i<5; i++) cin>>arr[i];        
    // input of that array 
    sort(arr, arr+5);                       //#sort(array_name, array_name+array_size)   
    //sorting array in ascending order 
    sort(arr,arr+5, greater<int>());         //#sort(array_name, array_name+array_size, greater<int>())
    // sorting array in descending order
    reverse(arr,arr+5); 
    // reverse that array 
    
    int x = *max_element(arr,arr+5); 
    // finds max element of that array and storing it to variable x 
    int y = *min_element(arr,arr+5);
    // finds min element of that array and storing it to variable y


    //############# NOTE:only if array is declared like this array<int,array size>vari_name ;////////////////
    array<int,5>diff_array;
    for(int i=0; i<5; i++) cin>>diff_array[i];
    int c = diff_array.front();
    // the first element of that array is stored in c 
    int d = diff_array.back();
    // the last element of that array is stored in d

    // ALL THE (arr,arr+size) form WILL BE (arr.begin(),arr.end()) when array<int,array size>vari_name; is used


    //############################## STRING ###############################

    string s; cin>>s;
    // declaring and taking input of string s
    char aa = s.front(); // returns first char of s
    char bb = s.back();  // returns last char of s
    sort(s.begin(),s.end()); // sort s in ascending order
    sort(s.rbegin(),s.rend()); // sort s in descending order
    reverse(s.begin(),s.end()); 
    char mx = *max_element(s.begin(),s.end());
    char mn = *min_element(s.begin(),s.end());

    

}
