#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionCharacterPhaseChanged; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONCHARACTERPHASECHANGEDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1813D30)
#define GROUNDCONDITIONCHARACTERPHASECHANGEDVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813D40)
#define GROUNDCONDITIONCHARACTERPHASECHANGEDVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813D50)

	inline static constexpr unsigned int GroundConditionCharacterPhaseChangedVisual_TypeDefinitionIndex = 1226;

	class GroundConditionCharacterPhaseChangedVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionCharacterPhaseChanged* CharacterPhaseChanged; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERPHASECHANGEDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERPHASECHANGEDVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHARACTERPHASECHANGEDVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};

