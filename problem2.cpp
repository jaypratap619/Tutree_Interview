#include <iostream>
#include <string>
using namespace std;
bool compare(char arr1[], char arr2[]) 
{ 
    for (int i=0; i<256; i++) 
        if (arr1[i] != arr2[i]) 
            return false; 
    return true; 
} 

int main(){
	string str1 = "XYYZXZYZXXYZ";
	string str2 = "XYZ";
	int n = str1.length();
	int m = str2.length();
	if(m > n){
		return 0;
	}
	char countfP[256] = {0}, countfT[256] = {0};
    for (int i = 0; i < m; i++) 
    { 
        (countfP[str2[i]])++; 
        (countfT[str1[i]])++; 
    } 
    for (int i = m; i < n; i++) 
    {  
        if (compare(countfP, countfT)){
            cout <<"Substring '";
            for(int j = i - m; j < i ;j++){
            	cout<<str1[j];
			}
			cout<< "' present at Index " << (i - m) << endl; 
  		}
        (countfT[str1[i]])++; 
  
        countfT[str1[i-m]]--; 
        
    } 

    if (compare(countfP, countfT)) 
        cout <<"Substring '";
            for(int j = n - m; j < n ;j++){
            	cout<<str1[j];
			}
			cout<< "' present at Index " << (n - m) << endl;  
	return 0;
}
