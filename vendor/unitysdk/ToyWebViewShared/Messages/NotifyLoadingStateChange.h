#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADINGSTATECHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6B90)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADINGSTATECHANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB7640)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADINGSTATECHANGE_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB7750)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyLoadingStateChange_TypeDefinitionIndex = 25447;

	class NotifyLoadingStateChange : public Il2CppObject
	{
	public:
		::System::Boolean isLoading; // 0x18
		::System::Boolean canGoBack; // 0x19
		::System::Boolean canGoForward; // 0x1A

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADINGSTATECHANGE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADINGSTATECHANGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADINGSTATECHANGE_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

