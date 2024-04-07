#include <iostream>
using namespace std;
void ler_vetores(int vet1[],int vet2[],int tam){
  for(int i = 0; i < tam; i++){
    cout<<"digite um valor para o primeiro vetor ";
    cin>>vet1[i];
  }
  for(int i = 0; i < tam; i++){
    cout<<"digite um valor para o segundo vetor ";
    cin>>vet2[i];
  }
}
bool comparar_vetores(int vet1[],int vet2[],int tam){
  bool igual = true;
  for(int i = 0; i < tam; i++){
    if(vet1[i] != vet2[i]){
      igual = false;
    }
  }
  return igual;
}
int main(){
  int tam;
  cout<<"diga o tamanho dos vetores ";
  cin>>tam;
  int vet1[tam], vet2[tam];
  ler_vetores(vet1, vet2, tam);
  if(comparar_vetores(vet1, vet2, tam)){
    cout<<"os vetores sao iguais";
  }else{
    cout<<"os vetores nao sao iguais";
  }
}