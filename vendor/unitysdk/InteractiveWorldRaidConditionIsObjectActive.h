#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define INTERACTIVEWORLDRAIDCONDITIONISOBJECTACTIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x259FB50)
#define INTERACTIVEWORLDRAIDCONDITIONISOBJECTACTIVE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259FB60)

	inline static constexpr unsigned int InteractiveWorldRaidConditionIsObjectActive_TypeDefinitionIndex = 315;

	class InteractiveWorldRaidConditionIsObjectActive : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* target; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISOBJECTACTIVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISOBJECTACTIVE_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

