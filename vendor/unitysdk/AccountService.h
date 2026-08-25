#pragma once
#include "unitysdk.h"

class ValidCallnameFail;

#define ACCOUNTSERVICE_ISVALIDMESSAGE_OFFSET UNITYSDK_OFFSET(0xC49700)
#define ACCOUNTSERVICE_CHECKCALLNAME_OFFSET UNITYSDK_OFFSET(0xC49920)
#define ACCOUNTSERVICE_ISVALIDNAME_OFFSET UNITYSDK_OFFSET(0xC4A060)
#define ACCOUNTSERVICE_ISVALIDNICKNAME_OFFSET UNITYSDK_OFFSET(0xC4A1D0)
#define ACCOUNTSERVICE_CHECKCALLERRORPOPUP_OFFSET UNITYSDK_OFFSET(0xC49C50)
#define ACCOUNTSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC4A320)
#define ACCOUNTSERVICE_ISVALIDCALLNAME_OFFSET UNITYSDK_OFFSET(0xC49940)
#define ACCOUNTSERVICE_VALIDATIONCHATMESSAGE_OFFSET UNITYSDK_OFFSET(0xC4A530)

	inline static constexpr unsigned int AccountService_TypeDefinitionIndex = 8931;

	class AccountService : public Il2CppObject
	{
	public:
		::System::Boolean IsValidMessage(::System::String* str, ::System::Text::RegularExpressions::Regex* arg, ::System::String&* arg2, ::System::Boolean arg3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Text::RegularExpressions::Regex*, ::System::String&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSERVICE_ISVALIDMESSAGE_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckCallName(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSERVICE_CHECKCALLNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean IsValidName(::System::String* str, ::System::String&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSERVICE_ISVALIDNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsValidNickname(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSERVICE_ISVALIDNICKNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean CheckCallErrorPopup(ValidCallnameFail* arg)
		{
			return ((::System::Boolean(*)(ValidCallnameFail*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSERVICE_CHECKCALLERRORPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSERVICE_.CTOR_OFFSET))(nullptr);
		}

		ValidCallnameFail* IsValidCallname(::System::String* str)
		{
			return ((ValidCallnameFail*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSERVICE_ISVALIDCALLNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidationChatMessage(::System::String* str, ::System::String&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSERVICE_VALIDATIONCHATMESSAGE_OFFSET))(str, arg, nullptr);
		}

	};

