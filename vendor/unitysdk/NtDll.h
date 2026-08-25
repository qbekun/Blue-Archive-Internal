#pragma once
#include "unitysdk.h"

#define NTDLL_NTCREATEFILE_OFFSET UNITYSDK_OFFSET(0x911F1F0)
#define NTDLL_CREATEFILE_OFFSET UNITYSDK_OFFSET(0x911F310)
#define NTDLL_NTQUERYDIRECTORYFILE_OFFSET UNITYSDK_OFFSET(0x911F590)
#define NTDLL_RTLNTSTATUSTODOSERROR_OFFSET UNITYSDK_OFFSET(0x911F6C0)

	inline static constexpr unsigned int NtDll_TypeDefinitionIndex = 23560;

	class NtDll : public Il2CppObject
	{
	public:
		::System::Int32 NtCreateFile(int32_t&* arg, DesiredAccess* arg, OBJECT_ATTRIBUTES&* arg, IO_STATUS_BLOCK&* arg, ::System::Object** arg, ::System::IO::FileAttributes* arg, ::System::IO::FileShare* arg, CreateDisposition* arg, CreateOptions* arg, ::System::Object** arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(int32_t&*, DesiredAccess*, OBJECT_ATTRIBUTES&*, IO_STATUS_BLOCK&*, ::System::Object**, ::System::IO::FileAttributes*, ::System::IO::FileShare*, CreateDisposition*, CreateOptions*, ::System::Object**, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NTDLL_NTCREATEFILE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* CreateFile(Il2CppObject* arg, ::System::Int32 arg, CreateDisposition* arg, DesiredAccess* arg, ::System::IO::FileShare* arg, ::System::IO::FileAttributes* arg, CreateOptions* arg, ObjectAttributes* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, CreateDisposition*, DesiredAccess*, ::System::IO::FileShare*, ::System::IO::FileAttributes*, CreateOptions*, ObjectAttributes*, ::PVOID))((::PBYTE)hIl2Cpp + NTDLL_CREATEFILE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 NtQueryDirectoryFile(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, IO_STATUS_BLOCK&* arg, ::System::Int32 arg, ::System::UInt32 arg, FILE_INFORMATION_CLASS* arg, BOOLEAN* flag, ::System::Object** arg, BOOLEAN* flag)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, IO_STATUS_BLOCK&*, ::System::Int32, ::System::UInt32, FILE_INFORMATION_CLASS*, BOOLEAN*, ::System::Object**, BOOLEAN*, ::PVOID))((::PBYTE)hIl2Cpp + NTDLL_NTQUERYDIRECTORYFILE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, flag, arg, flag, nullptr);
		}

		::System::UInt32 RtlNtStatusToDosError(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NTDLL_RTLNTSTATUSTODOSERROR_OFFSET))(arg, nullptr);
		}

	};

