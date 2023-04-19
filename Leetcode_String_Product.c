char* multiply(char* arg1, char* arg2) {
    int len = strlen(arg1) + strlen(arg2);
    char *result = malloc(sizeof(char) * (len + 1));
    int acc;
    int k = 0;
    
    for (int i = 0; i < len+1; i++)
        result[i] = '0';
    for (int i = strlen(arg1)-1; i >= 0; i--){
        for (int j = strlen(arg2)-1; j >= 0; j--){
            acc = (arg1[i] - '0') * (arg2[j] - '0') + (result[i + j + 1] - '0');
            result[i+j+1] = (acc % 10) + '0';
            result[i+j] = ((acc /10) + (result[i + j] - '0')) + '0';
        }
    }
    result[len] = 0;
    while (result[k] == '0')
        k++;
    return strlen(result+k) > 0 ? result+k : "0";
}
