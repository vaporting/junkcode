#include "gtest/gtest.h"

int main(int argc, char **argv) {
	int i = 0;
	if (!i)
		std::cout << " !i true  i is : " << i << std::endl;
	testing::InitGoogleTest(&argc, argv);
	int result = RUN_ALL_TESTS();
	system("pause");
	return result;
}