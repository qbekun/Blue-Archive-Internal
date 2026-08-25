#pragma once
#include "../unitysdk.h"

#define SYSTEM_PARSINGINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9350DE0)

namespace System
{
	inline static constexpr unsigned int ParsingInfo_TypeDefinitionIndex = 23758;

	class ParsingInfo : public Il2CppObject
	{
	public:
		::System::Globalization::Calendar* calendar; // 0x10
		::System::Int32 dayOfWeek; // 0x18
		TM* timeMark; // 0x1C
		::System::Boolean fUseHour12; // 0x20
		::System::Boolean fUseTwoDigitYear; // 0x21
		::System::Boolean fAllowInnerWhite; // 0x22
		::System::Boolean fAllowTrailingWhite; // 0x23
		::System::Boolean fCustomNumberParser; // 0x24
		MatchNumberDelegate* parseNumberDelegate; // 0x28

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSINGINFO_INIT_OFFSET))(nullptr);
		}

	};
}

