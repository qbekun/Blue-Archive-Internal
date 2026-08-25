#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_NORMALIZEINPUTS_OFFSET UNITYSDK_OFFSET(0x932B580)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_MATCHESPATTERN_OFFSET UNITYSDK_OFFSET(0x932C0D0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_USERFILES_OFFSET UNITYSDK_OFFSET(0x932C4B0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_USERDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x932C6D0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_USERENTRIES_OFFSET UNITYSDK_OFFSET(0x932C8F0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_FILEINFOS_OFFSET UNITYSDK_OFFSET(0x932CB10)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_DIRECTORYINFOS_OFFSET UNITYSDK_OFFSET(0x932CD30)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_FILESYSTEMINFOS_OFFSET UNITYSDK_OFFSET(0x932CF50)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x932D170)

namespace System::IO::Enumeration
{
	inline static constexpr unsigned int FileSystemEnumerableFactory_TypeDefinitionIndex = 25322;

	class FileSystemEnumerableFactory : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_unixEscapeChars; // 0x0

		::System::Void NormalizeInputs(::System::String&* arg, ::System::String&* arg, ::System::IO::EnumerationOptions* arg)
		{
			((::System::Void(*)(::System::String&*, ::System::String&*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_NORMALIZEINPUTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchesPattern(::System::String* str, Il2CppObject* arg, ::System::IO::EnumerationOptions* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_MATCHESPATTERN_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* UserFiles(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_USERFILES_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* UserDirectories(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_USERDIRECTORIES_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* UserEntries(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_USERENTRIES_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* FileInfos(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_FILEINFOS_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* DirectoryInfos(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_DIRECTORYINFOS_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* FileSystemInfos(::System::String* str, ::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_FILESYSTEMINFOS_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMENUMERABLEFACTORY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

