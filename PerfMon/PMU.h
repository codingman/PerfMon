#include <ntddk.h>
#include "Common.h"
///////////////////////////////////////////////////////
//// Prototype
////
////

NTSTATUS PMUEnvironmentCheck(
	_Out_ PMUINFO* Info
);

NTSTATUS PMUInitiailization(
	_In_ PVOID Info
);

NTSTATUS PMUUnInitiailization(
	_In_ PVOID Info
);