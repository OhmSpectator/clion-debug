#define offsetof_var(var, member) \
	(__builtin_offsetof(__typeof(*(var)), member))

struct container
{
	int first;
	float second;
	double third;
};

int main()
{
	struct container instance;
	offsetof_var(&instance, third);                //FAIL
	__builtin_offsetof(__typeof(instance), third); //FAIL
	__builtin_offsetof(struct container, third);   //OK
	return 0;
}