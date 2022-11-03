// Göreviniz, gece yarısından bu yana geçen süreyi milisaniye cinsinden döndüren bir işlev yazmaktır.
// 1 s == 1000 milisaniyedir

int past(int h, int m, int s) {
    int result;
    result = (h * 3600000) + (m * 60000) + (s * 1000);

    return (result);
}