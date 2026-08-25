#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_FILEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x930A690)
#define SYSTEM_IO_FILEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x930A6A0)
#define SYSTEM_IO_FILEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x930A6C0)
#define SYSTEM_IO_FILEINFO_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x930A830)
#define SYSTEM_IO_FILEINFO_GET_DIRECTORYNAME_OFFSET UNITYSDK_OFFSET(0x930AA10)
#define SYSTEM_IO_FILEINFO_GET_DIRECTORY_OFFSET UNITYSDK_OFFSET(0x930AA60)
#define SYSTEM_IO_FILEINFO_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x930AB90)
#define SYSTEM_IO_FILEINFO_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x930AD10)
#define SYSTEM_IO_FILEINFO_DELETE_OFFSET UNITYSDK_OFFSET(0x930AE10)
#define SYSTEM_IO_FILEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x930AE20)
#define SYSTEM_IO_FILEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x930AE30)

namespace System::IO
{
	inline static constexpr unsigned int FileInfo_TypeDefinitionIndex = 25265;

	class FileInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_.CTOR_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Int64 get_Length()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::String* get_DirectoryName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_DIRECTORYNAME_OFFSET))(nullptr);
		}

		::System::IO::DirectoryInfo* get_Directory()
		{
			return (return (::System::IO::DirectoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_DIRECTORY_OFFSET))(nullptr);
		}

		::System::IO::StreamWriter* CreateText()
		{
			return (return (::System::IO::StreamWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_CREATETEXT_OFFSET))(nullptr);
		}

		::System::IO::StreamWriter* AppendText()
		{
			return (return (::System::IO::StreamWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_APPENDTEXT_OFFSET))(nullptr);
		}

		::System::Void Delete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_DELETE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILEINFO_GET_NAME_OFFSET))(nullptr);
		}

	};
}

