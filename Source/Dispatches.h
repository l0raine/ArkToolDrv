#ifndef CXX_Dispatches_H
#define CXX_Dispatches_H

#include <ntifs.h>
#include "Private.h"
#include "ProcessCore.h"

// ʹ��Method_Buffer
/*
#define CTL_CODE( DeviceType, Function, Method, Access ) (                 \
((DeviceType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
*/

#define IOCTL_PROC_SEND_SELF_PID  (UINT32)CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_PROC_GET_PROCESS_COUNT  (UINT32)CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)
#define IOCTL_PROC_ENUM_PROCESS_LIST  (UINT32)CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_NEITHER, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

NTSTATUS
IoControlPassThrough(PDEVICE_OBJECT DeviceObject, PIRP Irp);


#endif // !CXX_Dispatches_H