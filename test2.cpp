//#include <iostream>
//using namespace std;
//
//int akm(int m,int n){
//	if(m == 0){
//		return n + 1;
//	}
//	else if(m > 0 && n == 0){
//		return akm(m - 1,1);
//	}
//	else{
//		return akm(m - 1,akm(m,n - 1));
//	}
//}
//
//int main(){
//	int m,n;
//	cin >> m >> n;
//	int ret = akm(m,n);
//	cout << ret << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int digit(int n, int k){
//	if(k == 1){
//		return n % 10;
//	}
//	return digit(n/10,k - 1);
//}
//
//int main(){
//	int n,k;
//	cin >> n >> k;
//	int ret = digit(n,k);
//	cout << ret << endl;
//	return 0;
//}

//#include <iostream>
//#include <math.h>
//using namespace std;
//
//float f(float x, int n){
//	if(n == 1) return sqrt(1 + x);
//	return sqrt(n + f(x,n - 1));
//}
//
//int main(){
//	float x;
//	int n;
//	cin >> x >> n;
//	float ret = f(x,n);
//	printf("%.2f\n",ret);
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//float f(float x, int n){
//	if(n == 1) return x/(1 + x);
//	return x / (n + f(x,n - 1));
//}
//
//int main(){
//	float x;
//	int n;
//	cin >> x >> n;
//	float ret = f(x,n);
//	printf("%.2f\n",ret);
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//string s = "0123456789ABCDEF";
//
//void n_to_m(int x,int n){
//	if(x >= n)
//		n_to_m(x/n,n);
//	cout << s[x%n];
//}
//
//int main(){
//	int x,n;
//	cin >> x >> n;
//	n_to_m(x,n);
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//string str = "0123456789ABCDEF";
//
//void x_to_ten(int x,string s){
//	auto it = s.end();
//	int ret = 0;
//	int up = 0;
//	while(it != s.begin()){
//		ret += pow(x,up);
//		ret *= 10;
//		up++;
//		it--;
//	}
//	cout << ret << endl;
//}
//
//int main(){
//	int x;
//	string s;
//	cin >> x >> s;
//	x_to_ten(x,s);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	if(n & 1 == 1) cout << "odd" << endl;
//	else cout << "even" << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int len = 0;
//int cnt = 0;
//
//void judge(string str,int left,int right){
//	while(right < len){
//		bool f1 = false, f2 = false;
//		for(int i = left; i <= right; i++){
//			// �ж��Ƿ�Ϊ���� 
//			if(f1 == false){
//				if(isdigit(str[i]))
//				f1 = true;
//			}
//			// �ж��Ƿ�Ϊ�ַ�
//			if(f2 == false){
//				if(ispunct(str[i]))
//				f2 = true;
//			} 
//			// ���ͬʱ�������ֺ��ַ�,��cnt++��������ѭ�� 
//			 if(f1 == true && f2 == true){
//			 	cnt++;
//			 	break;
//			 } 
//			 left++;
//			 right++;
//		}
//	}
//}
//
//int main(){
//	string str;
//	cin >> str;
//	len = str.length();
//	// ��8λһֱ��16λ�������� 
//	for(int i = 8; i <= 16; i++){
//		judge(str,0,i - 1);
//	}
//	cout << cnt << endl;
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//string ret;
//
//int fact(int n){
//	if(n == 0) return 1;
//	if(n == 1) return 1;
//	return n * fact(n - 1);
//}
//
//int combination(int n,int m){
//	return (fact(n) / (fact(m) * fact(n - m)));
//}
//
//int main(){
//	float p12,p23,p13;
//	p12 = 517/2091;
//	p23 = 2632/10455;
//	p13 = 308/2091;
//	
//	int minSum = 300;// ���ڼ�¼abc�ĺ���Сֵ 
//	// ö��abc��ȡֵ�����100��Ӧ�þ��ܳ���
//	for(int i = 1; i <= 100; i++){
//		for(int j = 1; j <= 100; j++){
//			for(int k = 1; k < 100; k++){
//				float pij = i * j / combination(i+j+k,2);
//				float pik = i * k / combination(i+j+k,2);
//				float pjk = j * k / combination(i+j+k,2);
//				int tmp = i + j + k;// ���ڼ�¼��ʱabc�ĺ� 
//				if(pij == p12 && pjk == p23 && pik == p13){
//					cout << i <<"," << j << "," << k << endl;
//					break;
//				}
//				
//			}
//		}
//	} 
//	return 0;
//}

//#include <bits/stdc++.h>// ����c++��׼���һЩ���ϣ����Բ������������⺯�� 
//using namespace std;
//
//bool isGoodNum(int i){
//	int k = 1;// ���ڼ�¼�ڼ�λ�� 
//	while(i){
//		int tmp = i % 10;
//		if(k % 2 == 0 && tmp % 2 == 1)// ż��λ������������false
//		return false;
//		if(k % 2 == 1 && tmp % 2 == 0)// ����λ��ż��������false 
//		return false;
//		k++;
//		i /= 10;
//	}
//	return true;
//}
//
//int main(){
//	int n;
//	cin >> n;
//	int ret = 0;
//	for(int i = 1; i <= n; i++){
//		if(isGoodNum(i)) ret++;
//	}
//	cout << ret << endl;
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n;
//	long double d;
//	cin >> n >> d;
//	printf("%.0f\n",d * pow(2,n) + 0.5);
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//class BigInt{
//	private:
//		string _num;
//	public:
//		// explicit���Է�ֹ��ʽ���ù��캯�� 
//		explicit BigInt() {
//			_num = "0";
//		}
//		
//		explicit BigInt(const string& str) {
//			if(is_num(str)){
//				_num = str;
//			}
//			else{
//				_num = "0";
//			}
//		}
//		
//		explicit BigInt(const char* str){
//			string tmp = str;
//			if(is_num(tmp)){
//				_num = tmp;
//			}
//			else{
//				_num = "0";
//			}
//		}
//		
//		// ������������� 
//		// ʹ����Ԫȷ�����Է���˽�ж��� 
//		friend std::ostream& operator<<(std::ostream& out,const BigInt& n){
//			out << n._num;
//			return out;
//		}
//		
//		friend std::istream& operator>>(std::istream& in,BigInt& n){
//			in >> n._num;
//			return in;
//		}
//		
//		// ��������������ʹ�þ�̬���� 
//		static bool is_num(string str){
//			if(str[0] == '-'){
//				str.erase(0,1);
//			}
//			for(auto e : str){
//				if(!isdigit(e)) return false;
//			}
//			return true;
//		}
//};
//
//int main(){
//	BigInt a;
//	cin >> a;
//	cout << a;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//
//
//int main(){
//	float Qsz = (18000*40000/15000) + ((70) * ((0.3) * (-2) + 0.3 * 4) / (0.4 * 0.4)) * 40000;
//	cout << Qsz;
//	return 0;
//} 



