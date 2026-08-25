#pragma once
#include "unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeLibraryHandle; }
namespace Microsoft::Win32::SafeHandles { class SafeFileHandle; }
namespace Microsoft::Win32::SafeHandles { class SafeFindHandle; }

#define KERNEL32_COPYFILEUWP_OFFSET UNITYSDK_OFFSET(0x911CDD0)
#define KERNEL32_COPYFILE_OFFSET UNITYSDK_OFFSET(0x911CF80)
#define KERNEL32_DELETEVOLUMEMOUNTPOINTPRIVATE_OFFSET UNITYSDK_OFFSET(0x911D240)
#define KERNEL32_DELETEVOLUMEMOUNTPOINT_OFFSET UNITYSDK_OFFSET(0x911D2D0)
#define KERNEL32_FREELIBRARY_OFFSET UNITYSDK_OFFSET(0x911D460)
#define KERNEL32_LOADLIBRARYEX_OFFSET UNITYSDK_OFFSET(0x911D4F0)
#define KERNEL32_GETFILEMUIPATH_OFFSET UNITYSDK_OFFSET(0x911D5D0)
#define KERNEL32_GETDYNAMICTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x911D6F0)
#define KERNEL32_GETTIMEZONEINFORMATION_OFFSET UNITYSDK_OFFSET(0x911D780)
#define KERNEL32_CLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x911D810)
#define KERNEL32_COPYFILE2_OFFSET UNITYSDK_OFFSET(0x911CEE0)
#define KERNEL32_COPYFILEEXPRIVATE_OFFSET UNITYSDK_OFFSET(0x911D8A0)
#define KERNEL32_COPYFILEEX_OFFSET UNITYSDK_OFFSET(0x911D120)
#define KERNEL32_CREATEDIRECTORYPRIVATE_OFFSET UNITYSDK_OFFSET(0x911D970)
#define KERNEL32_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x911DA10)
#define KERNEL32_CREATEFILEPRIVATE_OFFSET UNITYSDK_OFFSET(0x911DAE0)
#define KERNEL32_CREATEFILE_OFFSET UNITYSDK_OFFSET(0x911DBB0)
#define KERNEL32_CREATEFILE_INTPTR_OFFSET UNITYSDK_OFFSET(0x911DD00)
#define KERNEL32_DELETEFILEPRIVATE_OFFSET UNITYSDK_OFFSET(0x911DE20)
#define KERNEL32_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x911DEB0)
#define KERNEL32_FINDFIRSTFILEEXPRIVATE_OFFSET UNITYSDK_OFFSET(0x911DF80)
#define KERNEL32_FINDFIRSTFILE_OFFSET UNITYSDK_OFFSET(0x911E080)
#define KERNEL32_FINDNEXTFILE_OFFSET UNITYSDK_OFFSET(0x911E1C0)
#define KERNEL32_FORMATMESSAGE_OFFSET UNITYSDK_OFFSET(0x911E290)
#define KERNEL32_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x911E370)
#define KERNEL32_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x911E3B0)
#define KERNEL32_TRYGETERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x911E560)
#define KERNEL32_GETFILEATTRIBUTESEXPRIVATE_OFFSET UNITYSDK_OFFSET(0x911E800)
#define KERNEL32_GETFILEATTRIBUTESEX_OFFSET UNITYSDK_OFFSET(0x911E8A0)
#define KERNEL32_GETFILEINFORMATIONBYHANDLEEX_OFFSET UNITYSDK_OFFSET(0x911E980)
#define KERNEL32_MOVEFILEEXPRIVATE_OFFSET UNITYSDK_OFFSET(0x911EA20)
#define KERNEL32_MOVEFILE_OFFSET UNITYSDK_OFFSET(0x911EAD0)
#define KERNEL32_REMOVEDIRECTORYPRIVATE_OFFSET UNITYSDK_OFFSET(0x911EBC0)
#define KERNEL32_REMOVEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x911EC50)
#define KERNEL32_SETTHREADERRORMODE_OFFSET UNITYSDK_OFFSET(0x911ED20)

	inline static constexpr unsigned int Kernel32_TypeDefinitionIndex = 23543;

	class Kernel32 : public Il2CppObject
	{
	public:
		::System::Boolean useUWPFallback; // 0x0

		::System::Int32 CopyFileUWP(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_COPYFILEUWP_OFFSET))(str, str, arg, nullptr);
		}

		::System::Int32 CopyFile(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_COPYFILE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean DeleteVolumeMountPointPrivate(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_DELETEVOLUMEMOUNTPOINTPRIVATE_OFFSET))(str, nullptr);
		}

		::System::Boolean DeleteVolumeMountPoint(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_DELETEVOLUMEMOUNTPOINT_OFFSET))(str, nullptr);
		}

		::System::Boolean FreeLibrary(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_FREELIBRARY_OFFSET))(arg, nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeLibraryHandle* LoadLibraryEx(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeLibraryHandle*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_LOADLIBRARYEX_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean GetFileMUIPath(::System::UInt32 arg, ::System::String* str, ::System::Text::StringBuilder* arg, int32_t&* arg, ::System::Text::StringBuilder* arg, int32_t&* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::String*, ::System::Text::StringBuilder*, int32_t&*, ::System::Text::StringBuilder*, int32_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_GETFILEMUIPATH_OFFSET))(arg, str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 GetDynamicTimeZoneInformation(TIME_DYNAMIC_ZONE_INFORMATION&* arg)
		{
			return (return (::System::UInt32(*)(TIME_DYNAMIC_ZONE_INFORMATION&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_GETDYNAMICTIMEZONEINFORMATION_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetTimeZoneInformation(TIME_ZONE_INFORMATION&* arg)
		{
			return (return (::System::UInt32(*)(TIME_ZONE_INFORMATION&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_GETTIMEZONEINFORMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CloseHandle(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_CLOSEHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CopyFile2(::System::String* str, ::System::String* str, COPYFILE2_EXTENDED_PARAMETERS&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, COPYFILE2_EXTENDED_PARAMETERS&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_COPYFILE2_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean CopyFileExPrivate(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_COPYFILEEXPRIVATE_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CopyFileEx(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_COPYFILEEX_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CreateDirectoryPrivate(::System::String* str, SECURITY_ATTRIBUTES&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, SECURITY_ATTRIBUTES&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_CREATEDIRECTORYPRIVATE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean CreateDirectory(::System::String* str, SECURITY_ATTRIBUTES&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, SECURITY_ATTRIBUTES&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_CREATEDIRECTORY_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 CreateFilePrivate(::System::String* str, ::System::Int32 arg, ::System::IO::FileShare* arg, ::System::Object** arg, ::System::IO::FileMode* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::IO::FileShare*, ::System::Object**, ::System::IO::FileMode*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_CREATEFILEPRIVATE_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeFileHandle* CreateFile(::System::String* str, ::System::Int32 arg, ::System::IO::FileShare* arg, ::System::IO::FileMode* arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeFileHandle*(*)(::System::String*, ::System::Int32, ::System::IO::FileShare*, ::System::IO::FileMode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_CREATEFILE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CreateFile_IntPtr(::System::String* str, ::System::Int32 arg, ::System::IO::FileShare* arg, ::System::IO::FileMode* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::IO::FileShare*, ::System::IO::FileMode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_CREATEFILE_INTPTR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean DeleteFilePrivate(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_DELETEFILEPRIVATE_OFFSET))(str, nullptr);
		}

		::System::Boolean DeleteFile(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_DELETEFILE_OFFSET))(str, nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeFindHandle* FindFirstFileExPrivate(::System::String* str, FINDEX_INFO_LEVELS* arg, WIN32_FIND_DATA&* arg, FINDEX_SEARCH_OPS* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeFindHandle*(*)(::System::String*, FINDEX_INFO_LEVELS*, WIN32_FIND_DATA&*, FINDEX_SEARCH_OPS*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_FINDFIRSTFILEEXPRIVATE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeFindHandle* FindFirstFile(::System::String* str, WIN32_FIND_DATA&* arg)
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeFindHandle*(*)(::System::String*, WIN32_FIND_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_FINDFIRSTFILE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean FindNextFile(::Microsoft::Win32::SafeHandles::SafeFindHandle* arg, WIN32_FIND_DATA&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeFindHandle*, WIN32_FIND_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_FINDNEXTFILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FormatMessage(::System::Int32 arg, ::System::Int32 arg, ::System::UInt32 arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Object**, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_FORMATMESSAGE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* GetMessage(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_GETMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* GetMessage(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_GETMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetErrorMessage(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_TRYGETERRORMESSAGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetFileAttributesExPrivate(::System::String* str, GET_FILEEX_INFO_LEVELS* arg, WIN32_FILE_ATTRIBUTE_DATA&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, GET_FILEEX_INFO_LEVELS*, WIN32_FILE_ATTRIBUTE_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_GETFILEATTRIBUTESEXPRIVATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean GetFileAttributesEx(::System::String* str, GET_FILEEX_INFO_LEVELS* arg, WIN32_FILE_ATTRIBUTE_DATA&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, GET_FILEEX_INFO_LEVELS*, WIN32_FILE_ATTRIBUTE_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_GETFILEATTRIBUTESEX_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean GetFileInformationByHandleEx(::System::Int32 arg, FILE_INFO_BY_HANDLE_CLASS* arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, FILE_INFO_BY_HANDLE_CLASS*, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_GETFILEINFORMATIONBYHANDLEEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean MoveFileExPrivate(::System::String* str, ::System::String* str, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_MOVEFILEEXPRIVATE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean MoveFile(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_MOVEFILE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean RemoveDirectoryPrivate(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_REMOVEDIRECTORYPRIVATE_OFFSET))(str, nullptr);
		}

		::System::Boolean RemoveDirectory(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_REMOVEDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Boolean SetThreadErrorMode(::System::UInt32 arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + KERNEL32_SETTHREADERRORMODE_OFFSET))(arg, arg, nullptr);
		}

	};

