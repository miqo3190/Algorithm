template<typename T>
class Utility
{
public:
	 static void  swap(T& tmp1, T& tmp2)
	 {
		T tmp3 = tmp1;
		tmp1 = tmp2;
		tmp2 = tmp3;
	 }
	 int binarySearch(int start, int end,int mid, T& key , std::vector<T>& vec)
	 {
		 mid = (start + end) / 2;
		 if (key == vec[mid])
		 {
			 return mid;
		 }
		 if (start <= end)
		 {
			 if (key < vec[mid])
			 {
				return binarySearch(start, mid - 1, mid, key, vec);
			 }
			 if (key > vec[mid])
			 {
				return binarySearch(mid + 1, end, mid, key, vec);
			 }
		 }
		 return -1;
	 }

};
