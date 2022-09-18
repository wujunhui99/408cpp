class CircularQueue{
	public:
		bool pop(int &t);
		bool push(int t);
		void test();
	private:
		int front, rear;
		int length = 32;
		int arr[32];
};
