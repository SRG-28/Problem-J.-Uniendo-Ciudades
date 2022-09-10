#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, a;
	cin >> N;
	if (N > 0) {
		vector <int> bloque(N);
		for (int i = 0; i < N; i++) {
			cin >> a;
			bloque[i] = a;
		}
		int temp;
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				if (bloque[i] < bloque[j])
				{
					temp = bloque[i];
					bloque[i] = bloque[j];
					bloque[j] = temp;
				}
			}
		}
		int sum = 0;
		for (int i = 0; i < N; i++) {
			if (N-1 > i){
				int valorAbsoluto = bloque[i] - bloque[i + 1];
				sum = sum + valorAbsoluto;
			}
		}
		cout << sum;
	}
	return 0;
}