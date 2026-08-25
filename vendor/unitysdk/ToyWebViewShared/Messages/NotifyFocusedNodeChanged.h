#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYFOCUSEDNODECHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6B50)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYFOCUSEDNODECHANGED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB73C0)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYFOCUSEDNODECHANGED_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB7440)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyFocusedNodeChanged_TypeDefinitionIndex = 25445;

	class NotifyFocusedNodeChanged : public Il2CppObject
	{
	public:
		::System::Boolean editable; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYFOCUSEDNODECHANGED_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYFOCUSEDNODECHANGED_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYFOCUSEDNODECHANGED_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

