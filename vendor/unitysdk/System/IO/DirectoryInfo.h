#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_DIRECTORYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9303D60)
#define SYSTEM_IO_DIRECTORYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9303F40)
#define SYSTEM_IO_DIRECTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9305130)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET UNITYSDK_OFFSET(0x9305460)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET UNITYSDK_OFFSET(0x9305670)
#define SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET UNITYSDK_OFFSET(0x93055D0)
#define SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x93059A0)
#define SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x9305B10)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x9305BB0)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x9305D00)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x9305D80)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x9305F50)
#define SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET UNITYSDK_OFFSET(0x9305ED0)
#define SYSTEM_IO_DIRECTORYINFO_INTERNALENUMERATEINFOS_OFFSET UNITYSDK_OFFSET(0x93057E0)
#define SYSTEM_IO_DIRECTORYINFO_DELETE_OFFSET UNITYSDK_OFFSET(0x9306000)
#define SYSTEM_IO_DIRECTORYINFO_DELETE_OFFSET UNITYSDK_OFFSET(0x9306010)
#define SYSTEM_IO_DIRECTORYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9306020)

namespace System::IO
{
	inline static constexpr unsigned int DirectoryInfo_TypeDefinitionIndex = 25259;

	class DirectoryInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_.CTOR_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void Init(::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_INIT_OFFSET))(str, str, str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFiles()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFiles(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFiles(::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETFILES_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDirectories()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDirectories(::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_GETDIRECTORIES_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* EnumerateDirectories()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_OFFSET))(nullptr);
		}

		Il2CppObject* EnumerateDirectories(::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEDIRECTORIES_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* EnumerateFiles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET))(nullptr);
		}

		Il2CppObject* EnumerateFiles(::System::String* str, ::System::IO::SearchOption* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::IO::SearchOption*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* EnumerateFiles(::System::String* str, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_ENUMERATEFILES_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* InternalEnumerateInfos(::System::String* str, ::System::String* str, ::System::IO::SearchTarget* arg, ::System::IO::EnumerationOptions* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::System::IO::SearchTarget*, ::System::IO::EnumerationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_INTERNALENUMERATEINFOS_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void Delete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_DELETE_OFFSET))(nullptr);
		}

		::System::Void Delete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_DELETE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