//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	for(int a = 1; a <= n; a++) {
//		for(int b = 1; b <= n; b++) {
//			for(int c = 1; c <= n; c++) {
//				for(int d = 1; d <= n; d++) {
//					if (b <= c && c <= d && pow(a,3) == pow(b,3) + pow(c,3) + pow(d,3))
//					cout << "Cube(" <<a << ") ," << "Trple(" << b << "," << c << "," << d << ")" << endl;
//				}
//			}
//		}
//	}
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int p,e,i,d;
//	cin >> p >> e >> i >> d;
//	int k = d + 1;
//	while(1) {
//		if((k - p) % 23 == 0 && (k - e) % 28 == 0 && (k - i) % 33 == 0) {
//			cout << k;
//			break;
//		}
//		k++;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//bool isFake(char c, bool light) {
//	char* pLeft,pRight// ָ����ƽ���˵�ָ��
//	for(int i = 0; i < 3; i++) {
//		if(light) {
//			pLeft = Left[i];
//			pRight = Right[i];
//		}
//		else {
//			pLeft = Right[i];
//			pRight = Left[i];
//		}
//	}
//	
//	switch (result[i][0]) {
//		case "u":
//			if(strchr(pLeft,c) == nullptr) return false;
//			break;
//		case "e":
//			if(strchr(pLeft,c) || strchr(pRight)) return false;
//			break;
//		case "d":
//			if(strchr(pRight,c) == nullptr) return false;
//			break;
//	}
//	return true;
//}
//
//char Left[3][7];
//char Right[3][7];
//char result[3][7];
//	
//int main() {
//	int t;
//	cin >> t;
//	while(t--) {
//		for(int i = 0; i < 3; i++) cin >> Left[i] >> Right[i] >> result[i];
//			for(char c = 'A'; c <= 'L'; c++) {
//				if(isFake(c,1))
//				{
//					cout << c << "is light" << endl;
//				}
//				else{
//					cout << c << "is heavy" << endl;
//				}
//			}
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//// ���� + ���� + x^ + �η� 
//int main() {
//	int n; cin >> n;
//	for(int i = n; i >= 0; i--) {
//		int a; cin >> a;
//		
//		if(a == 0) continue;
//		// 1. ����
//		if(a < 0) cout << "-";
//		else {
//			if(i != n) cout << "+";
//		}
//		// 2. ����
//		int tmp = abs(a); // ��ȡ����ֵ����Ϊ�ոշ����Ѿ��������� 
//		if(a != 1 || (a == 1 && i == 0)) cout << tmp;
//		// 3. �η�
//		if(i == 0) continue;
//		else if(i == 1) cout << "x";
//		else cout << "x^" << i;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 15;
//
//int dx[] = {0, 1, 0, -1};
//int dy[] = {1, 0, -1, 0};
//int arr[N][N]; 
//
//int main() {
//	int n; cin >> n;
//	int x = 1,y = 1;
//	int cnt = 1;
//	int pos = 0;
//	while(cnt <= n * n) {
//		arr[x][y] = cnt;
//		int a = x + dx[pos], b = y + dy[pos];
//		// �ж��Ƿ�Խ��,�ٸ�ֵ 
//		if(a > n || b > n || a < 1 || b < 1 || arr[a][b] != 0) {
//			pos = (pos + 1) % 4;
//			a = x + dx[pos];
//			b = y + dy[pos];
//		}
//		x = a, y = b;
//		cnt++;
//	}
//	
//	for (int i = 1; i <= n; i++ ){
//		for (int j = 1; j <= n ; j++) {
//			printf("%3d ",arr[i][j]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 15;
//
//int dx[] = {0};
//int dy[] = {-1};
//int arr[N][N];
//
//int main() {
//	int n; cin >> n;
//	int x = n, y = n;
//	int cnt = 1;
//	int pos = 0;
//	while(cnt <= n * n) {
//		arr[x][y] = cnt;
//		int a = x + dx[pos], b = y + dy[pos];
//		// �ж��Ƿ�Խ�磬�ٸ�ֵ
//		if(a > n || b > n || a < 1 || b < 1 || arr[a][b] != 0) {
//			a--;
//			b = n;
//		}
//		x = a,y = b;
//		cnt++;
//	}
//	
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= n; j++) {
//			printf("%3d",arr[i][j]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 15;
//
//int dx[] = {1, 0, -1, 0};
//int dy[] = {0, 1, 0, -1};
//int arr[N][N];
//
//int main() {
//	int n; cin >> n;
//	int x = 1, y = 1;
//	int pos = 0;
//	int cnt = 1;
//	while(cnt <= n * n) {
//		arr[x][y] = cnt;
//		int a = x + dx[pos], b = y + dy[pos];
//		// �ж��Ƿ�Խ���ٸ�ֵ
//		if(a > n || b > n || a < 1 || b < 1 || arr[a][b] != 0) {
//			pos = (pos + 1) % 4;
//			a = x + dx[pos],b = y + dy[pos];
//		}
//		x = a, y = b;
//		cnt++;
//	}
//	for(int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("%3d",arr[i][j]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int p1,p2,p3,n;
//string s,ret;
//
//bool isdig(char ch) {
//	return ch >= '0' && ch <= '9';
//}
//
//bool isletter(char ch){
//	return ch >= 'a' && ch <= 'z';
//}
//
//void add(char left,char right) {
//	string t;// ���ڴ�Ŵ���õ��ַ���
//	for(char ch = left + 1; ch < right; ch++) {
//		char tmp = ch;
//		// ����p1 
//		if(p1 == 2 && isletter(tmp)) tmp -= 32;
//		else if(p1 == 3) tmp = '*'; 
//		// ����p2
//		for(int i = 0; i < p2; i++){
//			t += tmp;
//		}
//		// ����p3
//		if(p3 == 2) reverse(t.begin(),t.end());
//	}
//	ret += t;// �Ѵ���õĽ��׷�ӵ�ret 
//}
//
//int main() {
//	cin >> p1 >> p2 >> p3 >> s;
//	n = s.size();
//	for(int i = 0; i < n; i++) {
//		char ch = s[i];
//		if(ch != '-' || i == 0 || i == n - 1) ret += ch;
//		else {
//			char left = s[i - 1] ,right = s[i + 1];
//			if(isdig(left) && isdig(right) && right > left ||
//		       isletter(left) && isletter(right) && right > left){
//		       	// չ��
//				add(left,right); 
//			   }
//			   else ret += ch;
//		}
//	}
//	
//	cout << ret << endl;
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N],b[N],c[N];
//int la,lb,lc;
//
//// �߾��ȼӷ� 
//void add(int c[],int a[], int b[]) {
//	for(int i = 0; i < lc; i++) {
//		c[i] += a[i] + b[i];// ʹ��+=������+����Ϊ���ܴ��ڽ�λ����λҲҪ����ȥ
//		c[i + 1] += c[i] / 10;// �����λ
//		c[i] %= 10;// �������� 
//	}
//	if(c[lc]) lc++;// ����Խ����� 
//}
//
//int main() {
//	string x,y; cin >> x >> y;
//	la = x.size(); lb = y.size(); lc = max(la,lb);//lc�ĳ����Ȱ��ն���������� 
//	// ���ַ����е����������ŵ�������
//	for(int i = 0; i < la; i++) a[la - i - 1] = x[i] - '0';
//	for(int i = 0; i < lb; i++) b[lb - i - 1] = y[i] - '0';
//	// ����ӷ�
//	add(c,a,b);// c = a + b
//	
//	for(int i = lc -1; i >= 0; i--) cout << c[i];
//	
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N],b[N],c[N];
//int la,lb,lc;
//
//bool cmp(string& x,string& y) {
//	if(x.size() != y.size()) return x.size() < y.size();
//	// �����߳������,�����ֵ���Ƚ� 
//	return x < y; 
//}
//
//void sub(int c[],int a[],int b[]) {
//	for(int i = 0; i < lc; i++) {
//		c[i] += a[i] - b[i];// ��Ӧλ���
//		if(c[i] < 0) {// �����λ 
//			c[i + 1]--;
//			c[i] += 10;
//		} 
//	}
//	// ����ǰ��0
//	while(c[lc - 1] == 0 && lc > 1) lc--;
//}
//
//int main() {
//	string x,y; cin >> x >> y;
//	la = x.size(); lb = y.size(); lc = max(la,lb);
//	// ���жϴ�С
//	if(cmp(x,y)) {// ���Ϊ�棬����x < y 
//		swap(x,y);
//		cout << '-';
//	} 
//	
//	// ���ַ�����������������������
//	for(int i = 0; i < la; i++) a[la - i - 1] = x[i] - '0';
//	for(int i = 0; i < lb; i++) b[lb - i - 1] = y[i] - '0';
//	
//	// ģ��߾��ȼ���
//	sub(c,a,b);// c = a - b
//	
//	// ������
//	for(int i = lc - 1; i >= 0; i--) cout << c[i]; 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//void mul(int c[],int a[],int b[]) {
//	for(int i = 0; i < la; i++) {
//		for(int j = 0; j < lb; j++) {
//			// �޽�λ��ˣ������ 
//			c[i + j] += a[i] * b[j];
//		}
//	}
//	// �����λ 
//	for(int i = 0; i < lc; i++) {
//		c[i + 1] += c[i] / 10;
//		c[i] %= 10;
//	}
//	// ����ǰ����
//	while(lc > 1 && c[lc - 1] == 0) lc--; 
//}
//
//int main() {
//	string x,y; cin >> x >> y;
//	la = x.size(); lb = y.size(); lc = la + lb;
//	// ��������������������
//	for(int i = 0; i < la; i++) a[la - i - 1] = x[i] - '0';
//	for(int i = 0; i < lb; i++) b[lb - i - 1] = y[i] - '0';
//	
//	// �߾��ȳ˷�
//	mul(c,a,b);// c = a * b
//	
//	// ������
//	for(int i = lc- 1; i >= 0; i--) cout << c[i]; 
//	return 0; 
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N],b,c[N];
//int la,lc;
//
//void div(int c[],int a[], int b) {
//	long long t = 0;// ���ڼ�¼����
//	for(int i = la - 1; i >= 0; i--) {// �Ǵ����λ��ʼ���� 
//		t = t * 10 + a[i];// ��һ��������
//		c[i] = t / b;// ������ 
//		t %= b;
//	}
//	// ����ǰ����
//	while(lc > 1 && c[lc - 1] == 0) lc--;  
//}
//
//int main() {
//	string x; cin >> x >> b;
//	la = x.size(); lc = la;
//	// �����������ŵ�������
//	for(int i = 0; i < la; i++) a[la - i - 1] = x[i] - '0';
//	// �߾��ȳ���
//	div(c,a,b);
//	
//	// ������
//	for(int i = lc - 1; i >= 0; i--) cout << c[i]; 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int n;
//int a[N], b[N], g[N], k[N];
//int x,y;
//
//int find() {
//	// �Ӻ���ǰö�٣���Ϊ������һ��ǡ���ڵ�̺�ϣ���ô������ȷ�ı�� 
//	for(int i = n; i >= 1; i--) {
//		if(a[i] <= x && b[i] <= y && a[i] + g[i] >= x && b[i] + k[i] >= y) return i;
//	}
//	return -1;
//}
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> g[i] >> k[i];
//	cin >> x >> y;
//	
//	cout << find() <<endl; 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int x,y;
//int day[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//int main() {
//	cin >> x >> y;
//	int ret = 0;
//	// ö�����е��º���
//	for(int i = 1; i <= 12; i++) {
//		for(int j = 1; j < day[i]; j++) {
//			int k = j % 10 * 1000 + j / 10 * 100 + i % 10 * 10 + i / 10;
//			int num = k * 10000 + i * 100 + j;
//			if(x <= num && num <= y) ret++;
//		}
//	} 
//	cout << ret << endl;
//	return 0;
//} 
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int x,y;
//int pin[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//int run[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//bool huiwen(int i) {
//	string str;
//	str += i;
//}
//
//bool islegal(int i) {
//	//  
//}
//
//int main() {
//	cin >> x >> y;
//	int ret = 0;
//	// ö���������֣���ֳ����ڣ����������ô���ж������Ƿ�Ϸ� 
//	for(int i = x; i <= y; i++) {
//		if(huiwen(i)) {
//			if(islegal(i)) ret++;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e4 + 10;// ͨ����Ŀ�����ķ�Χȷ�� 
//
//int n;
//int a[N],b[N];// a[N]���ڷ��õ��׽��������b[N]����Ŀ�е���Ϣ 
//
//int check1() {
//	a[1] = 0;// ��һ�����Ӳ��ŵ��� 
//	for(int i = 2; i <= n + 1; i++) {
//		a[i] = b[i - 1] - a[i -1] - a[i - 2];
//		if(a[i] < 0 || a[i] > 1) return 0;
//	}
//	if(a[n + 1] == 0) return 1;
//	else return 0;
//}
//
//int check2() {
//	a[1] = 1;// ��һ�����ӷŵ��� 
//	for(int i = 2; i <= n + 1; i++) {
//		a[i] = b[i - 1] - a[i -1] - a[i - 2];
//		if(a[i] < 0 || a[i] > 1) return 0;
//	}
//	if(a[n + 1] == 0) return 1;
//	else return 0;
//}
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> b[i];
//	
//	int ret = 0;
//	ret += check1();
//	ret += check2();
//	cout << ret << endl;
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 10;
//
//int n = 5;
//int a[N];// �ö����Ʊ�ʾ�Ƶ�״̬ 
//int t[N];// ���� a ���� 
//
//int clac(int x) {
//	int cnt = 0;
//	while(x) {
//		cnt++;
//		x &= x - 1;
//	}
//	return cnt;
//}
//
//int main() {
//	int t; cin >> t;
//	while(t--) {
//		// �������һ�ε�����
//		memset(a,0,sizeof a); 
//		// �������� 
//		for(int i = 0; i < n; i++) {
//			for(int j = 0; j < n; j++) {
//				char ch; cin >> ch;
//				if(ch == '0') a[i] |= 1 << j;
//			}
//		}
//		int ret = 0x3f3f3f;// �������нⷨ�е���Сֵ
//		// ö�ٵ�һ�е����а���
//		for(int st = 0; st < (1 << n); st++) {
//			memcpy(t,a,sizeof a);
//			int push = st;// ��ǰ�еİ���
//			int cnt = 0;// ���㰴�˶��ٴ�
//			
//			// ��������еĽⷨ�Ͱ��˶��ٴ�
//			for(int i = 0; i < n; i++) {
//				cnt += calc(push);
//				// �޸ĵ�ǰ�б����Ľ��
//				t[i] = t[i] ^ push ^ (push << 1) ^ (push >> 1);
//				t[i] &= (1 << n) - 1;// ��ն��һλ��Ӱ��
//				// �޸���һ�е�״̬
//				t[i + 1] ^= push; 
//			 	// ��һ�еİ���
//				 push = t[i]; 
//			} 
//			if(t[n - 1] == 0) ret = min(ret,cnt);
//		} 
//		if(ret > 6) cout << -1 << endl;
//		else cout << ret << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
////	// ����x�е�ָ��λ 
////	int x = 15;
////	int m = 3;
////	int t = x & m;
////	cout << t << endl;
//	
////	// ��ȡx�е�ָ��λ
////	int x = 14;
////	int t = (x >> 2) & 1;
////	cout << t << endl; 
//
//	// ��ָ��������λ���ó�1
////	int x = 13;
////	int m = 2;
////	int t = x << 1;
////	cout << t; 
//
////	int x = 14;
////	x |= (1 << 3);
////	cout << x << endl;
//
////	// ��ָ��������λָ��Ϊ0
////	int x = 15;
////	int m = 4;
////	x &= ~(1 << 2);
////	cout << x << endl; 
//
////	// ��תָ��������λ
////	int x = 15;
////	x ^= (1 << 2);
////	cout << x << endl; 
//
////	// �������������ұߵ�����1���0
////	int x = 15;
////	x = x & (x - 1);
////	cout << x << endl; 
//
//	// ֻ���������������ұߵ�1
//	int x = 15;
//	x = x & (-x);
//	cout << x << endl; 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 20;
//int a[N];
//int t[N];// ���� a ���� 
//
//int solve() {
//	for(int st = 0; st < (1 << n); st++) {
//		memcpy(t,a,sizeof a);
//		
//	}
//}
//
//int main() {
//	int T; cin >> T;
//	for(int k = 1; k <= T; k++) {
//		// ��������������ǵ����
//		memset(a,0,sizeof a); 
//		int n; cin >> n;
//		for(int i = 1; i <= n; i++) {
//			for(int j = 0; j < n; j++) {
//				int x; cin >> x;
//				if(x == 1) a[i] |= (1 << j);// �Ѹ�λ�ó�1 
//			}
//		}
//		printf("Case %d: %d\n",k,solve());
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//long long a[N];
//long long f[N];
//int n,q;
//
//int main() {
//	cin >> n >> q;
//	for(int i = 1; i <= n; i++) {
//		cin >> a[i];
//		f[i] = f[i - 1] + a[i];
//	}
//	while(q--) {
//		int l,r; cin >> l >> r;
//		cout << f[r] - f[l - 1] << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int a[N];
//int f[N];
//
//int main() {
//	int n; cin >> n;
//	for(int i = 1; i <= n; i++) {
//		cin >> a[i];
//		f[i] = max(f[i - 1] + a[i],a[i]);
//	}
//	
//	int ret = INT_MIN;
//	for(int i = 1; i <= n; i++) {
//		if(f[i] > ret) ret = f[i];
//	}
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//
//const int N = 1010;
//const int M = 1010;
//
//LL a[N][M];
//LL f[N][M];
//int n,m,q,x1,y1,x2,y2;
//
//int main() {
//	cin >> n >> m >> q;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= m; j++) {
//			cin >> a[i][j];
//			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
//		}
//	}
//	while(q--) {
//	   cin >> x1 >> y1 >> x2 >> y2;
//	   LL ret = f[x2][y2] - f[x1- 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1];
//	   cout << ret << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 5010;
//
//int a[N][N];
//int f[N][N];// ǰ׺������
//int n,m; 
//
//int main() {
//	cin >> n >> m;
//	while(n--) {
//		int x,y,v; cin >> x >> y >> v;
//		x++,y++;// ���±��1��ʼ���� 
//		a[x][y] += v;// ͬһ��λ�ÿ����ж��Ŀ��ļ�ֵ 
//	}
//	
//	// Ԥ����ǰ׺��
//	n = 5001;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= n; j++) {
//			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
//		}
//	} 
//	
//	// ����ö���������������� 
//	int ret = 0;
//	m = min(n,m);// ��m�ܴ��ʱ�򣬾ʹ������������������Ŀ�궼�ݻ٣�����nʱ��m����n������
//	for(int x2 = m; x2 <= n; x2++) {
//		for(int y2 = m; y2 <= n; y2++) {
//			int x1 = x2 - m + 1, y1 = y2 - m + 1;
//			ret = max(ret,f[x2][y2] - f[x1 - 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1]);
//		}
//	} 
//	cout << ret << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int a[N];
//int f[N];// �������
//int n, m;
//
//int main() {
//    cin >> n >> m;
//    for(int i = 1; i <= n; i++) {
//        cin >> a[i];
//        f[i] = a[i] - a[i - 1];
//    }
//    while(m--) {
//        int l, r, k;
//        cin >> l >> r >> k;
//        f[l] += k; f[r + 1] -= k;
//    }
//
//    // ����ǰ׺�ͻ�ԭ����
//    for(int i = 1; i <= n; i++) {
//        f[i] = f[i - 1] + f[i];
//    }
//
//    // ���
//    for(int i = 1; i <= n; i++) {
//        cout << f[i] << " ";
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//
//const int N = 1e5 + 10;
//
//int f[N];// �������
//int n,m; 
//
//int main() {
//	cin >> n >> m;
//	int x; cin >> x;// �������ĳ��У�����һ�ξ��У�������x = y��������һ��������
//	for(int i = 2; i <= m; i++) {
//		int y; cin >> y;
//		if(x > y) f[y]++,f[x]--;// �����õ��˲����������ʣ���Ҫע��������r������r + 1
//		else f[x]++,f[y]--; 
//		x = y;// ��y��Ϊ���е���� 
//	} 
//	
//	// ����ǰ׺�ͻ�ԭ�������
//	for(int i = 1; i <= n; i++) f[i] += f[i - 1];
//	
//	//�Ƚ����ַ������Ǹ���Сѡ���ĸ�
//	int ret = 0;
//	for(int i = 1; i < n; i++) {
//		int a,b,c; cin >> a >> b >> c;
//		ret += min(a * f[i], c + b * f[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//typedef long long LL;
//
//const int N = 1010;
//
//int n, m, q;
//LL f[N][N]; // ��־���
//
//// ��־��������
//void insert(int x1, int y1, int x2, int y2, LL k)
//{
//    f[x1][y1] += k; f[x1][y2 + 1] -= k; f[x2 + 1][y1] -= k; f[x2 + 1][y2 + 1] += k;
//}
//
//int main()
//{
//    cin >> n >> m >> q;
//    // Ԥ�����־���
//    for(int i = 1; i <= n; i++)
//    {
//        for(int j = 1; j <= m; j++)
//        {
//            LL x; cin >> x;
//            // [i, j]Ϊ���Ͻǣ�[i, j]Ϊ���½ǵľ���ͳһ���� x
//            insert(i, j, i, j, x);
//        }
//    }
//    
//    // ���� q ���޸Ĳ���
//    while(q--)
//    {
//        LL x1, y1, x2, y2, k; cin >> x1 >> y1 >> x2 >> y2 >> k;
//        insert(x1, y1, x2, y2, k);
//    }
//    
//    // ����ǰ׺�ͻ�ԭ���޸�֮�������
//    for(int i = 1; i <= n; i++)
//    {
//        for(int j = 1; j <= m; j++)
//        {
//            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + f[i][j];
//            cout << f[i][j] << " ";
//        }
//        cout << endl;
//    }
//    
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1010;
//
//int f[N][N];
//int n,m;
//
//void insert(int x1, int y1, int x2, int y2, int k) {
//	f[x1][y1] += k, f[x1][y2 + 1] -= k, f[x2 + 1][y1] -= k, f[x2 + 1][y2 + 1] += k;
//}
//
//int main() {
//	cin >> n >> m;
//	// Ԥ�����־��� 
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= n; j++) {
//			insert(i,j,i,j,0);
//		}
//	}
//	
//	// ����m���޸Ĳ��� 
//	while(m--) {
//		int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
//		insert(x1,y1,x2,y2,1);
//	}
//	
//	// ����ǰ׺�ͻ�ԭ��־���
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= n; j++) {
//			f[i][j] += f[i -1][j] + f[i][j - 1] - f[i -1][j - 1];
//			cout << f[i][j] << " ";
//		}
//		cout << endl;
//	} 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//
//const LL N = 1e6 + 10;
//
//LL a[N];
//
//int main() {
//	int t; cin >> t;
//	while(t--) {
//		int n; cin >> n;
//		for(int i = 1; i <= n; i++) {
//			cin >> a[i];
//		}
//		LL ret = 0;
//		map<LL,int> m;
//		for(LL i = 1; i <= n; i++) {
//			for(LL j = 1; j <= n; j++) {
//				if(m[a[j]] > 1) {
//					ret = max(ret, j - i);
//					continue;
//				}
//				else m[a[j]]++;
//			}
//		}
//		cout << ret << endl;
//	}
//	return 0;
//} 


//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N];
//int n;
//
//int main() {
//	int T; cin >> T;
//	while(T--) {
//		cin >> n;
//		for(int i = 1; i <= n; i++) cin >> a[i];
//		// ��ʼ�� 
//		int left = 1, right = 1, ret = 0;
//		unordered_map<int,int> mp;
//		while(right <= n) {
//			// ������
//			mp[a[right]]++;
//			// �ж�(��ʱ��Ҫѭ����ֱ����������Ϊֹ����ʱֻҪif����)
//			while(mp[a[right]] > 1) {
//				// ������
//				mp[a[left]]--;
//				left++; 
//			} 
//			// ���½�� 
//			ret = max(ret, right - left + 1);
//			right++;
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e6 + 10, M = 2e3 + 10;
//
//int a[N];
//int mp[M];
//
//int n,m;
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	// ��ʼ��
//	int left = 1,right = 1;
//	int ret = n, begin = 1;// �����Ǵ� 1 - n
//	int kind = 0;
//	while(right <= n) {
//		// ������
//		if(mp[a[right]]++ == 0) kind++;
//		// �ж�
//		while(kind == m) {
//			// ���½��
//			int len = right - left + 1;
//			if(len < ret) {
//				ret = len;
//				begin = left;
//			} 
//			// ������
//			if(mp[a[left]]-- == 1) kind--; 
//			left++;
//		} 
//		right++;
//	} 
//	cout << begin << " " << begin + ret - 1 << endl; 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int mp[26];
//
//bool isFull(int arr[]) {
//	for(int i = 0; i < 26; i++) {
//		if(arr[i] < 1) return false;
//	}
//	return true;
//}
//
//int main() {
//	string s; cin >> s;
//	// ��ʼ��
//	int left = 0, right = 0;
//	int ret = s.size();
//	while(right < s.size()) {
//		// ������
//		mp[s[right] - 'a']++;
//		
//		// �ж�
//		while(isFull(mp)) {
//			ret = min(ret, right - left + 1);// ���½��
//			// ������
//			mp[s[left] - 'a']--;
//			left++;
//		}
//		right++;
//	} 
//	cout << ret << endl;
//	return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//typedef long long LL;
//
//int n;
//LL a[N];
//
//int main() {
//	cin >> n;
//	LL sum = 0;
//	for(int i = 1; i <= n; i++) {
//		cin >> a[i];
//		sum += a[i];
//	}
//	
//	int left = 1, right = 1;
//	LL k = 0;// ���ڼ�¼����
//	LL ret = 0;
//	
//	while(right <= n) {
//		// ������
//		k += a[right];
//		// �ж�
//		while(2 * k > sum) {
//			// ���½�������Ϸ��Ľ����Ҫ��ʱ����£���sum - k
//			ret = max(ret, sum - k); 
//			k -= a[left++];
//		} 
//		// ���½�����Ϸ��Ľ������k
//		ret = max(ret, k);
//		right++; 
//	} 
//	cout << ret << endl;
//	
//	
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//const int N = 1e5 + 10;
//
//LL a[N];
//int n;
//
//int binary_search(int x, int y) {
//	// �Ҵ��ڵ���x����
//	int left = 1, right = n;
//	while(left < right) {
//		int mid = (left + right) / 2;
//		if(a[mid] >= x) right = mid;
//		else left = mid + 1;
//	} 
//	// �ж�ѭ������֮���Ƿ���ڴ��ڵ���x����
//	if(a[left] < x) return 0;
//	int tmp = left;
//	
//	// ��С�ڵ���y���� 
//	left = 1, right = n;
//	while(left < right) {
//		int mid = (left + right + 1) / 2;
//		if(a[mid] <= y) left = mid;
//		else right = mid - 1;
//	}
//	if(a[left] > y) return 0;
//	return left - tmp + 1;
//}
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	int q; cin >> q;
//	while(q--) {
//		int x,y; cin >> x >> y;
//		cout << binary_search(x, y) << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 2e5 + 10;
//
//typedef long long LL;
//
//LL a[N];
//int n,c;
//
//int main() {
//	cin >> n >> c;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//typedef long long LL;
//int a[N];
//int n;
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	LL ret = 0;
//	// �����м�λ��(1+n)/2
//	for(int i = 1; i <= n; i++){
//		ret += abs(a[i] - a[(1 + n) / 2]);
//	} 
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//const int N = 2e5 + 10;
//
//LL a[N];
//int n;
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	LL ret = -1e5, sum = 0;
//	for(int i = 1; i <= n; i++) {
//		sum += a[i];
//		ret = max(ret, sum);
//		if(sum < 0) sum = 0;
//	}
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 3e4 + 10;
//
//int a[N];
//int w,n;
//
//int main() {
//	cin >> w >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	int left = 1, right = n;
//	int ret = 0;
//	while(left <= right) {
//		if(a[left] + a[right] <= w) {
//			ret++;
//			left++;
//			right--; 
//		}
//		else {
//			ret++;
//			right--;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1010;
//
//struct node {
//	int index;
//	int cnt;
//};
//
//node row[N],col[N];
//
//int m,n,k,l,d;
//
//bool cmp1(node& x, node& y) {
//	return x.cnt > y.cnt;
//}
//
//bool cmp2(node& x, node& y) {
//	return x.index < y.index;
//}
//
//int main() {
//	cin >> m >> n >> k >> l >> d;
//	// ��ʼ���ṹ������
//	for(int i = 1; i <= m; i++) row[i].index = i;
//	for(int i = 1; i <= n; i++) col[i].index = i;
//	
//	// ����ͷ�Ӷ���ͬѧ�������Ǵ���ṹ���cnt�� 
//	while(d--) {
//		int x,y,p,q; cin >> x >> y >> p >> q;
//		if(x == p) col[min(y,q)].cnt++;
//		else row[min(x,p)].cnt++;
//	}
//	
//	// ���������鰴cnt�Ӵ�С����
//	sort(row + 1, row + 1 + m,cmp1);
//	sort(col + 1, col + 1 + n,cmp1);
//	// ���������鰴index��С��������
//	sort(row + 1, row + 1 + k, cmp2);
//	sort(col + 1, col + 1 + l, cmp2);
//	
//	// ���
//	for(int i = 1; i <= k; i++) cout << row[i].index << " ";
//	cout << endl;
//	for(int i = 1; i <= l; i++) cout << col[i].index << " "; 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 20;
//
//int a[N][N];
//int col[N];// ͳ���еĺ� 
//
//int n,m,k;
//
//int calc(int x) {
//	int cnt = 0;
//	while(x) {
//		cnt++;
//		x -= x & -x;
//	}
//	return cnt;
//}
//
//bool cmp(int x, int y) {
//	return x > y; 
//}
//
//int main() {
//	cin >> n >> m >> k;
//	for(int i = 0; i < n; i++) 
//		for(int j = 0; j < m; j++) 
//				cin >> a[i][j];
//				
//	int ret = 0;// ͳ�ƽ�� 
//	// ������ö���е�����ѡ��
//	for(int st = 0; st < (1 << n); st++) {
//		int cnt = calc(st);// ͳ��ѡ���˶����У�Ҳ����st�����ж��ٸ�1 
//		if(cnt > k) continue;
//		int sum = 0;
//		memset(col, 0, sizeof col);
//		for(int i = 0; i < n; i++) {
//			for(int j = 0; j < m; j++) {
//				if((st >> i) & 1) sum += a[i][j];
//				else col[j] += a[i][j];
//			}
//		}
//		// ������ 
//		sort(col, col + m, cmp);
//		// ѡ��k - cnt��
//		for(int i = 0; i < k - cnt; i++) sum += col[i];
//		ret = max(ret, sum); 
//	} 
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 25;
//string a[N];
//
//int n;
//
//bool cmp(string& x, string& y) {
//	return x + y > y + x;
//}
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	// �����Լ��趨��cmp������������ 
//	sort(a + 1, a + 1 + n, cmp);
//	// ������ 
//	for(int i = 1; i <= n; i++) cout << a[i];
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//const int N = 1e5 + 10;
//
//struct node {
//	int t,d;
//}a[N];
//
//int n;
//
//bool cmp(node& x, node& y) {
//	return x.t * y.d < y.t * x.d;
//}
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i].t >> a[i].d;
//	
//	sort(a + 1, a + 1 + n, cmp);
//	
//	LL ret = 0, t = 0;
//	for(int i = 1; i <= n; i++) {
//		ret += a[i].d * t;
//		t += 2 * a[i].t;
//	}
//	
//	cout << ret << endl;
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 5e4 + 10;
//typedef long long LL;
//
//struct node {
//	int w,s;
//}a[N];
//
//int n;
//
//bool cmp(node& x, node& y) {
//	return max(-x.s, x.w - y.s) < max(y.w - x.s, -y.s);
//}
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i].w >> a[i].s;
//	
//	sort(a + 1, a + 1 + n, cmp);
//	
//	LL ret = -1e9 - 10, t = 0;
//	for(int i = 1; i <= n; i++) {
//		ret = max(ret, t - a[i].s);
//		t += a[i].w;
//	}
//	cout << ret <<endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//
//// С���ѵ����ȼ����� 
//priority_queue<LL, vector<LL>,greater<LL>> heap;
//
//int n;
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) {
//		LL x; cin >> x;
//		heap.push(x);
//	}
//	LL ret = 0;
//	// �������л�ʣ��һ��Ԫ��ʱ���ܽ��кϲ� 
//	while(heap.size() > 1) {
//		LL x = heap.top(); heap.pop();
//		LL y = heap.top(); heap.pop();
//		ret += x + y;
//		heap.push(x + y);
//	}
//	cout << ret << endl;
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//struct node {
//	int l, r;
//}a[N];
//
//int n;
//
//bool cmp(node& x, node& y) {
//	return x.l < y.l;
//}
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i].l >> a[i].r;
//	
//	// �Ȱ�����˵������������
//	sort(a + 1, a + 1 + n, cmp); 
//	
//	int ret = 1;
//	int r = a[1].r;// �Ե�һ���߶�Ϊ��׼��ʼ̰�Ĳ���
//	for(int i = 2; i <= n; i++) {
//		int left = a[i].l, right = a[i].r;
//		if(left < r) {
//			r = min(r,right);
//		} 
//		else {
//			ret++;
//			r = right;
//		}
//	} 
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//
//LL a, b, p;
//
//// ������ģ�� 
//LL qpow(LL a, LL b, LL q) {
//	LL ret = 1;
//	while(b) {
//		if(b & 1) ret = ret * a % p;
//		a = a * a % p;
//		b >>= 1;
//	}
//	return ret;
//}
//
//int main() {
//	cin >> a >> b >> p;
//	printf("%lld^%lld mod %lld=%lld",a,b,p,qpow(a,b,p));
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//
//LL a,b,p;
//
//LL mul(LL a, LL b, LL p) {
//	LL ret = 0;
//	while(b) {
//		if(b & 1) ret = (ret + a) % p;
//		a = (a + a) % p;
//		b >>= 1;
//	}
//	return ret;
//}
//
//int main() {
//	cin >> a >> b >> p;
//	cout << mul(a,b,p) << endl;
//	return 0;
//}

