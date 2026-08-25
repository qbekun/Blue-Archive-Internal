#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x932B280)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_DIRECTORY_OFFSET UNITYSDK_OFFSET(0x932B2A0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_SET_DIRECTORY_OFFSET UNITYSDK_OFFSET(0x932B2B0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_ROOTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x932B2C0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_SET_ROOTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x932B2D0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_ORIGINALROOTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x932B2E0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_SET_ORIGINALROOTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x932B2F0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x932B300)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x932B320)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_ISDIRECTORY_OFFSET UNITYSDK_OFFSET(0x932B340)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_TOFILESYSTEMINFO_OFFSET UNITYSDK_OFFSET(0x932B360)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_TOSPECIFIEDFULLPATH_OFFSET UNITYSDK_OFFSET(0x932B3E0)

namespace System::IO::Enumeration
{
	inline static constexpr unsigned int FileSystemEntry_TypeDefinitionIndex = 25310;

	class FileSystemEntry : public Il2CppObject
	{
	public:
		::System::Object** _info; // 0x10
		Il2CppObject* _Directory_k__BackingField; // 0x18
		Il2CppObject* _RootDirectory_k__BackingField; // 0x28
		Il2CppObject* _OriginalRootDirectory_k__BackingField; // 0x38

		::System::Void Initialize(::System::IO::Enumeration::FileSystemEntry&* arg, ::System::Object** arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::IO::Enumeration::FileSystemEntry&*, ::System::Object**, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_INITIALIZE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_Directory()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_DIRECTORY_OFFSET))(nullptr);
		}

		::System::Void set_Directory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_SET_DIRECTORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RootDirectory()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_ROOTDIRECTORY_OFFSET))(nullptr);
		}

		::System::Void set_RootDirectory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_SET_ROOTDIRECTORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OriginalRootDirectory()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_ORIGINALROOTDIRECTORY_OFFSET))(nullptr);
		}

		::System::Void set_OriginalRootDirectory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_SET_ORIGINALROOTDIRECTORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FileName()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::IO::FileAttributes* get_Attributes()
		{
			return (return (::System::IO::FileAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDirectory()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_GET_ISDIRECTORY_OFFSET))(nullptr);
		}

		::System::IO::FileSystemInfo* ToFileSystemInfo()
		{
			return (return (::System::IO::FileSystemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_TOFILESYSTEMINFO_OFFSET))(nullptr);
		}

		::System::String* ToSpecifiedFullPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENTRY_TOSPECIFIEDFULLPATH_OFFSET))(nullptr);
		}

	};
}

