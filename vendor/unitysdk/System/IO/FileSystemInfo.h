#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_FILESYSTEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9305120)
#define SYSTEM_IO_FILESYSTEMINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x930AE40)
#define SYSTEM_IO_FILESYSTEMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x930AF90)
#define SYSTEM_IO_FILESYSTEMINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x930A920)
#define SYSTEM_IO_FILESYSTEMINFO_GET_EXISTSCORE_OFFSET UNITYSDK_OFFSET(0x930B050)
#define SYSTEM_IO_FILESYSTEMINFO_GET_LENGTHCORE_OFFSET UNITYSDK_OFFSET(0x930A990)
#define SYSTEM_IO_FILESYSTEMINFO_ENSUREDATAINITIALIZED_OFFSET UNITYSDK_OFFSET(0x930AFE0)
#define SYSTEM_IO_FILESYSTEMINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x930B0E0)
#define SYSTEM_IO_FILESYSTEMINFO_GET_NORMALIZEDPATH_OFFSET UNITYSDK_OFFSET(0x930AC90)
#define SYSTEM_IO_FILESYSTEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9306030)
#define SYSTEM_IO_FILESYSTEMINFO_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x930B110)
#define SYSTEM_IO_FILESYSTEMINFO_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x930B240)
#define SYSTEM_IO_FILESYSTEMINFO_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x930B250)
#define SYSTEM_IO_FILESYSTEMINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x930B370)
#define SYSTEM_IO_FILESYSTEMINFO_GET_EXISTS_OFFSET UNITYSDK_OFFSET(0x930B380)
#define SYSTEM_IO_FILESYSTEMINFO_DELETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_IO_FILESYSTEMINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x930B4B0)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemInfo_TypeDefinitionIndex = 25266;

	class FileSystemInfo : public Il2CppObject
	{
	public:
		WIN32_FILE_ATTRIBUTE_DATA* _data; // 0x18
		::System::Int32 _dataInitialized; // 0x3C
		::System::String* FullPath; // 0x40
		::System::String* OriginalPath; // 0x48
		::System::String* _name; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::IO::FileSystemInfo* Create(::System::String* str, ::System::IO::Enumeration::FileSystemEntry&* arg)
		{
			return (return (::System::IO::FileSystemInfo*(*)(::System::String*, ::System::IO::Enumeration::FileSystemEntry&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_CREATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void Init(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_INIT_OFFSET))(arg, nullptr);
		}

		::System::IO::FileAttributes* get_Attributes()
		{
			return (return (::System::IO::FileAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_ExistsCore()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_EXISTSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_LengthCore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_LENGTHCORE_OFFSET))(nullptr);
		}

		::System::Void EnsureDataInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_ENSUREDATAINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_REFRESH_OFFSET))(nullptr);
		}

		::System::String* get_NormalizedPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_NORMALIZEDPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_FullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_FULLNAME_OFFSET))(nullptr);
		}

		::System::String* get_Extension()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_EXTENSION_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_Exists()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_GET_EXISTS_OFFSET))(nullptr);
		}

		::System::Void Delete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_DELETE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

