#define ON_ERR(exp)                                                     \
     if (exp) {                                                         \
          fprintf(stderr, "%s: %s:%d\n", __FILE__, __func__, __LINE__); \
          return 1;                                                     \
     }

int main()
{
     return 0;
}
