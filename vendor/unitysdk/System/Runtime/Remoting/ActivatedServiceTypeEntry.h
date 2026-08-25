#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2D20)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x91C2E60)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91C2E70)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ActivatedServiceTypeEntry_TypeDefinitionIndex = 24429;

	class ActivatedServiceTypeEntry : public Il2CppObject
	{
	public:
		::System::Type* obj_type; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Type* get_ObjectType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDSERVICETYPEENTRY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

