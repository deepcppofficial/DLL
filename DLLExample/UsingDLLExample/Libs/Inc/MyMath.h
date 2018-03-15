#ifdef CREATE_DLL
#define DLL _declspec(dllexport)
#else
#define DLL _declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif

	DLL int Add(int a, int b);

	DLL int Sub(int a, int b);

	DLL int Mul(int a, int b);

	DLL float Div(int a, int b);

#ifdef __cplusplus
}
#endif
