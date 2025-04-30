#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    
    deque<int> myqueue;
    int i;
    int skip = false;
    
    for( i = 0; i < k; i++) {
        myqueue.push_front(arr[i]);
    }
    
    for(i = k-1; i < n; i++) {
        int max = 0;

        if (skip) {
            myqueue.pop_back();
            myqueue.push_front(arr[i]);
        }
        skip = true;

        for(auto it = myqueue.begin(); it != myqueue.end(); it++){
            if (max < *it) max = *it;
        }
        cout << max << " ";
    }
    cout << std::endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
