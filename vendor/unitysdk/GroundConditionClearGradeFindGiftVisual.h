#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionClearGradeFindGift; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONCLEARGRADEFINDGIFTVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814190)
#define GROUNDCONDITIONCLEARGRADEFINDGIFTVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814250)
#define GROUNDCONDITIONCLEARGRADEFINDGIFTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814260)

	inline static constexpr unsigned int GroundConditionClearGradeFindGiftVisual_TypeDefinitionIndex = 1231;

	class GroundConditionClearGradeFindGiftVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionClearGradeFindGift* ClearGradeFindGift; // 0x18

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARGRADEFINDGIFTVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARGRADEFINDGIFTVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCLEARGRADEFINDGIFTVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

