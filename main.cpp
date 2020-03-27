#include <iostream>
using namespace std;

int iter = 0;

struct Tree
{
	Tree *left;
	Tree *front;
	Tree *right;
	string name;
};

/*             LISCIE              */
Tree E = {NULL, NULL, NULL, "Lisc E"};
Tree F = {NULL, NULL, NULL, "Lisc F"};
Tree G = {NULL, NULL, NULL, "Lisc G"};
Tree H = {NULL, NULL, NULL, "Lisc H"};
Tree I = {NULL, NULL, NULL, "Lisc I"};
Tree J = {NULL, NULL, NULL, "Lisc J"};

/*			   OJCOWIE			 */
Tree B = {&E, NULL, &F, "Ojciec B"};
Tree C = {&G, NULL, &H, "Ojciec C"};
Tree D = {&I, NULL, &J, "Ojciec J"};

/*			  KORZEN	         */
Tree A = {&B, &C, &D, "Korzen A"};


void show(Tree *P)
{
	if(P)
	{
		cout<<P -> name<<endl;
		show(P -> left);
		show(P -> front);
		show(P -> right);
		iter++;
	}
}

int main()
{
	show(&A);
	cout<<'\n'<<iter;
}


