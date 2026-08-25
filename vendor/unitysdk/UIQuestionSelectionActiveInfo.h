#pragma once
#include "unitysdk.h"

#define UIQUESTIONSELECTIONACTIVEINFO_GETALPHA_OFFSET UNITYSDK_OFFSET(0x27E4040)

	inline static constexpr unsigned int UIQuestionSelectionActiveInfo_TypeDefinitionIndex = 7676;

	class UIQuestionSelectionActiveInfo : public Il2CppObject
	{
	public:
		::System::Single ActiveAlpha; // 0x10
		::System::Single InactiveAlpha; // 0x14

		::System::Single GetAlpha(::System::Boolean arg)
		{
			return ((::System::Single(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIQUESTIONSELECTIONACTIVEINFO_GETALPHA_OFFSET))(arg, nullptr);
		}

	};