//// ��ɢ��ģ��
//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int n;
//int a[N];
//int pos;// ���ȥ��֮���ж��ٸ�Ԫ��
//int disc[N];// ������������� 
//
//int find(int x) {
//	int l = 1, r = pos;// ����disc�����ң���ָ����pos
//	while(l < r) {
//		int mid = (l + r) / 2;
//		if(disc[mid] >= x) r = mid;
//		else l = mid + 1;
//	} 
//	return l;
//}
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) {
//		cin >> a[i];
//		disc[++pos] = a[i];
//	}
//	
//	// ��������
//	sort(disc + 1, disc + 1 + pos); // ��ʱpos == n����Ϊ��û��ȥ��
//	pos = unique(disc + 1, disc + 1 + pos) - (disc + 1);
//	
//	// �����ɢ�����ԭ����
//	for(int i = 1; i <= n; i++) {
//		cout << a[i] << "��ɢ����" << find(a[i]) << endl;
//	} 
//	return 0;
//} 


//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e4 +10;
//typedef long long LL;
//
//int n, a, b;
//LL f[N];
//
//int main() {
//	cin >> n;
//	LL max = -1e6;
//	while(n--) {
//		cin >> a >> b;
//		f[a]++,f[b]--;// ��� 
//	}
//	
//	LL ret = 0;
//	// ����ǰ׺�ͻ�ԭ����
//	for(int i = 1; i <= n; i++) {
//		f[i] += f[i - 1];
//	}
//	for(int i = 1; i <= )
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int f[N];
//int pos = 1;
//int disc[N];// ȥ�غ������� 
//int n, a, b;
//
//int main() {
//	cin >> n;
//	while(n--) {
//		cin >> a >> b;
//		f[a]++;// ��� 
//		f[b]--;
//		disc[pos] = a;
//		pos++;
//		disc[pos] = b;
//		pos++;
//	}
//	// ����
//	sort(disc + 1, disc + 1 + pos);
//	pos = unique(disc + 1, disc + 1 + pos) - (disc + 1);// ȥ�� 
//	
//	// ��ԭ�������
//	for(int i = 1; i <= pos; i++) f[i] += f[i - 1]; 
//	 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//char a,b,c;
//
//void dfs(int n, char x, char y, char z) {
//	if(n == 0) return;
//	dfs(n - 1, x, z, y);
//	printf("%c->%d->%c\n",x,n,z);
//	dfs(n - 1, y, x, z);
//}
//
//int main() {
//	cin >> n >> a >> b >> c;
//	dfs(n,a,c,b);
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int n = 13, m = 4;
//
//int a[n][m];
//int cnt[n];// ���ڱ��ÿһ���ж��ٸ�û�б�������Ϊ 0 ��ʱ����������ƶ��������� 
//
//void dfs(int x) {
//	if(x == 13) return;// ��������K
//	int t = a[x][cnt[x]];
//	cnt[x]--;// ��������һ�ѵ�cnt-- 
//	dfs(t); 
//}
//
//int main() {
//	for(int i = 1; i <= n; i++) {
//		cnt[i] = 4;// ��ʼ��ȫ��Ϊ4������û�б��� 
//		for(int j = 1; j <= m; j++) {
//			char ch; cin >> ch;// ��������
//			if(ch >= '2' && ch <= '9') a[i][j] = ch - '0';
//			else if(ch == 'A') a[i][j] = 1;
//			else if(ch == 'J') a[i][j] = 11;
//			else if(ch == 'Q') a[i][j] = 12;
//			else if(ch == 'K') a[i][j] = 13;
//			else a[i][j] = 10;
//		}
//	}
//	
//	// ���һ���ƣ�4�λ��ᣬҲ����4��ѭ��
//	for(int i = 1; i <= 4; i++) {
//		dfs(a[n][i]);
//	} 
//	
//	int ret = 0;
//	for(int i = 1; i <= n; i++) {
//		if(cnt[i] == 0) ret++;// ���cntΪ�㣬˵�������ƶ��������� 
//	}
//	cout << ret << endl;
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 11;
//
//int n;
//int f[1 << N];// ǰ׺������,�����ж����͵� 
//
//void dfs(int left, int right) {
//	if(left > right) return;
//	char ret;
//	int sum = f[right] - f[left - 1];// ����ǰ׺���ж�����
//	if(sum == right - left + 1) ret = 'I';
//	else if(sum == 0) ret = 'B';
//	else ret = 'F';
//	// ���ж�������֮����������������left==right��������ѭ��������dfs(2,2); mid = (2 + 2) / 2 = 2; 
//	if(left == right) {
//		cout << ret;
//		return;
//	}
//	// ���в��
//	int mid = (left + right) / 2;
//	dfs(left, mid); dfs(mid + 1, right);
//	cout << ret;// ������һ���ѽ����� 
//} 
//
//int main() {
//	cin >> n;
//	n = (1 << n);
//	for(int i = 1; i<= n; i++) {
//		char ch; cin >> ch;
//		int t = 0;
//		if(ch == '1') t = 1;
//		f[i] = f[i - 1] + t;// ǰ׺�Ͳ��� 
//	}
//	
//	dfs(1,n);// ������1-n���еݹ���� 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//const int N = 5e5 + 10;
//
//int a[N];
//int tmp[N];// �鲢����ĸ�������
//int n; 
//
//LL merge(int left, int right) {
//	if(left >= right) return 0;
//	LL ret = 0;
//	int mid = (left + right) / 2;
//	ret += merge(left, mid);
//	ret += merge(mid + 1, right);
//	
//	// ����һ��һ�ҵ����
//	int cur1 = left, cur2 = mid + 1, i = left;// i��tmp������±�
//	while(cur1 <= mid && cur2 <= right) {
//		if(a[cur1] <= a[cur2]) tmp[i++] = a[cur1++];// ��������ǲ�����ģ�ֻ��Ҫ�ѵ�ǰ����������������������
//		 else {
//		 	ret += mid - cur1 + 1;// �������������ģ������й�ʽ��ֱ����һ�¾�����
//			 tmp[i++] = a[cur2++];// ��cur2��ֵ�Ž��������� 
//		 } 
//	} 
//	// �������鳤�Ȳ�һ�µ�����
//	while(cur1 <= mid) tmp[i++] = a[cur1++];
//	while(cur2 <= right) tmp[i++] = a[cur2++];
//	// �Ѹ��������ֵ�ŵ�ԭ������ȥ
//	for(int j = left; j <= right; j++) a[j] = tmp[j];
//	return ret; 
//}
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	cout << merge(1,n) << endl;
//	return 0;
//} 


//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 10010;
//
//int a[N];
//int n, k;
//
//int get_random(int left, int right) {
//	return a[rand() % (right - left + 1) + left];
//}
//
//// ���ƿ�������Ŀ���ѡ���㷨 
//int quick_select(int left, int right,int k) {
//	if(left >= right) return a[left];
//	int p = get_random(left,right);
//	// ���������㷨����,��������� 
//	int l = left - 1, i = left, r = right + 1;
//	while(l < r) {
//		if(a[i] > p) swap(a[--r],a[i]);
//		else if(a[i] == p) i++;
//		else swap(a[++l], a[i++]);
//	}
//	// �Ѿ��ֳ�������,[left,l][l + 1,r - 1][r,right] 
//	// ����ѡ�����
//	int a =  l - right + 1, b = r - 1 - l, c = right - r;
//	if(k < a) return quick_select(left,l,k);
//	else if(k <= a + b) return p;
//	else return quick_select(r,right,k - a - b);
//}
//
//int main() {
//	srand((unsigned int)time(NULL));
//	cin >> n >> k;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	cout << quick_select(1,n,k) << endl;
//	return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int f[N];
//int n,m;
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) {
//		cin >> f[i];
//		f[i] += f[i - 1];
//	}
//	cin >> m;
//	while(m--) {
//		int l,r; cin >> l >> r;
//		cout << f[r] - f[l - 1] << endl;
//	}
//	return 0;
//} 


//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 130;
//
//int a[N][N];
//int f[N][N];
//int n;
//
//int main() {
//	cin >> n;
//	// �ȴ���ǰ׺������ 
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= n; j++) {
//			cin >> a[i][j];
//			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
//		}
//	}
//	int ret = INT_MIN;
//	// �Ĳ�forѭ���������е�����
//	for(int x1 = 1; x1 <= n; x1++) {
//		for(int y1 = 1; y1 <= n; y1++) {
//			for(int x2 = x1; x2 <= n; x2++) {
//				for(int y2 = y1; y2 <= n; y2++) {
//					ret = max(ret,f[x2][y2] - f[x1 - 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1]);
//				}
//			}
//		}
//	} 
//	cout << ret << endl;
//	return 0; 
//} 

//#include<iostream>
//#include<climits>
//#define MAXN 130
//#define LL long long
//using namespace std;
//LL a[MAXN][MAXN];
////�洢������������
//LL s[MAXN][MAXN];
////��άǰ׺������
//int main()
//{
//	ios::sync_with_stdio(0);
//    //�Ż��������������cin��cout��
//	int N;
//	cin>>N;
//	for(int i=1;i<=N;i++)
//		for(int j=1;j<=N;j++)
//		{
//			cin>>a[i][j];
//            //����
//			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
//            //O(1)���Ƴ�s[i][j]����άǰ׺��
//		}
//	LL ans=INT_MIN;
//	for(int x1=1;x1<=N;x1++)
//		for(int y1=1;y1<=N;y1++)
//			for(int x2=x1;x2<=N;x2++)
//				for(int y2=y1;y2<=N;y2++)
//					ans=max(ans,s[x2][y2]-s[x2][y1-1]-s[x1-1][y2]+s[x1-1][y1-1]);
//                    //������ѭ��ȷ�����Ͻ��±꼰���½��±꣬���õ���ʽ���ans���ҳ�����ans
//	cout<<ans;
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 5e6 + 10;
//
//int a[N];
//int f[N];
//int n,p;
//
//int main() {
//	cin >> n >> p;
//	for(int i = 1; i <= n; i++) {
//		cin >> a[i];
//		// �������
//		f[i] = a[i] - a[i - 1]; 
//	}
//	
//	// ���ò�����������
//	while(p--) {
//		int l,r,k;
//		cin >> l >> r >> k;
//		f[l] += k, f[r + 1] -= k;
//	}
//	
//	// ����ǰ׺�ͻ�ԭ����
//	for(int i = 1; i <= n; i++) f[i] += f[i - 1];
//	
//	// ����ѡ����С��
//	sort(f + 1, f + 1 + n);
//	cout << f[1] << endl; 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 5010;
//
//int n,m,z,c;
//
//int main() {
//	cin >> n >> m;
//	for(int x1 = 1; x1 <= m; x1++) {
//		for(int y1 = 1; y1 <= n; y1++) {
//			for(int x2 = x1; x2 <= m; x2++) {
//				for(int y2 = y1; y2 <= n; y2++) {
//					if(x2 - x1 == y2 - y1) z++;
//					else c++;
//				}
//			}
//		}
//	}
//	printf("%d %d\n",z,c);
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 5010;
//
//int n;
//int a[11];
//
//int main() {
//	cin >> n;
//	// ��ͳ���ж�������� 
//	int ret = 0;
//	for(int a = 1; a <= 3; a++) {
//		for(int b = 1; b <= 3; b++) {
//			for(int c = 1; c <= 3; c++) {
//				for(int d = 1; d <= 3; d++) {
//					for(int e = 1; e <= 3; e++) {
//						for(int f = 1; f <= 3; f++) {
//							for(int g = 1; g <= 3; g++) {
//								for(int h = 1; h <= 3; h++) {
//									for(int i = 1; i <= 3; i++) {
//										for(int j = 1; j <= 3; j++) {
//											if(a+b+c+d+e+f+g+h+i+j==n)
//											ret++;
//										}
//									}
//								}
//							}
//						}
//					} 
//				}
//			}
//		}
//	}
//	cout << ret << endl;
//	// �����ÿһ����
//		for(int a = 1; a <= 3; a++) {
//		for(int b = 1; b <= 3; b++) {
//			for(int c = 1; c <= 3; c++) {
//				for(int d = 1; d <= 3; d++) {
//					for(int e = 1; e <= 3; e++) {
//						for(int f = 1; f <= 3; f++) {
//							for(int g = 1; g <= 3; g++) {
//								for(int h = 1; h <= 3; h++) {
//									for(int i = 1; i <= 3; i++) {
//										for(int j = 1; j <= 3; j++) {
//											if(a+b+c+d+e+f+g+h+i+j==n) {
//												cout << a << " ";
//												cout << b << " ";
//												cout << c << " ";
//												cout << d << " ";
//												cout << e << " ";
//												cout << f << " ";
//												cout << g << " ";
//												cout << h << " ";
//												cout << i << " ";
//												cout << j << " " << endl;;
//											}
//											else cout << "0" << endl;
//										}
//									}
//								}
//							}
//						}
//					} 
//				}
//			}
//		}
//	} 
//	return 0;
//}

// hhh


//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//// ����ȫ�ֱ��� + ���� 
//string path;
//
//// pos���ڼ�¼��ǰ�ĵݹ����
//void dfs(int pos) {
//	// �ݹ���� 
//	if(pos > n) {
//		// ���������return
//		cout << path << endl;
//		return; 
//	}
//	// ��ѡ
//	path += 'N';
//	dfs(pos + 1);// ִ�е���һ��ʱ����ѡ��·�Ѿ�ȫ�������ˣ���Ҫ�ָ��ֳ�
//	path.pop_back();// �ָ��ֳ� 
//	
//	// ѡ 
//	path += 'Y';
//	dfs(pos + 1);// ִ�е���һ��ʱ��ѡ��·�Ѿ�ȫ�������ˣ���Ҫ�ָ��ֳ�
//	path.pop_back();// �ָ��ֳ� 
//}
//
//int main() {
//	cin >> n;
//	dfs(1);// �ӵ�һ�㿪ʼ�ݹ� 
//	return 0;
//} 
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//vector<int> path;
//
//void dfs(int pos, int begin) {// begin��ʾ��һ��Ҫ��������Ŀ�ʼ
//	 // �ݹ����
//	 if(pos > m) {
//	 	for(auto x : path) cout << x << " ";
//	 	cout << endl;
//	 	return;
//	 }
//	 // �ݹ�����
//	 for(int i = begin; i <= n; i++) {
//	 	path.push_back(i);
//	 	dfs(pos + 1, i + 1);
//	 	path.pop_back();// ����ֳ� 
//	 } 
//}
//
//int main() {
//	cin >> n >> m;
//	dfs(1,1);
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 15;
//
//int n, k;
//vector<int> path;
//bool st[N]; 
//
//void dfs() {
//	if(path.size() == k) {
//		for(auto x : path) cout << x << " ";
//		cout << endl;
//		return;
//	}
//	
//	for(int i = 1; i <= n; i++) {
//		if(st[i]) continue;// �����ǰλ�õ�st�Ѿ�ʹ�ù��ˣ���ô��ֱ������
//		path.push_back(i);
//		st[i] = true;
//		dfs();
//		// ����ֳ�
//		path.pop_back();
//		st[i] = false;// �ѵ�ǰst��״̬����Ϊfalse 
//	}
//}
//
//int main() {
//	cin >> n >> k;
//	dfs();// ��path.size() ������posλ�� 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 15;
//
//int n;
//vector<int> path;
//bool st[N];
//
//void dfs() {
//	if(path.size() == n) {
//		for(auto x : path) printf("%5d",x);
//		cout << endl;
//		return;
//	}
//	
//	for(int i = 1; i <= n; i++) {
//		if(st[i]) continue;
//		path.push_back(i);
//		st[i] = true;
//		dfs();
//		// ����ֳ�
//		path.pop_back();
//		st[i] = false; 
//	}
//}
//
//int main() {
//	cin >> n;
//	dfs();
//	return 0;
//}


//#include <bits/stdc++.h> 
//using namespace std;
//
//const int N = 25;
//
//int n, k;
//int a[N];
//int path;
//int ret;
//
//bool is_prime(int x) {
//	if(x <= 1) return false;
//	for(int i = 2; i <= x/i; i++) {
//		if(x % i == 0) return false;
//	}
//	return true;
//}
//
//void dfs(int pos, int begin) {
//	if(pos > k) {
//		if(is_prime(path)) ret++;
//		return;
//	}
//	for(int i = begin; i <= n; i++) {
//		path += a[i];
//		dfs(pos + 1, i + 1);
//		// ����ֳ�
//		path -= a[i]; 
//	}
//}
//
//int main() {
//	cin >> n >> k;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	dfs(1,1);
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 15;
//
//int n;
//int t[N], d[N], l[N];
//bool st[N];
//
//// end���ڱ�ʾ��һ�ܷɻ�������ɵ�ʱ�� 
//bool dfs(int pos, int end) {
//	if(pos > n) return true;
//	
//	for(int i = 1; i <= n; i++) {
//		if(st[i]) continue;// ��֦
//		if(end > t[i] + d[i]) continue;// ��֦
//		int newend = max(t[i], end) + l[i]; // �����µĽ���ʱ�� 
//		st[i] = true;
//		if(dfs(pos + 1, newend)) return true;
//		st[i] = false;// ����ֳ� 
//	}
//	return false;
//}
//
//int main() {
//	int T; cin >> T;
//	while(T--) {
//		// ����������ݣ��ǵ����
//		 memset(st,false,sizeof st);
//		 cin >> n;
//		 for(int i = 1; i <= n; i++) cin >> t[i] >> d[i] >> l[i];
//		 if(dfs(1,0)) cout << "YES" << endl;
//		 else cout << "NO" << endl; 
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 5010;
//
//int a[N];
//int f[N];
//int n;
//
//int main()  {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	int ret = 0;
//	for(int i = 1; i <= n; i++) {
//		f[i] = 1;
//		for(int j = 1; j < i; j++)  {
//			if(a[j] < a[i]) {
//				f[i] = max(f[i],f[j] + 1); 
//			} 
//		}
//		ret = max(ret,f[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}
//
//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 110;
//int n;
//int a[N];
//int f[N];// ����������� 
//int g[N];// ����������� 
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	// �ҵ�����������ֵ��Ӧ���±� 
//	int m = 1;
//	for(int i = 2; i <= n; i++) {
//		if(a[m] < a[i]) {
//			m = i;
//		}
//	} 
//	
//	int ret1 = 0;
//	// ����������� 
//	for(int i = 1; i <= m; i++) {// ��ʼ��������ÿһ��Ԫ�� 
//		f[i] = 1;
//		for(int j = 1; j < i; j++) {
//			if(a[j] < a[i]) {
//				f[i] = max(f[i], f[j] + 1);
//			}
//		}
//		ret1 = max(ret1,f[i]);
//	}
//	
//	
//	int ret2 = 0;
//	// �����������
//	for(int i = n; i >= m; i--) {
//		g[i] = 1;
//		for(int j = n; j > i; j--) {
//			if(a[j] < a[i]) {
//				g[i] = max(g[i], g[j] + 1);
//			}
//		}
//		ret2 = max(ret2,g[i]);
//	} 
//	
//	cout << ret1 + ret2 - 1 << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e7 + 10;
//
//int k;
//int ret;
//int a[N];
//
//int main() {
//	cin >> k;
//	int index = 1;
//	a[1] = 1;
//	for(int i = 2; i <= k; i++) {
//		for(int j = 1; j <= i; j++) {
//			index++;
//			a[index] = a[index - 1]  + i;
//		}
//	}
//	cout << a[k] << endl;
//	return 0;
//} 


//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int k; cin >> k;
//	int ret = 0, tmp = 1,cnt = 1;
//	for(int i = 1; i <= k; i++) {
//		ret += tmp;
//		cnt--;
//		if(cnt == 0) {
//			tmp++;
//			cnt = tmp;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n,m;
//
//int main() {
//	cin >> n >> m;
//	priority_queue<int,vector<int>,greater<int>> heap; // С����
//	for(int i = 1; i <= m; i++) {// �Ȱ�����ˮ��ͷ�Ľ���ʱ������Ϊ0 
//		heap.push(0);
//	} 
//	
//	// ѡ��Ѷ����������ʱ���ˮ��ͷ����Ȼ��ѡ�������ʱ���ˮ��ͷ��Ϊret 
//	int ret = 0;
//	for(int i = 1; i <= n; i++) {
//		int x; cin >> x;
//		int t = heap.top();heap.pop();
//		t += x;
//		heap.push(t);
//		ret = max(ret, t);
//	}
//	cout << ret << endl;
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 5e5 + 10;
//
//typedef long long LL;
//
//int n;
//int a[N],tmp[N];
//
//
//// �ù鲢����������Եĸ��� 
//LL merge_sort(int l,int r) {
//	if(l >= r) {
//		return 0;
//	}
//	LL ret = 0;
//	int mid = (l + r) / 2;
//	ret += merge_sort(l,mid);
//	ret += merge_sort(mid + 1,r);
//	
//	// �鲢�������
//	int cur1 = l, cur2 = mid + 1,i = l;
//	while(cur1 <= mid && cur2 <= r) {
//		if(a[cur1] <= a[cur2]) {// ��ʱû������� 
//			tmp[i++] = a[cur1++];
//		}
//		else {
//			ret += mid - cur1 + 1;// ������� 
//			tmp[i++] = a[cur2++];
//		}
//	} 
//	while(cur1 <= mid) tmp[i++] = a[cur1++];
//	while(cur2 <= r) tmp[i++] = a[cur2++];
//	for(int j = l; j <= r; j++) a[j] = tmp[j];
//	
//	return ret;
//}
//
//int main() {
//	cin >> n;
//	for(int i= 1; i <= n; i++) cin >> a[i];
//	cout << merge_sort(1,n) << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1010;
//int n,m;
//
//int v[N],w[N];
//int f[N][N];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++) cin >> v[i] >> w[i];
//	
//	// ����ֵ 
//	// ��̬�滮
//	for(int i = 1; i <= n; i++) {
//		for(int j = 0; j <= m; j++) {
//			f[i][j] = f[i - 1][j];
//			if(j >= v[i]) {
//				f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);// ��߱�ʾ��ѡ���ұ߱�ʾѡ 
//			}
//		}
//	}
//	cout << f[n][m] << endl;
//	
//	// �պ�װ��
//	// ��ʼ��
//	memset(f,-0x3f,sizeof f);
//	f[0][0] = 0;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 0; j <= m; j++) {
//			f[i][j] = f[i - 1][j];
//			if(j >= v[i]) {
//				f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + w[i]);// ��߱�ʾ��ѡ���ұ߱�ʾѡ 
//			}
//		}
//	} 
//	if(f[n][m] < 0) cout << 0 << endl;
//	else cout << f[n][m] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1010;
//
//int T,M;
//int t[N],w[N];
//int f[N][N];
//
//int main() {
//	cin >> T >> M;
//	for(int i = 1; i <= M; i++) cin >> t[i] >> w[i];
//	
//	// ��̬�滮
//	for(int i = 1; i <= M; i++) {
//		for(int j = 0; j <= T; j++) {
//			f[i][j] = f[i - 1][j];
//			if(j >= t[i]) {
//				f[i][j] = max(f[i][j], f[i - 1][j - t[i]] + w[i]);
//			}
//		}
//	} 
//	cout << f[M][T] << endl;
//	return 0;
//}
//
//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 110,M = 10010;
//
//int n,m;
//int a[M];
//int f[N][N];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	// ��ʼ��
//	f[0][0] = 1;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 0; j <= m; j++) {
//			f[i][j] = f[i - 1][j]; 
//			if(j >= a[i]) f[i][j] += f[i - 1][j - a[i]];// ���������ۼ�
//		}
//	} 
//	cout << f[n][m] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 2010,M = 1010,MOD = 1e8;
//
//int n,m;
//int a[N];
//int f[N][M];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	// ��̬�滮
//	// f[i][j]��ʾ1~i����ѡ֮������ֵ��m�ı����ķ����� 
//	f[0][0] = 1;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 0; j < m; j++) {
//			f[i][j] = (f[i - 1][j] + f[i -1][((j - a[i] % m) % m + m) % m]) % MOD;
//		}
//	} 
//	cout << f[n][0] - 1 << endl;
//	return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1010;
//
//int n,m;
//int v[N],w[N];
//int f[N][N];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++) cin >> v[i] >> w[i];
//	
//	// ��̬�滮
//	for(int i = 1; i <= n; i++) {
//		for(int j = 0; j <= m; j++) {
//			f[i][j] = f[i - 1][j];
//			if(j >= v[i]) {
//				f[i][j] = max(f[i][j], f[i][j - v[i]] + w[i]);// �Ż�״̬ת�Ʒ��� 
//			}
//		}
//	}
//	cout << f[n][m] << endl;
//	
//	// ����װ��
//	memset(f, -0x3f, sizeof f);
//	f[0][0] = 0;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 0; j <= m; j++) {
//			f[i][j] = f[i - 1][j];
//			if(j >= v[i]) {
//				f[i][j] = max(f[i][j], f[i][j - v[i]] + w[i]);// �Ż�״̬ת�Ʒ��� 
//			}
//		}
//	}
//	if(f[n][m] <= 0) cout << 0 << endl;
//	else cout << f[n][m] << endl;
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//typedef 
//
//const int N = 1e4 + 10;
//
//int n,m;
//int t[N],w[N];
//int f[N][N];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= m; i++) cin >> t[i] >> w[i];
//	
//	// ��̬�滮
//	for(int i = 1; i <= m; i++) {
//		for(int j = 0; j <= n; j++) {
//			f[i][j] = f[i - 1][j];
//			if(j >= t[i]) f[i][j] = max(f[i][j], f[i][j - t[i]] + w[i]);
//		} 
//	} 
//	cout << f[m][n] << endl;
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//
//const int N = 1e4 + 10,M = 1e7 + 10;
//
//int n,m;
//int t[N],w[N];
//LL f[M];
//
//int main() {
//	cin >> m >> n;
//	for(int i = 1; i <= n; i++) cin >> t[i] >> w[i];
//	
//	// ��̬�滮
//	for(int i = 1; i <= n; i++) {
//		for(int j = t[i]; j <= m; j++) {
//			f[j] = max(f[j], f[j - t[i]] + w[i]);
//		}
//	} 
//	cout << f[m] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 110,M = 50010;
//
//int n, h;
//int p[N],c[N];
//int f[N][M];
//
//int main() {
//	cin >> n >> h;
//	for(int i = 1; i <= n; i++) cin >> p[i] >> c[i];
//	
//	memset(f, 0x3f, sizeof f);
//	f[0][0] = 0;
//	// ��̬�滮
//	for(int i = 1; i <= n; i++) {
//		for(int j = 0; j <= h; j++) {// �����ж� 
//		    f[i][j] = min(f[i - 1][j], f[i][max(0, j - p[i])] + c[i]);
//		}
//	} 
//	cout << f[n][h] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 110;
//
//int n, m;
//int x[N], w[N], v[N];
//int f[N][N];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++) cin >> x[i] >> w[i] >> v[i];
//	
//	// ��̬�滮 
//	for(int i = 1; i <= n; i++) {
//		for(int j = m; j > 0; j--) {
//			for(int k = 0; k <= x[i] && k * w[i] <= j; k++) {
//				f[i][j] = max(f[i][j], f[i - 1][j - k * w[i]] + k * v[i]);
//			}
//		}
//	}
//	cout << f[n][m] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 110, MOD = 1e6 + 7;
//
//int n,m;
//int a[N];
//int f[N];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	f[0] = 1;
//	for(int i = 1; i <= n; i++) {
//		for(int j = m; j > 0; j--) {
//			for(int k = 1; k <= a[i] && k <= j; k++) {
//				f[j] = (f[j] + f[j - k]) % MOD;
//			}
//		}
//	}
//	 cout << f[m] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//typedef pair<int,int> PII;// ���ڴ洢ÿһ��������ͼ�ֵ 
//const int N = 1010;
//
//int n,m,cnt;
//vector<PII> g[N];// �±��ʾ����
//int f[N][N]; 
//
//int main() {
//	cin >> m >> n;
//	for(int i = 1; i <= n; i++) {
//		int a,b,c;cin >> a >> b >> c;
//		g[c].push_back({a,b});// ��ʾ�ѵ�c�������a�ͼ�ֵb�Ž��±�weic�������� 
//		cnt = max(c, cnt);// ��¼һ���ж����� 
//	}
//	
//	// ��̬�滮
//	for(int i = 1; i <= cnt; i++) {
//		for(int j = m; j >= 0; j--) {
//			f[i][j] = f[i - 1][j];
//			// ����һ����ѡ����Ʒ
//			for(auto& t : g[i]) {
//				int a = t.first, b = t.second;
//				if(j >= a) f[i][j] = max(f[i][j], f[i - 1][j - a] + b);
//			} 
//		}
//	} 
//	cout << f[cnt][m] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 110, M = 110;
//
//int n,m;
//int z,j;
//
//int main() {
//	cin >> n >> m;
//	for(int x1 = 0; x1 <= n; x1++) {
//		for(int y1 = 0; y1 <= m; y1++) {
//			for(int x2 = x1 + 1; x2 <= n; x2++) {// ע��x2��y2�ĳ�ʼ��λ�ñ�����x1��y1֮�󣡣��� 
//				for(int y2 = y1 + 1; y2 <= m; y2++) {
//					if(x2 - x1 == y2 - y1) z++;
//					else j++;
//				}
//			}
//		}
//	}
//	cout << z << " " << j << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 5010;
//
//int n, m;
//int p[N], a[N];
//int f[N][N]; 
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= m; i++) cin >> p[i] >> a[i];
//	
//	// ��̬�滮
//	// f[i][j]��ʾǰi����ũ������j��λ��ţ��������µ���С����
//	memset(f, 0x3f, sizeof f);
//	f[0][0] = 0; 
//	for(int i = 1; i <= m; i++) {
//		for(int j = 0; j <= n; j++) {
//			f[i][j] = f[i - 1][j];
//			for(int k = 0; k <= a[i] && k <= j; k++) {
//				f[i][j] = min(f[i][j], f[i - 1][j - k] + k * p[i]);
//			}
//		} 
//	}
//	cout << f[m][n] << endl;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <climits>
//
//using namespace std;
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    vector<pair<int, int>> farmers(m);
//    for (int i = 0; i < m; i++) {
//        cin >> farmers[i].first >> farmers[i].second;
//    }
//
//    // ��ʼ�� dp ���飬dp[i][j] ��ʾ����ǰ i ����ũ����ȡ j ��λţ�̵���С����
//    vector<vector<int>> dp(m + 1, vector<int>(n + 1, INT_MAX));
//    dp[0][0] = 0;
//
//    for (int i = 1; i <= m; i++) {
//        int p = farmers[i - 1].first;
//        int a = farmers[i - 1].second;
//        for (int j = 0; j <= n; j++) {
//            // ��ѡ�� i ����ũ
//            dp[i][j] = dp[i - 1][j];
//            for (int k = 0; k <= min(a, j); k++) {
//                // ѡ�� i ����ũ��ȡ k ��λţ��
//                if (dp[i - 1][j - k] != INT_MAX) {
//                    dp[i][j] = min(dp[i][j], dp[i - 1][j - k] + k * p);
//                }
//            }
//        }
//    }
//
//    cout << dp[m][n] << endl;
//
//    return 0;
//}    

