/*
	- Fly me to the Alpha Centauri(1011) / BaekJoon Online Judge
	- 2016.12.25
	- �ۼ���: solstar
	
	- ������ �̵��� �ݵ�� 1�̾�� �Ѵٴ� ���� ������ ��Ʈ��.
	- ���ּ��� ���������� ���·� �̵��Ÿ��� �����Ѵ�. ��, ������ �̵��� 1�̾�� �Ѵٴ� ������ �����ϱ� ���ؼ�
	- ���� �������� �̵����ɰŸ��� 1�� �����ؾ��Ѵ�. ��, �߰��� ��� ������ ��Ī���� ���ʿ��� �ѹ��� ���� �Ÿ��� �������Ѱ���
	- �̵��Ÿ��� ������Ű�� �ּ� �̵� Ƚ���� ���� �� �ִ�.

	- ������ �־��� ������ �״�� �����Ͽ� �����ϸ� �ð��ʰ��� �߻��ϹǷ�, ��Ģ�� ã�Ƴ��°��� �߿��ϴ�.
*/
#include <iostream>

using namespace std;

int main(void) {
	long N = 0, x = 0, y = 0;
	long k = 0;
	long result = 0;
	long distance = 0;
	long ship = 0;
	bool flag = true;

	cin >> N;
	while (N-- > 0) {
		cin >> x >> y;
		distance = y - x;
		k = 1, ship = 0, result = 0, flag = true;

		while (ship < distance) {
			if (flag == true) {
				ship += k;
				flag = false;
				result++;
			}
			else {
				ship += k;
				flag = true;
				k++;
				result++;
			}
		}

		cout << result << "\n";
	}

	return 0;
}