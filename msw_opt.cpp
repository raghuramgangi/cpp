#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    
    deque<int> myqueue;
    int i;
    myqueue.push_back(0);
    
    for( i = 1; i < k; i++) {
        if (!myqueue.empty() && arr[myqueue.at(0)] < arr[i]) {
            myqueue.clear();
            myqueue.push_back(i);
        } else {
            for(auto iter = myqueue.rbegin(); iter != myqueue.rend();) {
                if (arr[*iter] <= arr[i]) {
                    iter = std::reverse_iterator<typename std::deque<int>::iterator>(myqueue.erase(iter.base() - 1));                                        
                } else {
                    iter++;
                }
            }
            myqueue.push_back(i);
        }
    }
    cout << arr[myqueue.at(0)]  << " ";
    
    for(i = k; i < n; i++) {
        while(!myqueue.empty() && myqueue.front() < i-k+1 ) {
            myqueue.pop_front();
        }
        if (!myqueue.empty() && arr[myqueue.at(0)] <= arr[i]) {
            myqueue.clear();
            myqueue.push_back(i);
        } else {
            for(auto iter = myqueue.rbegin(); iter != myqueue.rend();) {
                if (arr[*iter] <= arr[i]) {
                    iter = std::reverse_iterator<typename std::deque<int>::iterator>(myqueue.erase(iter.base() - 1));                                        
                } else {
                    iter++;
                }
            }
            myqueue.push_back(i);
        }

        cout << arr[myqueue.at(0)] << " ";
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
