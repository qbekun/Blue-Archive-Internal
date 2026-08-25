#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPOPUPSHOW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6C30)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPOPUPSHOW_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB7D50)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPOPUPSHOW_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB7E60)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyPopupShow_TypeDefinitionIndex = 25454;

	class NotifyPopupShow : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x18
		::System::Int32 y; // 0x1C
		::System::Int32 width; // 0x20
		::System::Int32 height; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPOPUPSHOW_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPOPUPSHOW_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPOPUPSHOW_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

