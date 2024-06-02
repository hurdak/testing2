#include <iostream>
#include <vector>




std::vector<int> addition_vec(std::vector<int> input_vec, int increm) {
	std::vector<int> result = input_vec;
	for (int i{ 0 }; i < result.size(); i++) {
		result[i] += increm;
	}
	return result;
}




int main() {
	std::vector<int> my_vec = { 1, 2, 3, 4, 5 };
	std::vector<int> my_vec_ed = addition_vec(my_vec, 2);
	for (int i : my_vec_ed) {
		std::cout << i << " ";
	}
	return 0;
}
