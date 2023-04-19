bool DFS(char** board, int boardSize, int* boardColSize, char* word, int len, int index, int i, int j, bool** visited){
    if (index == len ){return 1;}
    if ( i < 0 || j < 0 || i >= boardSize || j >= *boardColSize || visited[i][j] || board[i][j] != word[index]) {return 0;}
    visited[i][j] = 1;
    bool ans =  DFS(board, boardSize, boardColSize, word, len, index+1, i+1, j, visited) ||
                DFS(board, boardSize, boardColSize, word, len, index+1, i-1, j, visited) ||
                DFS(board, boardSize, boardColSize, word, len, index+1, i, j+1, visited) ||
                DFS(board, boardSize, boardColSize, word, len, index+1, i, j-1, visited);    
    visited[i][j] = 0;
    return ans;
}
bool exist(char** board, int boardSize, int* boardColSize, char * word){
    bool** visited = malloc(sizeof(bool*)*boardSize);
    for (int i = 0; i < boardSize; i++){
        visited[i] = calloc(*boardColSize,sizeof(bool));
    }
    int len = strlen(word);

    for (int i = 0; i < boardSize; i++){
        for (int j = 0 ; j < *boardColSize; j++){
            if (DFS(board, boardSize, boardColSize, word, len, 0, i, j, visited)) {return 1;};
        }
    }   
    return 0;
}
