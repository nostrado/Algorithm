#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef struct tagVertex {
	bool isvisited;
	vector<int> edges;
}Vertex;

// 'true' is visited tag.
void DFS(Vertex* vt, int startpoint) {
	cout << startpoint + 1 << " ";
	vt[startpoint].isvisited = true;

	for (unsigned int i = 0; i < vt[startpoint].edges.size(); i++) {
		if (vt[vt[startpoint].edges.at(i)].isvisited == false) {
			DFS(vt, vt[startpoint].edges.at(i));
		}
	}
}

// 'false' is visited tag.
void BFS(Vertex* vt, int startpoint) {
	queue<int> que;

	que.push(startpoint);
	cout << startpoint + 1 << " ";
	vt[startpoint].isvisited = false;

	while (!que.empty()) {
		startpoint = que.front();
		que.pop();

		for (unsigned int i = 0; i < vt[startpoint].edges.size(); i++) {
			if (vt[vt[startpoint].edges.at(i)].isvisited == true) {
				cout << vt[startpoint].edges.at(i) + 1 << " ";
				vt[vt[startpoint].edges.at(i)].isvisited = false;
				que.push(vt[startpoint].edges.at(i));
			}
		}
	}
}

int main(void) {
	int N = 0, M = 0, V = 0;
	int from = 0, to = 0;
	cin >> N >> M >> V;

	Vertex* vt = new Vertex[N];
	for (int i = 0; i < M; i++) {
		cin >> from >> to;
		vt[from - 1].edges.push_back(to-1);
		vt[from - 1].isvisited = false;

		vt[to - 1].edges.push_back(from - 1);
		vt[to - 1].isvisited = false;
	}

	for (int i = 0; i < N; i++) {
		sort(vt[i].edges.begin(), vt[i].edges.end());
	}

	DFS(vt, V - 1);
	cout << "\n";
	BFS(vt, V - 1);
	cout << "\n";

	return 0;
}