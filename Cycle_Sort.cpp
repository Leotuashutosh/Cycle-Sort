# include<bits/stdc++.h>
using namespace std;
void CS(int a[],int n){
	int writes=0;
	for(int cs=0;cs<n-1;cs++){
		int item = a[cs];
		int pos=cs;
		for(int i=cs+1;i<n;i++)
			if(a[i]<item)
				pos++;
		if(pos==cs)
			continue;
		while(item==a[pos])
			pos=pos+1;
		if(pos!=cs){
			swap(item,a[pos]);
			writes++;
		}
		while(pos!=cs){
			pos=cs;
			for(int i=cs+1;i<n;i++)
				if(a[i]<item)
					pos++;
			while(item==a[pos])
				pos++;
			if(item!=a[pos]){
				swap(item,a[pos]);
				writes++;
			}
			
		}


	}
}
int main(){
	int n;
	cout<<"Enter number of elements";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter"<<' ';
		cout<<(i+1)<<' ';
		cout<<"value";
		cin>>arr[i];
	}
	CS(arr,n);
	cout<<"New array";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<' ';
	return 0;
}
