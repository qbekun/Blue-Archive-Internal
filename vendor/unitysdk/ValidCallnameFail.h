#pragma once
#include "unitysdk.h"

class ValidCallnameFail;

	inline static constexpr unsigned int ValidCallnameFail_TypeDefinitionIndex = 8929;

	class ValidCallnameFail : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ValidCallnameFail* Success; // 0x0
		ValidCallnameFail* NotMatchLanguageKr; // 0x0
		ValidCallnameFail* NotMatchLanguageEn; // 0x0
		ValidCallnameFail* EmptyName; // 0x0
		ValidCallnameFail* OverMaxLength; // 0x0
		ValidCallnameFail* FailNameCheck; // 0x0
		ValidCallnameFail* FailFilter; // 0x0

	};

