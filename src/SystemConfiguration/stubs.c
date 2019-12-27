#include <CoreFoundation/CoreFoundation.h>
#include <stdio.h>
#include <SystemConfiguration/SystemConfiguration.h>

#define STUB() printf("STUB %s\n", __func__)

CFPropertyListRef SCDynamicStoreCopyValue(SCDynamicStoreRef store, CFStringRef key)
{
	STUB();
	return NULL;
}

SCDynamicStoreRef SCDynamicStoreCreate(CFAllocatorRef allocator, CFStringRef name, SCDynamicStoreCallBack callout, SCDynamicStoreContext *context)
{
	STUB();
	return NULL;
}

CFStringRef SCDynamicStoreKeyCreate(CFAllocatorRef allocator, CFStringRef fmt, ...)
{
	STUB();
	return NULL;
}

Boolean SCDynamicStoreSetDispatchQueue(SCDynamicStoreRef store, dispatch_queue_t queue)
{
	STUB();
	return FALSE;
}

Boolean SCDynamicStoreSetNotificationKeys(SCDynamicStoreRef store, CFArrayRef __nullable keys, CFArrayRef __nullable patterns) {
	STUB();
	return FALSE;
}
