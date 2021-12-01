void *reallocation(void *ptr,size_t size) {
	void *newptr;
	int msize;
	msize = getsize(ptr);
	printf("msize=%d\n", msize);
	if (size <= msize)
		return ptr;
	newptr = malloc(size);
	memcpy(newptr, ptr, msize);
	free(ptr);
	return newptr;
}
