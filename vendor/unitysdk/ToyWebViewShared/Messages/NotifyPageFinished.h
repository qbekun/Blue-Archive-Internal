#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGEFINISHED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6BD0)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGEFINISHED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB78D0)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGEFINISHED_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB78E0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyPageFinished_TypeDefinitionIndex = 25449;

	class NotifyPageFinished : public Il2CppObject
	{
	public:
		::System::String* url; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGEFINISHED_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGEFINISHED_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPAGEFINISHED_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

