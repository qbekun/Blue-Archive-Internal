#pragma once
#include "unitysdk.h"

class GroundConditionWaitForSeconds;
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONWAITFORSECONDSVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814970)
#define GROUNDCONDITIONWAITFORSECONDSVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814A30)
#define GROUNDCONDITIONWAITFORSECONDSVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814A40)

	inline static constexpr unsigned int GroundConditionWaitForSecondsVisual_TypeDefinitionIndex = 1241;

	class GroundConditionWaitForSecondsVisual : public Il2CppObject
	{
	public:
		GroundConditionWaitForSeconds* WaitForSeconds; // 0x18

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDSVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDSVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONWAITFORSECONDSVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

