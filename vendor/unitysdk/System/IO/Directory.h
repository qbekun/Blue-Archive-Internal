#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_DIRECTORY_GETPARENT_OFFSET UNITYSDK_OFFSET(0x9303BC0)
#define SYSTEM_IO_DIRECTORY_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9303DE0)
#define SYSTEM_IO_DIRECTORY_EXISTS_OFFSET UNITYSDK_OFFSET(0x9303F90)
#define SYSTEM_IO_DIRECTORY_GETFILES_OFFSET UNITYSDK_OFFSET(0x93040E0)
#define SYSTEM_IO_DIRECTORY_GETFILES_OFFSET UNITYSDK_OFFSET(0x9304260)
#define SYSTEM_IO_DIRECTORY_GETFILES_OFFSET UNITYSDK_OFFSET(0x9304390)
#define SYSTEM_IO_DIRECTORY_GETFILES_OFFSET UNITYSDK_OFFSET(0x9304200)
#define SYSTEM_IO_DIRECTORY_GETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x93047B0)
#define SYSTEM_IO_DIRECTORY_GETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x9304850)
#define SYSTEM_IO_DIRECTORY_GETFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x93048B0)
#define SYSTEM_IO_DIRECTORY_GETFILESYSTEMENTRIES_OFFSET UNITYSDK_OFFSET(0x93049D0)
#define SYSTEM_IO_DIRECTORY_INTERNALENUMERATEPATHS_OFFSET UNITYSDK_OFFSET(0x93045D0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x9304A30)
#define SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x9304AA0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x9304AC0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x9304BC0)
#define SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x9304BA0)
#define SYSTEM_IO_DIRECTORY_INTERNALGETDIRECTORYROOT_OFFSET UNITYSDK_OFFSET(0x9304C30)
#define SYSTEM_IO_DIRECTORY_GETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9304CE0)
#define SYSTEM_IO_DIRECTORY_SETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9304CF0)
#define SYSTEM_IO_DIRECTORY_DELETE_OFFSET UNITYSDK_OFFSET(0x9304DF0)
#define SYSTEM_IO_DIRECTORY_DELETE_OFFSET UNITYSDK_OFFSET(0x9304E50)
#define SYSTEM_IO_DIRECTORY_INSECUREGETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9304EB0)
#define SYSTEM_IO_DIRECTORY_INSECURESETCURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9304F50)

namespace System::IO
{
	inline static constexpr unsigned int Directory_TypeDefinitionIndex = 25258;

	class Directory : public Il2CppObject
	{
	public:
		::System::IO::DirectoryInfo* GetParent(::System::String* str)
		{
			return (return (::System::IO::DirectoryInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETPARENT_OFFSET))(str, nullptr);
		}

		::System::IO::DirectoryInfo* CreateDirectory(::System::String* str)
		{
			return (return (::System::IO::DirectoryInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_CREATEDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Boolean Exists(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_EXISTS_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFiles(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFiles(::System::String* str, ::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_OFFSET))(str, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFiles(::System::String* str, ::System::String* str, ::System::IO::SearchOption* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_OFFSET))(str, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFiles(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILES_OFFSET))(str, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDirectories(::System::String* str, ::System::String* str, ::System::IO::SearchOption* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETDIRECTORIES_OFFSET))(str, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDirectories(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETDIRECTORIES_OFFSET))(str, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFileSystemEntries(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILESYSTEMENTRIES_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFileSystemEntries(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETFILESYSTEMENTRIES_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* InternalEnumeratePaths(::System::String* str, ::System::String* str, ::System::IO::SearchTarget* arg, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::SearchTarget*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALENUMERATEPATHS_OFFSET))(str, str, arg, arg, nullptr);
		}

		Il2CppObject* EnumerateDirectories(::System::String* str, ::System::String* str, ::System::IO::SearchOption* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* EnumerateDirectories(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEDIRECTORIES_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* EnumerateFiles(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET))(str, nullptr);
		}

		Il2CppObject* EnumerateFiles(::System::String* str, ::System::String* str, ::System::IO::SearchOption* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::SearchOption*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* EnumerateFiles(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_ENUMERATEFILES_OFFSET))(str, str, arg, nullptr);
		}

		::System::String* InternalGetDirectoryRoot(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INTERNALGETDIRECTORYROOT_OFFSET))(str, nullptr);
		}

		::System::String* GetCurrentDirectory()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_GETCURRENTDIRECTORY_OFFSET))(nullptr);
		}

		::System::Void SetCurrentDirectory(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_SETCURRENTDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Void Delete(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_DELETE_OFFSET))(str, nullptr);
		}

		::System::Void Delete(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_DELETE_OFFSET))(str, arg, nullptr);
		}

		::System::String* InsecureGetCurrentDirectory()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INSECUREGETCURRENTDIRECTORY_OFFSET))(nullptr);
		}

		::System::Void InsecureSetCurrentDirectory(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORY_INSECURESETCURRENTDIRECTORY_OFFSET))(str, nullptr);
		}

	};
}

