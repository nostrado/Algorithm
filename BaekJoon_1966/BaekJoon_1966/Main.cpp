#include <iostream>
#include <vector>

using namespace std;

typedef struct tagDocument{
	int order;
	int importance;
}Document;

int main(void) {
	vector<Document> docs;
	Document doc;

	int tc = 0;
	int N = 0, M = 0;

	int result = 0;
	bool flag = false;

	cin >> tc;
	while (tc-- > 0) {
		cin >> N >> M;
		for (int i = 0; i < N; i++) { // Case data save
			cin >> doc.importance;
			doc.order = i;
			docs.push_back(doc);
		}

		while (true) {
			for (unsigned int i = 1; i < docs.size(); i++) { // find bigger importance then front's importance
				if (docs.front().importance < docs.at(i).importance) {
					flag = true;
					break;
				}
			}

			if (flag == true) { // if found bigger importance
				docs.push_back(docs.front());
				docs.erase(docs.begin());
				flag = false;
			}
			else { // if front's importance is biggest importance
				result++;
				if (docs.front().order == M) {
					break;
				}
				docs.erase(docs.begin());
			}
		}

		cout << result << "\n";
		docs.clear();
		result = 0;
	}

	return 0;
}