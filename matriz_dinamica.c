int main() {

    int** matriz;

    int linhas = 5;
    int colunas = 10;

    matriz = malloc(syzeof(int*) * linhas);

    for(int i = 0; i < linhas; i++) {

        matriz[i] = malloc(syzeof(int) * colunas);

    }

}