#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYCURSORCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6B30)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYCURSORCHANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB7320)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYCURSORCHANGE_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB73A0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyCursorChange_TypeDefinitionIndex = 25444;

	class NotifyCursorChange : public Il2CppObject
	{
	public:
		CefCursorType* type; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYCURSORCHANGE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYCURSORCHANGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYCURSORCHANGE_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

