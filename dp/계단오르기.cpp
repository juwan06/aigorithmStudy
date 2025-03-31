//마지막계단의 최고점수는 이전 계단의 최고점이 더 큰값값으로부터 옴(점수 +)
//이전계단에서 얻을 수 있는 최대점수는 
//각층에서 얻을 수 있는 최대점수 저장
//==> 연속해서 두번번 1은 안됨;
//마지막 계단은 2계단,1계단 밟아서오거나 2계단 밟아서 옴
//최고값은 n-1 + n-3 과 n-2중 더 큰 값
//분기가 나눠지지 않으면 하나의 분기로 처리함.

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t, nums[301]={0},dp[301];
    for (int i=1;i<=t;i++){
        cin >> nums[i];
    }
    dp[0] = nums[0];
    dp[1] = nums[1];
    dp[2] = nums[2];

    for(int i=3;i<=t;i++){
        dp[i] = max(dp[i-1] + dp[i-3],dp[i-2])+nums[i];
        
    }
    cout << dp[t];
}
