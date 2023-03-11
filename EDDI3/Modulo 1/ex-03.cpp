#include <iostream>
#include <string>
#include <vector>

//1º Primeiro, liste todos os alunos cadastrados,ordenando-os pela 
//média  ponderada  das  notas,  tendo  a  primeira  nota  peso  2  e  a  segunda,  peso  3. 

//2º ordene  os  alunos,  de  forma  crescente,  pela  nota1,  e  liste-os.

//3º para ser aprovado, o  aluno deve ter no mínimo média 7, liste, em 
//ordem  alfabética,  os  alunos  reprovados.  Em  cada  ordenação  use  um  algoritmo 
//diferente.

using namespace std;

struct Aluno {
    string nome;
    float nota1;
    float nota2;
    float media;
};

float calcMediaPonderada(float nota1, float nota2){
    return ((nota1 * 2) + (nota2 * 3)) / (2 + 3); 
}

void bubbleSort(vector <Aluno> &alunos) {
    Aluno auxAluno;
    for(int i = 0; i < alunos.size(); i++){
        for(int j = 0; j < alunos.size(); j++){
            if(alunos[i].nome < alunos[j].nome){
                auxAluno = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = auxAluno;
            }
        }
    }
}

void selectionSort(vector <Aluno> &alunos){
    Aluno aux;
    for(int i = 0; i < alunos.size(); i++) {
        int min_idx = i;
        for(int j = i + 1; j < alunos.size(); j++) 
            if(alunos[j].nota1 > alunos[min_idx].nota1)
                min_idx = j;
        if(min_idx!=i) {
            aux = alunos[min_idx];
            alunos[min_idx] = alunos[i];
            alunos[i] = aux; 
        }
    }
}

void insertionSort(vector <Aluno> &alunos) {
    for(int i = 1; i <= alunos.size() - 1; i++) {
        Aluno tempAluno = alunos[i];
        float unsorted = alunos[i].media;
        int j = i - 1;

        while(j >= 0 && alunos[j].media < unsorted) {
            alunos[j + 1] = alunos[j];
            j--;
        }
        alunos[j + 1].media = unsorted;
        alunos[j + 1] = tempAluno;
    }
}

void alunosReprovados(vector<Aluno> alunos) {
    for(int i = 0; i < alunos.size(); i++){
        if(alunos[i].media <= 7) {
            cout<<"Nome: "<<alunos[i].nome<<endl;
            cout<<"Nota 1: "<<alunos[i].nota1<<endl;
            cout<<"Nota 2: "<<alunos[i].nota2<<endl;
            cout<<"Media: "<<alunos[i].media<<endl;
            cout<<endl;
        }
    }
}

int main() {

    Aluno aluno;
    vector<Aluno> alunos;
    string nomeAluno;
    float nota1, nota2;
    string input;

    aluno.nome = "Marcelo";
    aluno.nota1 = 5.5;
    aluno.nota2 = 7.2;
    aluno.media = calcMediaPonderada(aluno.nota1, aluno.nota2);
    alunos.push_back(aluno);

    aluno.nome = "Dora";
    aluno.nota1 = 9.2;
    aluno.nota2 = 4.5;
    aluno.media = calcMediaPonderada(aluno.nota1, aluno.nota2);
    alunos.push_back(aluno);

    aluno.nome = "Orlando";
    aluno.nota1 = 8.8;
    aluno.nota2 = 7.5;
    aluno.media = calcMediaPonderada(aluno.nota1, aluno.nota2);
    alunos.push_back(aluno);

    while(true) {
        cout<<endl;
        cout<<" [1] Adicionar um aluno"<<endl;
        cout<<" [2] Ordenar pelas médias"<<endl;
        cout<<" [3] Ordenar pela primeira nota"<<endl;
        cout<<" [4] Mostrar alunos reprovados (ordem alfabética)"<<endl<<endl;
        cout<<" Opcão: ";
        cin>>input;
        cout<<endl;

        if (input[0] == 'q') 
            break;
        else if (input[0] == '1') {
            system("clear");
            cout<<"============ Cadastro de Aluno ============"<<endl;
            cout<<" Nome: ";
            cin>>aluno.nome;
            cout<<" Nota 1: ";
            cin>>aluno.nota1;
            cout<<" Nota 2: ";
            cin>>aluno.nota2;
            cout<<"==========================================="<<endl;

            aluno.media = calcMediaPonderada(aluno.nota1, aluno.nota2);
            alunos.push_back(aluno);
            system("clear");
            cout<<endl<<" Aluno cadastrado com sucesso!"<<endl;
        }
        else if (input[0] == '2') {
            if(alunos.size() == 0) {
                system("clear");
                cout<<endl<<endl<<"       Lista Vazia!"<<endl<<endl;
                cout<<" Pressione 0 para voltar...";
                cin>>input;
                system("clear");
            }
            else {
                insertionSort(alunos);
                system("clear");
                cout<<"=========== Alunos Cadastrados ==========="<<endl;
                for(int i = 0; i < alunos.size(); i++){
                    cout<<"Nome: "<<alunos[i].nome<<endl;
                    cout<<"Nota 1: "<<alunos[i].nota1<<endl;
                    cout<<"Nota 2: "<<alunos[i].nota2<<endl;
                    cout<<"Media: "<<alunos[i].media<<endl;
                    cout<<endl;
                }
                cout<<"Pressione 0 para voltar...";
                cin>>input;
                system("clear");
            }
        }
        else if(input[0] == '3'){
            selectionSort(alunos);
            system("clear");
            cout<<"=========== Alunos Cadastrados ==========="<<endl;
            for(int i = 0; i < alunos.size(); i++){
                cout<<"Nome: "<<alunos[i].nome<<endl;
                cout<<"Nota 1: "<<alunos[i].nota1<<endl;
                cout<<"Nota 2: "<<alunos[i].nota2<<endl;
                cout<<"Media: "<<alunos[i].media<<endl;
                cout<<endl;
            }
            cout<<"Pressione 0 para voltar...";
            cin>>input;
            system("clear");
        }
        else if (input[0] == '4') {
            bubbleSort(alunos);
            system("clear");
            cout<<"=========== Alunos Cadastrados ==========="<<endl;
            alunosReprovados(alunos);
            cout<<"Pressione 0 para voltar...";
            cin>>input;
            system("clear");

        }
    }
    return 0;
}