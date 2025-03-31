//가장 빨리끝나는 회의()** 시작시간을 중심으로 생각하니 어려움.==> 끝시간을 중심으로로
//가능한 회의인가?(시작시간 > 끝시간)
//다음으로 가장 빨리끝나는 회의

//많이 담는다 = 일찍끝나는걸로 채웠다. =  끝나는 시간 중심

//우선순위 큐로 가장 빨리 끝나는 회의 확보
//시간 복잡도 log n 
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, last_t = 0, cnt = 0, st, lt;
    pair<int, int> meeting;

    //우선순위 큐 선언시 비교할 데이터타입 주의<저장 타입, 컨테이너<저장타입>, 정렬방식<저장타입>>
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;//first: 끝나는 시간 second시작시간
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> st >> lt;
        pq.push(make_pair(lt, st));
    }
    while (!pq.empty()) {
        meeting = pq.top();
        if (meeting.second >= last_t) {
            last_t = meeting.first;
            cnt += 1;
        }
        pq.pop();
    }
    cout << cnt;
}

