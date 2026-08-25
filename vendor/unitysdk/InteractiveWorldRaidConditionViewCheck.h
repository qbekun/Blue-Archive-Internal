#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define INTERACTIVEWORLDRAIDCONDITIONVIEWCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A0F20)
#define INTERACTIVEWORLDRAIDCONDITIONVIEWCHECK_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x25A0F30)

	inline static constexpr unsigned int InteractiveWorldRaidConditionViewCheck_TypeDefinitionIndex = 322;

	class InteractiveWorldRaidConditionViewCheck : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONVIEWCHECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONVIEWCHECK_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

