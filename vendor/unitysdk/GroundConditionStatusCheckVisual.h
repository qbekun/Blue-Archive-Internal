#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionStatusCheck; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONSTATUSCHECKVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814890)
#define GROUNDCONDITIONSTATUSCHECKVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814950)
#define GROUNDCONDITIONSTATUSCHECKVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814960)

	inline static constexpr unsigned int GroundConditionStatusCheckVisual_TypeDefinitionIndex = 1239;

	class GroundConditionStatusCheckVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionStatusCheck* Check; // 0x18

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTATUSCHECKVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTATUSCHECKVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONSTATUSCHECKVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

