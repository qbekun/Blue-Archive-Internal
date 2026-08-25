#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTJSDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB70A0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTJSDIALOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB9790)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTJSDIALOG_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB9880)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestJsDialog_TypeDefinitionIndex = 25469;

	class RequestJsDialog : public Il2CppObject
	{
	public:
		JsDialogType* jsDialogType; // 0x18
		::System::String* message; // 0x20
		::System::String* defaultPromptText; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTJSDIALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTJSDIALOG_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTJSDIALOG_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

