#pragma once
#include "../unitysdk.h"

#define SYSTEM_OPERATINGSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387550)
#define SYSTEM_OPERATINGSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387570)
#define SYSTEM_OPERATINGSYSTEM_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93876E0)
#define SYSTEM_OPERATINGSYSTEM_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x9387730)
#define SYSTEM_OPERATINGSYSTEM_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9387740)
#define SYSTEM_OPERATINGSYSTEM_CLONE_OFFSET UNITYSDK_OFFSET(0x9387750)
#define SYSTEM_OPERATINGSYSTEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93877C0)
#define SYSTEM_OPERATINGSYSTEM_GET_VERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x93877D0)

namespace System
{
	inline static constexpr unsigned int OperatingSystem_TypeDefinitionIndex = 23895;

	class OperatingSystem : public Il2CppObject
	{
	public:
		::System::Version* _version; // 0x10
		::System::PlatformID* _platform; // 0x18
		::System::String* _servicePack; // 0x20
		::System::String* _versionString; // 0x28

		::System::Void .ctor(::System::PlatformID* arg, ::System::Version* arg)
		{
			((::System::Void(*)(::System::PlatformID*, ::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::PlatformID* arg, ::System::Version* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::PlatformID*, ::System::Version*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::PlatformID* get_Platform()
		{
			return (return (::System::PlatformID*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GET_PLATFORM_OFFSET))(nullptr);
		}

		::System::Version* get_Version()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_CLONE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* get_VersionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATINGSYSTEM_GET_VERSIONSTRING_OFFSET))(nullptr);
		}

	};
}

