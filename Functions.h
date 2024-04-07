#pragma once
#include <iostream>
#include <fstream>
using namespace std;
#include <cstdio>

void firstTask() 
{
	int count = 0;
	cout << "Дано текстовий файл.Підрахувати кількість слів, що починаються з символу, який задає користувач." << endl;
	char enterChar;
	cout << "Введите искомый символ!" << endl;
	cin >> enterChar;
	char line[100];
	FILE* in;
	const char* path = "sonnet_116.txt";
	if (fopen_s(&in, path, "r") != 0) {
		cout << "The file cannot be opened";
	}
	else {
		while (fgets(line, sizeof(line), in) != nullptr)
		{
			if (line[0] == enterChar)
			{
				count++;
			}
			for (int i = 1; i < sizeof(line); i++)
			{
				if (line[i] == enterChar && line[i - 1] == ' ')
				{
					count++;
				}
			}
		}
		cout << "Искомых слов на заданый символ: " << count;
		fclose(in);
	}
}
void secondTask()
{
	cout << "Дано текстовий файл.Переписати в інший файл усі його рядки із заміною в них символу 0 на символ 1 і навпаки." << endl;
	FILE* in;
	FILE* out;
	int c;
	const char* path = "one_zero_list.txt";
	const char* path2 = "new_one_zero_list.txt";
	if (fopen_s(&in, path, "r") == 0)
	{
		if (fopen_s(&out, path2, "w") == 0)
		{
			while (!feof(in)) {
				c = fgetc(in);
				if (c == 48)
				{
					fputc(49, out);
				}
				else if (c == 49)
				{
					fputc(48, out);
				}
				else
					fputc(c, out);
			}
			fclose(out);
		}
		fclose(in);
	}
}

void thirdTask()
{
	cout << "Дано масив рядків.Записати їх у файл, розташувавши кожен елемент масиву на окремому рядку зі збереженням порядку." << endl;
	FILE* out2;
	const char* path2 = "newTextFile.txt";
	const char* dataToFillLibrary[] = 
	{
	"To Kill a Mockingbird" ,"Harper Lee" ,"Harper Perennial","Fiction",
	"The Great Gatsby" ,"F.Scott Fitzgerald" ,"Scribner","Classic Literature",
	"1984" ,"George Orwell" ,"Signet Classic","Dystopian Fiction",
	"Harry Potter and the Sorcerer's Stone" ,"J.K.Rowling" ,"Bloomsbury Publishing","Fantasy",
	"Pride and Prejudice" ,"Jane Austen" ,"Penguin Classics","Romance",
	"The Catcher in the Rye" ,"J.D.Salinger" ,"Little, Brown and Company","Coming - of - age Fiction",
	"The Lord of the Rings" ,"Fyodor Dostoevsky" ,"Penguin Classics, Genre","Epic Fantasy",
	"Crime and Punishment" ,"J.R.R.Tolkien" ,"Houghton Mifflin Harcourt","Psychological Fiction",
	"Moby-Dick" ,"Herman Melville" ,"HarperCollin","Adventure Fiction",
	 "The Chronicles of Narnia: The Lion, the Witch and the Wardrobe" ,"C.S.Lewis" ,"HarperCollins","Children's Literature"
	};
	if (fopen_s(&out2, path2, "w") == 0) 
	{
		for (int i = 0; i < sizeof(dataToFillLibrary) / sizeof(dataToFillLibrary[0]); i++)
		{
			fputs(dataToFillLibrary[i], out2);
			fputc('\n', out2);
		}

		fclose(out2);
	}
}
void fourthTask() 
{
	int count = 0;
	cout << "Дано текстовий файл.Підрахувати кількість символів у ньому." << endl;
	FILE* in2;
	const char* path = "sonnet_116.txt";
	char line[100];
	if (fopen_s(&in2, path, "r") == 0)
	{
		while (fgets(line, sizeof(line), in2) != nullptr)
		{
			for (int i = 0; i < sizeof(line); i++)
			{
				if (line[i]!= '\n')
				{
					count++;
				}
				else if (line[i] == '\n')
				{
					count++;
					i = sizeof(line);
				}
			}
		}
	}
	cout << "В файле: " << count<<" символов!";
	fclose(in2);
}
void fifthTask()
{
	int count = 0;
	cout << "Дано текстовий файл.Підрахувати кількість рядків у ньому" << endl;
	FILE* in2;
	const char* path = "sonnet_116.txt";
	char line[100];
	if (fopen_s(&in2, path, "r") == 0)
	{
		while (fgets(line, sizeof(line), in2) != nullptr)
		{
			count++;	
		}
	}
	cout << "В файле: " << count << " строк!";
	fclose(in2);
}