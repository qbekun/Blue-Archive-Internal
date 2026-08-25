#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYTITLECHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6C50)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYTITLECHANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB7F30)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYTITLECHANGE_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB7FB0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyTitleChange_TypeDefinitionIndex = 25455;

	class NotifyTitleChange : public Il2CppObject
	{
	public:
		::System::String* title; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYTITLECHANGE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYTITLECHANGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYTITLECHANGE_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

