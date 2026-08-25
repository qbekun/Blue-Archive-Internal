#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeFindHandle; }

#define SYSTEM_IO_FILESYSTEM_COPYFILE_OFFSET UNITYSDK_OFFSET(0x92EA8C0)
#define SYSTEM_IO_FILESYSTEM_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x92EAC40)
#define SYSTEM_IO_FILESYSTEM_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x92EB750)
#define SYSTEM_IO_FILESYSTEM_DIRECTORYEXISTS_OFFSET UNITYSDK_OFFSET(0x92EABD0)
#define SYSTEM_IO_FILESYSTEM_DIRECTORYEXISTS_OFFSET UNITYSDK_OFFSET(0x92EB700)
#define SYSTEM_IO_FILESYSTEM_FILLATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x92EB8C0)
#define SYSTEM_IO_FILESYSTEM_FILEEXISTS_OFFSET UNITYSDK_OFFSET(0x92EB6B0)
#define SYSTEM_IO_FILESYSTEM_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x92EC280)
#define SYSTEM_IO_FILESYSTEM_GETLASTWRITETIME_OFFSET UNITYSDK_OFFSET(0x92EC2E0)
#define SYSTEM_IO_FILESYSTEM_MOVEFILE_OFFSET UNITYSDK_OFFSET(0x92EC360)
#define SYSTEM_IO_FILESYSTEM_REMOVEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x92EC490)
#define SYSTEM_IO_FILESYSTEM_GETFINDDATA_OFFSET UNITYSDK_OFFSET(0x92EC680)
#define SYSTEM_IO_FILESYSTEM_ISNAMESURROGATEREPARSEPOINT_OFFSET UNITYSDK_OFFSET(0x92EC880)
#define SYSTEM_IO_FILESYSTEM_REMOVEDIRECTORYRECURSIVE_OFFSET UNITYSDK_OFFSET(0x92ECA30)
#define SYSTEM_IO_FILESYSTEM_REMOVEDIRECTORYINTERNAL_OFFSET UNITYSDK_OFFSET(0x92EC550)
#define SYSTEM_IO_FILESYSTEM_UNITYCREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x92EB620)
#define SYSTEM_IO_FILESYSTEM_UNITYREMOVEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x92ED300)
#define SYSTEM_IO_FILESYSTEM_UNITYGETFILEATTRIBUTESEX_OFFSET UNITYSDK_OFFSET(0x92EBF60)
#define SYSTEM_IO_FILESYSTEM_UNITYCREATEFILE_INTPTR_OFFSET UNITYSDK_OFFSET(0x92ED590)
#define SYSTEM_IO_FILESYSTEM_UNITYCOPYFILE_OFFSET UNITYSDK_OFFSET(0x92EAB80)
#define SYSTEM_IO_FILESYSTEM_UNITYDELETEFILE_OFFSET UNITYSDK_OFFSET(0x92EB7E0)
#define SYSTEM_IO_FILESYSTEM_UNITYMOVEFILE_OFFSET UNITYSDK_OFFSET(0x92EC410)
#define SYSTEM_IO_FILESYSTEM_UNITYFINDFIRSTFILE_OFFSET UNITYSDK_OFFSET(0x92EC0C0)
#define SYSTEM_IO_FILESYSTEM_UNITYFINDNEXTFILE_OFFSET UNITYSDK_OFFSET(0x92ED3E0)
#define SYSTEM_IO_FILESYSTEM_BROKEREDCREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x92ED4F0)
#define SYSTEM_IO_FILESYSTEM_BROKEREDREMOVEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x92ED570)
#define SYSTEM_IO_FILESYSTEM_BROKEREDGETFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x92ED580)
#define SYSTEM_IO_FILESYSTEM_BROKEREDOPENFILE_OFFSET UNITYSDK_OFFSET(0x92ED690)
#define SYSTEM_IO_FILESYSTEM_BROKEREDCOPYFILE_OFFSET UNITYSDK_OFFSET(0x92ED6A0)
#define SYSTEM_IO_FILESYSTEM_BROKEREDMOVEFILE_OFFSET UNITYSDK_OFFSET(0x92ED6C0)
#define SYSTEM_IO_FILESYSTEM_BROKEREDDELETEFILE_OFFSET UNITYSDK_OFFSET(0x92ED6B0)
#define SYSTEM_IO_FILESYSTEM_BROKEREDFINDFIRSTFILE_OFFSET UNITYSDK_OFFSET(0x92ED6D0)
#define SYSTEM_IO_FILESYSTEM_BROKEREDFINDNEXTFILE_OFFSET UNITYSDK_OFFSET(0x92ED700)
#define SYSTEM_IO_FILESYSTEM_BROKEREDSAFEFINDHANDLEDISPOSE_OFFSET UNITYSDK_OFFSET(0x92ED710)
#define SYSTEM_IO_FILESYSTEM_REMOVEEXTENDEDPATHPREFIX_OFFSET UNITYSDK_OFFSET(0x92ED500)

