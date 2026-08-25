#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REPLYJSDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6CD0)
#define TOYWEBVIEWSHARED_MESSAGES_REPLYJSDIALOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB8150)
#define TOYWEBVIEWSHARED_MESSAGES_REPLYJSDIALOG_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB8230)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int ReplyJsDialog_TypeDefinitionIndex = 25459;

	class ReplyJsDialog : public Il2CppObject
	{
	public:
		::System::Boolean ok; // 0x18
		::System::String* userInput; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYJSDIALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYJSDIALOG_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYJSDIALOG_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

