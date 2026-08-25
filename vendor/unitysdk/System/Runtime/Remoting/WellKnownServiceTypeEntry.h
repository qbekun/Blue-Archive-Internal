#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D4240)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_MODE_OFFSET UNITYSDK_OFFSET(0x91D43B0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x91D43C0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTURI_OFFSET UNITYSDK_OFFSET(0x91D43D0)
#define SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91D43E0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int WellKnownServiceTypeEntry_TypeDefinitionIndex = 24458;

	class WellKnownServiceTypeEntry : public Il2CppObject
	{
	public:
		::System::Type* obj_type; // 0x20
		::System::String* obj_uri; // 0x28
		::System::Runtime::Remoting::WellKnownObjectMode* obj_mode; // 0x30

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Runtime::Remoting::WellKnownObjectMode* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Runtime::Remoting::WellKnownObjectMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_.CTOR_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Runtime::Remoting::WellKnownObjectMode* get_Mode()
		{
			return (return (::System::Runtime::Remoting::WellKnownObjectMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_MODE_OFFSET))(nullptr);
		}

		::System::Type* get_ObjectType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ObjectUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_GET_OBJECTURI_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_WELLKNOWNSERVICETYPEENTRY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