namespace System::IO
{
	inline static constexpr unsigned int FileSystem_TypeDefinitionIndex = 25221;

	class FileSystem : public Il2CppObject
	{
	public:
		::System::Void CopyFile(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_COPYFILE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void CreateDirectory(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_CREATEDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Void DeleteFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_DELETEFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean DirectoryExists(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_DIRECTORYEXISTS_OFFSET))(str, nullptr);
		}

		::System::Boolean DirectoryExists(::System::String* str, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_DIRECTORYEXISTS_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 FillAttributeInfo(::System::String* str, WIN32_FILE_ATTRIBUTE_DATA&* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, WIN32_FILE_ATTRIBUTE_DATA&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_FILLATTRIBUTEINFO_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean FileExists(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_FILEEXISTS_OFFSET))(str, nullptr);
		}

		::System::IO::FileAttributes* GetAttributes(::System::String* str)
		{
			return (return (::System::IO::FileAttributes*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_GETATTRIBUTES_OFFSET))(str, nullptr);
		}

		::System::DateTimeOffset* GetLastWriteTime(::System::String* str)
		{
			return (return (::System::DateTimeOffset*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_GETLASTWRITETIME_OFFSET))(str, nullptr);
		}

		::System::Void MoveFile(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_MOVEFILE_OFFSET))(str, str, nullptr);
		}

		::System::Void RemoveDirectory(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_REMOVEDIRECTORY_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetFindData(::System::String* str, WIN32_FIND_DATA&* arg)
		{
			((::System::Void(*)(::System::String*, WIN32_FIND_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_GETFINDDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsNameSurrogateReparsePoint(WIN32_FIND_DATA&* arg)
		{
			return (return (::System::Boolean(*)(WIN32_FIND_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_ISNAMESURROGATEREPARSEPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveDirectoryRecursive(::System::String* str, WIN32_FIND_DATA&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, WIN32_FIND_DATA&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_REMOVEDIRECTORYRECURSIVE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void RemoveDirectoryInternal(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_REMOVEDIRECTORYINTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean UnityCreateDirectory(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_UNITYCREATEDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Boolean UnityRemoveDirectory(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_UNITYREMOVEDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Boolean UnityGetFileAttributesEx(::System::String* str, WIN32_FILE_ATTRIBUTE_DATA&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, WIN32_FILE_ATTRIBUTE_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_UNITYGETFILEATTRIBUTESEX_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 UnityCreateFile_IntPtr(::System::String* str, ::System::Int32 arg, ::System::IO::FileShare* arg, ::System::IO::FileMode* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::IO::FileShare*, ::System::IO::FileMode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_UNITYCREATEFILE_INTPTR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 UnityCopyFile(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_UNITYCOPYFILE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean UnityDeleteFile(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_UNITYDELETEFILE_OFFSET))(str, nullptr);
		}

		::System::Boolean UnityMoveFile(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_UNITYMOVEFILE_OFFSET))(str, str, nullptr);
		}

		::Microsoft::Win32::SafeHandles::SafeFindHandle* UnityFindFirstFile(::System::String* str, WIN32_FIND_DATA&* arg)
		{
			return (return (::Microsoft::Win32::SafeHandles::SafeFindHandle*(*)(::System::String*, WIN32_FIND_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_UNITYFINDFIRSTFILE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean UnityFindNextFile(::Microsoft::Win32::SafeHandles::SafeFindHandle* arg, WIN32_FIND_DATA&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeFindHandle*, WIN32_FIND_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_UNITYFINDNEXTFILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean BrokeredCreateDirectory(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDCREATEDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Boolean BrokeredRemoveDirectory(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDREMOVEDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Boolean BrokeredGetFileAttributes(::System::String* str, WIN32_FILE_ATTRIBUTE_DATA&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, WIN32_FILE_ATTRIBUTE_DATA&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDGETFILEATTRIBUTES_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 BrokeredOpenFile(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDOPENFILE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void BrokeredCopyFile(::System::String* str, ::System::String* str, ::System::Boolean arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDCOPYFILE_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Boolean BrokeredMoveFile(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDMOVEFILE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean BrokeredDeleteFile(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDDELETEFILE_OFFSET))(str, nullptr);
		}

		::System::Int32 BrokeredFindFirstFile(::System::String* str, ::System::String&* arg, uint32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDFINDFIRSTFILE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean BrokeredFindNextFile(::System::Int32 arg, ::System::String&* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDFINDNEXTFILE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 BrokeredSafeFindHandleDispose(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_BROKEREDSAFEFINDHANDLEDISPOSE_OFFSET))(arg, nullptr);
		}

		::System::String* RemoveExtendedPathPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEM_REMOVEEXTENDEDPATHPREFIX_OFFSET))(str, nullptr);
		}

	};
}

