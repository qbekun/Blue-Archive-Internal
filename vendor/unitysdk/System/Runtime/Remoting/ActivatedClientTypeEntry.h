#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2B60)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_APPLICATIONURL_OFFSET UNITYSDK_OFFSET(0x91C2CD0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_CONTEXTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x91C2CE0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x91C2CF0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91C2D00)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ActivatedClientTypeEntry_TypeDefinitionIndex = 24428;

	class ActivatedClientTypeEntry : public Il2CppObject
	{
	public:
		::System::String* applicationUrl; // 0x20
		::System::Type* obj_type; // 0x28

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::String* get_ApplicationUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_APPLICATIONURL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ContextAttributes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_CONTEXTATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Type* get_ObjectType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATEDCLIENTTYPEENTRY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

