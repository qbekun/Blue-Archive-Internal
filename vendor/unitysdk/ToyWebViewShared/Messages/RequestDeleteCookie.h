#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6F70)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_GETDOMAIN_OFFSET UNITYSDK_OFFSET(0x9BB9180)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_GETNAMES_OFFSET UNITYSDK_OFFSET(0x9BB9190)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB91A0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB93F0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestDeleteCookie_TypeDefinitionIndex = 25464;

	class RequestDeleteCookie : public Il2CppObject
	{
	public:
		::System::String* domain; // 0x18
		Il2CppObject* names; // 0x20

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetDomain()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_GETDOMAIN_OFFSET))(nullptr);
		}

		Il2CppObject* GetNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_GETNAMES_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETECOOKIE_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

