//Question Link:-https://www.naukri.com/code360/problems/find-the-first-circular-tour-that-visits-all-the-petrol-pumps_799923

//Solution:-

// #include <bits/stdc++.h> 
// int firstCircularTour(vector<int>& petrol, vector<int>& distance, int N)
// {
// 	int deficit =0;
// 	int start =0;
// 	int balance =0;

// 	for(int i =0;i<N;i++){
// 		balance += petrol[i]-distance[i];
// 		if(balance<0){
// 			start = i+1;
// 			deficit += balance;
// 			balance =0;
// 		}
// 	}
// 	if(balance+deficit>=0){
// 		return start;
// 	}
// 	else{
// 		return -1;
// 	}
// }
