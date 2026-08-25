#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionAliveCharacterCountCheck; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18135D0)
#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x18135E0)
#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x18135F0)

	inline static constexpr unsigned int GroundConditionAliveCharacterCountCheckVisual_TypeDefinitionIndex = 1219;

	class GroundConditionAliveCharacterCountCheckVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionAliveCharacterCountCheck* Condition; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};

