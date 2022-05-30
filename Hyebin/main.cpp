#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;


#include "./Boundary/RegisterSellingClothesUI.h"
#include "./Boundary/ListSellingClothesUI.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//함수 선언
void doTask();
void join();
void program_exit();

//변수선언
ifstream readFile;
ofstream writeFile;

int main()
{
	readFile.open(INPUT_FILE_NAME);
	if (!readFile)
	{
		perror("error fopen input.txt");
		return 0;
	}

	writeFile.open(OUTPUT_FILE_NAME);
	if (!writeFile)
	{
		perror("error fopen output.txt");
		return 0;
	}

	
	doTask();
    readFile.close();
    writeFile.close();
	return 0;
}

void doTask()
{
	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0;
	int menu_level_2 = 0;
	bool is_program_exit = false;

	while (!is_program_exit)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
        string str;
		getline(readFile, str);
        istringstream ss(str);
        vector<string> menu;
        string stringBuffer;
        menu.clear();

        while(getline(ss, stringBuffer, ' ')){
            menu.push_back(stringBuffer);
        }

        menu_level_1 = stoi(menu[0]); 
        menu_level_2 = stoi(menu[1]);
        cout << menu_level_1 << " " << menu_level_2 << endl;
		
		//  메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
			case 1:	
			{
				switch (menu_level_2)
				{
					case 1: 
					{
                        cout<< menu[2] << " " << menu[3] <<" "<< menu[4] << " " <<menu[5] << endl;
						join();

						break;
					}
					default:
						break;
				}
			}
            case 3:
            {
                switch(menu_level_2)
                {
                    //판매 의류 등록, (상품명, 제작회사명, 가격, 수량)
                    case 1:
                    {
                        RegisterSellingClothesUI registerSellingClothesUI;
                        cout<< menu[2] << " " << menu[3] <<" "<< menu[4] << " " <<menu[5] << endl;
                        registerSellingClothesUI.addSellingClothes(menu[2],menu[3],stoi(menu[4]), stoi(menu[5]));
                        break;
                    }
                    //등록 상품 조회
                    case 2:
                    {
                        ListSellingClothesUI listSellingClothesUI;
                        cout << "3.2 process" <<endl;
                        listSellingClothesUI.showSellingClothesList();
                        break;
                    }
                    //판매 완료 상품 조회
                    case 3:
                    {
                        cout << "3.3 process" <<endl;
                        is_program_exit = true;
                        break;
                    }
                    default:
                        break;
                }
            }
            /*
            case 6:
            {
                switch (menu_level_2)
                {
                case 1:
                    is_program_exit = true;
                    break;
                
                default:
                    break;
                }
            }*/
		}
	}
	return;
}

void join()
{
	string user_type, name, SSN,
		address, ID, password;

	// 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
	//fscanf_s(in_fp, "%s %s %s %s", name, MAX_STRING, SSN, MAX_STRING, ID, MAX_STRING, password, MAX_STRING);

	// / 해당 기능 수행

	// 출력 형식
	//writeFile.write()
	//fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

void program_exit()
{

}