#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionLogicEffect; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONLOGICEFFECTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814430)
#define GROUNDCONDITIONLOGICEFFECTVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814440)
#define GROUNDCONDITIONLOGICEFFECTVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814500)

	inline static constexpr unsigned int GroundConditionLogicEffectVisual_TypeDefinitionIndex = 1234;

	class GroundConditionLogicEffectVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionLogicEffect* LogicEffect; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONLOGICEFFECTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONLOGICEFFECTVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONLOGICEFFECTVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