//#include <bits/stdc++.h>
//using namespace std;
//const int M = 35, N = 30010;
//
//int n, m;
//int v[M],w[M];
//int f[M][N];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= m; i++) {
//		cin >> v[i] >> w[i];
//	}
//	
//	// ��̬�滮
//	// f[i][j] ��ʾ��ǰi����Ʒ����ѡ���ܼ�ֵ(v[i] * w[i]) ������j������µ����ֵ 
//	for(int i = 1; i <= m; i++) {
//		for(int j = 0; j <= n; j++) {
//			f[i][j] = f[i - 1][j];
//			if(j >= v[i]) f[i][j] = max(f[i][j], f[i - 1][j - v[i]] + v[i] * w[i]);
//		}
//	} 
//	cout << f[m][n] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 110;
//
//int n;
//string s;
//
//int main() {
//	cin >> n >> s;
//	// n��������ʱ��
//	if(n % 2) {
//		for(int i = 0; i < n; i++) {
//			cout << s[i];
//			if(i % 2 && i < n - 3) cout << "-";
//		}
//	}
//	else {
//		for(int i = 0; i < n; i++) {
//			cout << s[i];
//			if(i % 2 && i < n - 2) cout << "-";
//		}
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//
//int x, y;
//
//int main() {
//	cin >> x >> y;
//	LL ret = 0;
//	// ����շת����� 
//	while(x && y) {
//		LL cnt = x / y;//����ͳ���ж��ٸ������Σ�����x�Ǵ���y�Ĳ�����Ҳû�£�����ύ�� 
//		 ret += cnt * 4 * y;// ��ʱ�����εı߳���y 
//		 x %= y;// ���¼�����εĳ���֮ǰ���Ѿ�������� 
//		 swap(x,y);
//	}
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 10010, M = 110;
//
//int n,m;
//int t[N],c[N],p[N];
//int f[M];
//
//int main() {
//	int t1,t2,t3,t4; char ch;
//	cin >> t1 >> ch >> t2 >> t3 >> ch >> t4 >> n;
//	int m = t3 * 60 + t4 - (t1 * 60 + t2);
//	
//	for(int i = 1; i <= n; i++) cin >> t[i] >> c[i] >> p[i];
//	
//	// ��ϱ�����̬�滮
//	// f[i][j]��ʾ��[1,i]�����ͻ�����ʱ�䲻����j������»�õ������ѧֵ 
//	for(int i = 1; i <= n; i++) {
//		// ��������
//		// ��ȫ����
//		if(p[i] == 0) {
//			for(int j = t[i]; j <= m; j++) {
//				f[j] = max(f[j], f[j - t[i]] + c[i]);
//			}
//		} 
//		// 01����
//		else if(p[i] == 1) {
//			for(int j = m; j >= t[i]; j--) {
//				f[j] = max(f[j], f[j - t[i]] + c[i]);
//			}
//		}
//		// ���ر���
//		else {
//			for(int j = m; j >= t[i]; j--) {
//				for(int k = 1; k <= p[i] && k * t[i] <= j; k++) {
//					f[j] = max(f[j], f[j - k * t[i]] + k * c[i]);
//				}
//			}
//		} 
//	} 
//	cout << f[m] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 310;
//typedef pair<int, int> PII;
//
//int n;
//int c[N], m[N], e[N];
//vector<PII> p;
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) {
//		cin >> c[i] >> m[i] >> e[i];
//		p.push_back({c[i],c[i] + m[i] + e[i]});
//	}
//	sort()
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//struct stu{
//	int num;// ѧ�����
//	int c,m,e;// ���ſεĳɼ�
//	int sum;// �ɼ��ܷ� 
//}student[310];
//
//bool cmp(stu& a, stu& b){
//	if(a.sum > b.sum) return true;
//	else if(a.sum < b.sum) return false;
//	else {
//		if(a.c > b.c) return true;
//		else if(a.c < b.c) return false;
//		else {
//			if(a.num > b.num) return false;
//			else return true;
//		}
//	}
//}
//
//int main() {
//	int n; cin >> n;
//	for(int i = 1; i <= n; i++) {
//		student[i].num = i;
//		int c,m,e; cin >> c >> m >> e;
//		student[i].c = c,student[i].m = m, student[i].e = e;
//		student[i].sum = c + e + m; 
//	}
//	sort(student + 1, student + 1 + n, cmp);
//	for(int i = 1; i <= 5; i++) {
//		cout << student[i].num << " " << student[i].sum << endl;
//	} 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//
//struct employee {
//	int num;
//	int score;
//}emp[5010];
//
//bool cmp(employee& a, employee& b) {
//	if(a.score > b.score) return true;
//	else if (a.score < b.score) return false;
//	else {
//		if(a.num < b.num) return true;
//		else return false;
//	}
//}
//
//int main() {
//	int x;
//	cin >> n >> x;
//	for(int i = 1; i <= n; i++) {
//		cin >> emp[i].num >> emp[i].score;
//	}
//	sort(emp + 1, emp + 1 + n, cmp);
//	m = emp[(int)(x * 1.5)].score;
//	int j;// ��¼ȡ������
//	for(int i = 1; i <= n; i++) {
//		if(emp[i].score >= m){
//			j++;
//		}
//		else break;
//	} 
//	cout << m << " " << j << endl;
//	for(int i = 1; i <= m + 1; i++) {
//		cout << emp[i].num << " " << emp[i].score << endl;
//	}
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 110, M = 110;
//
//int n, m;
//char a[N][M];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= m; j++) {
//			cin >> a[i][j];
//			if(a[i][j] == '*') a[i][j] = '1';
//			else a[i][j] = '0';
//		}
//	}
//	
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= m; j++) {
//			int cnt = 0;
//			if(a[i][j] == '1') cout << '*';
//			else {
//				a[i][j] = (a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j-1] + a[i][j+1] + a[i+1][j-1] + a[i+1][j] + a[i+1][j+1]); 
//				cout << a[i][j];
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n, x;
//
//int main() {
//	cin >> n >> x;
//	int cnt = 0;
//	for(int i = 1; i <= n; i++) {
//		int b = i;
//		while(b) {
//			if(b % 10 == x) cnt++;
//			b /= 10;
//		}
//	}
//	cout << cnt << endl ;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int a[1010];
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	cout << a[1] << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//float n;
//
//int main() {
//	cin >> n;
//	float s = 0.0;
//	float b = 2.0;
//	int cnt = 0;
//	while(s <= n) {
//		cnt++;
//		b *= 0.98;
//		s += b;
//	}
//	cout << cnt << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int h;
//int a[20];
//
//int main() {
//	for(int i = 1; i <= 10; i++) cin >> a[i];
//	cin >> h;
//	int cnt = 0;
//	for(int i = 1; i <= 10; i++) {
//		if(a[i] <= h) cnt++;
//		else {
//			if(a[i] <= h + 30) cnt++;
//		}
//	}
//	cout << cnt << endl; 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 5010;
//
//int n,s,a,b;
//int x[N], y[N];
//int f[N][N];
//
//int main() {
//	cin >> n >> s >> a >> b;
//	for(int i = 1; i <= n; i++) cin >> x[i] >> y[i];
//	
//	// ��̬�滮
//	// f[i][j]��ʾ[1,i]������ժƻ����������������С��j���������ժ��������ƻ����
//	for(int i = 1; i <= n; i++) {
//		for(int j = 0; j <= s; j++) {
//			f[i][j] = f[i - 1][j];
//			if(j <= s) f[i][j] = max(f[i][j], f[i - 1][s - j] + )
//		}
//	} 
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 5010;
//
//int n,s,a,b;
//int x[N],y[N];
//int c[N];
//
//int main() {
//	cin >> n >> s >> a >> b;
//	for(int i = 1; i <= n; i++) {
//		cin >> x[i] >> y[i];
//		if(x[i] <= b) c[i] = y[i];
//		else {
//			if(x[i] <= b + a) c[i] = y[i];
//			else c[i] = 0x3f;
//		}
//	}
//	sort(c + 1, c + 1 + n);
//	int cnt = 0;
//	for(int i = 1; i <= n; i++) {
//		if(s >= c[i]) {
//			cnt++;
//			s -= c[i];
//		}else{
//			break;
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//
//LL x,y,z;
//
//LL gcd(LL a, LL b) {
//	if(!b) return a;// ���bΪ�㣬��ô���Լ������a
//	return gcd(b, a % b); 
//}
//
//int main() {
//	cin >> x >> y >> z;
//	LL t = gcd(x,y);
//	cout << gcd(t,z) << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//string a;
//int b;
//
//int gcd(int a, int b) {
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//int calc() {
//	long long t = 0;
//	for(auto ch : a) {
//		t = t * 10 + (ch - '0');
//		t %= b;
//	}
//	return t;
//}
//
//int main() {
//	cin >> a >> b;
//	cout << gcd(calc(),b) << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 10;
//
//int n;
//int a[N], b[N];
//int f[N][N];
//
//int main() {
//	cin >> n;
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	for(int i = 1; i <= n; i++) cin >> b[i];
//
//	// f[i]��ʾ[1,i]�����������Ӵ� 
//	for(int i = 1; i <= n; i++){
//		for(int j = 1; j <= n; j++) {
//			f[i][j] = max(f[i - 1][j], f[i][j - 1]);
//			if(a[i] == b[i]) f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
//		}
//	}
//	cout << f[n][n] << endl; 
//	return 0;
//} 

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 1e4 + 10;
//
//int n;
//int c[N];// ��¼��i����������c[i]�� 
//
//void deprime(int x) {
//	for(int i = 2; i <= x / i; i++) {
//		int cnt = 0;
//		while(x % i == 0) 
//		{
//			cnt++;
//			x /= i;
//		}
//		c[i] += cnt;
//	}
//	// ע���ж����һ����
//	if(x > 1) c[x]++; 
//}
//
//int main() {
//	cin >> n;
//	for(int i = 2; i <= n; i++) {// ������ֳɽ׳� 
//		deprime(i);
//	}
//	for(int i = 2; i <= n; i++) {
//		if(c[i]) {
//			cout << i << " " << c[i] << endl;
//		}
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//
//int main() {
//	cin >> n;
//	int sum = 0;
//	for(int i = 1; i < n / i; i++) {
//		if(n % i == 0) {
//			sum += i;
//			if(i != n / i) sum += n / i;
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int n;
//	long long sum = 0;
//	cin >> n;
//	for(int i = 1; i <= n / 2; i++) {
//		sum += n / i;
//	}
//	sum += n - (n / 2);
//	cout << sum << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 110;
//
//int n,m;
//char a[N][N];
//
//int main() {
//	cin >> n >> m;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= m; j++) {
//			cin >> a[i][j];
//		}
//	}
//	for(int i = 1; i <= n; i++) { 
//		for(int j = 1; j <= m; j++) {
//			if(a[i][j] == '*') cout << '*';
//			else {
//				int cnt = 0;
//				for(int dx = -1; dx <= 1; dx++) {
//					for(int dy = -1; dy <= 1; dy++) {
//						if(!dx && !dy) continue;
//						else {
//							int x = i + dx, y = j + dy;
//							if(a[x][y] == '*') cnt++;
//						}
//					}
//				}
//				cout << cnt;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 20;
//
//string s;
//int a;
//
//int main() {
//	cin >> s;
//	int sum = 0, cnt = 1;
//	for(int i = 0; i < s.size() - 1; i++) {
//		if(s[i] != '-') {
//			sum += ((s[i] - '0') * cnt);
//			cnt++;
//		}
//	}
//	sum %= 11;
//	if(sum == s[12] - '0') cout << "Right" << endl;
//	else {
//		for(int i = 0; i < s.size() - 1; i++) {
//			cout << s[i];
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 110;
//
//int n;
//int a[N];
//
//int main() {
//	cin >> n;
//	int x = 0;
//	for(int i = 1; i <= n; i++) {
//		cin >> a[i];
//		x += a[i];
//	}
//	x /= n;
//	
//	int ret = 0;
//	for(int i = 1; i <= n; i++) {
//		if(a[i] == x) continue;
//		ret++;
//		a[i + 1] -= x - a[i];
//	}
//	cout << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long LL;
//
//LL a,b;
//
//int main() {
//	cin >> a >> b;
//	LL x = pow(a,b);
//	if(x > 1e9 || x < 0) cout << -1 << endl;
//	else cout << x << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//const int N = 1e3 + 10;
//
//int n,m,c;
//int a[N][N];
//
//int main() {
//	cin >> n >> m >> c;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= m; i++) {
//			cin >> a[i][j];
//		}
//	}
//	
//	int max = -1;
//	int tmp = 0;
//	int rx,ry = 0;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= m; j++) {
//			int tx , ty = 0;
//			for(int x = 1; x <= c; x++) {
//				for(int y = 1; y <= c; y++) {
//					tx = x, ty = y;
//					tmp += a[i][j];
//				}
//			}
//			if(tmp > max) {
//				rx = tx,ry = ty;
//			}
//		}
//	}
//	cout << rx << " " << ry << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//typedef long long LL;
//
//const int N = 1e3 + 10;
//
//int n,m,c;
//LL f[N][N];
//
//int main() {
//	cin >> n >> m >> c;
//	// ��άǰ׺�� 
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= m; j++) {
//			int x; cin >> x;
//			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + x;
//		}
//	}
//	
//	// ö�����б߳�Ϊc��������
//	LL ret = -1e18;
//	int x,y = 0;
//	for(int x1 = 1; x1 <= n - c + 1; x1++) {
//		for(int y1 = 1; y1 <= m - c + 1; y1++) {
//			int x2 = x1 + c -1, y2 = y1 + c - 1;
//			LL t = f[x2][y2] - f[x1 - 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1];
//			if(t > ret) {
//				ret = t;
//				x = x1,y = y1;
//			}
//		}
//	}
//	cout << x << " " << y << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//const int N = 10, M = 1010;
//
//int n = 6, m = 1000;
//int w[N] = {0,1,2,3,5,10,20};
//int a[N];
//int f[N][M];
//
//int main() {
//	for(int i = 1; i <= n; i++) cin >> a[i];
//	
//	// ��̬�滮
//	// f[i][j]��ʾǰi���������Ƿ��ܴճ�����Ϊj,��true����false 
//	f[0][0] = true;
//	for(int i = 1; i <= n; i++) {
//		for(int j = m; j >= 0; j--) {
//			for(int k = 0; k <= a[i] && k * w[i] <= j; k++) {
//				f[i][j] = f[i - 1][j] || f[i - 1][j - k * w[i]];
//			}
//		}
//	}
//	
//	int ret = 0;
//	for(int i = 1; i <= m; i++) {
//		if(f[6][i] != 0) ret++;
//	}
//	cout << "Total=" << ret << endl;
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n,k;
//
//int main() {
//	cin >> n >> k;
//	cout << k - (n % k) << endl;
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int n;
int a[N],b[N],g[N],k[N];
int x,y;

int find() {
	for(int i = n; i >= 1; i--) {
		if(a[i] <= x && g[i] + a[i] >= x && b[i] <= y && k[i] + b[i] >= y) return i;
	}
	return -1;
}

int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> g[i] >> k[i];
	cin >> x >> y;
	
	cout << find() << endl; 
	return 0;
}
