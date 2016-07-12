struct container
{
	int first;
	float second;
	double third;
};

int main()
{
	struct container instance;
	__builtin_offsetof(struct container, third);   //OK
	__builtin_offsetof(__typeof(instance), third); //"Cannot resolve variable 'third'"
	return 0;
}