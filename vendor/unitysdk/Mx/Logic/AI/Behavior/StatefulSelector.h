#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_STATEFULSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DAA40)
#define MX_LOGIC_AI_BEHAVIOR_STATEFULSELECTOR_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13DAAF0)
#define MX_LOGIC_AI_BEHAVIOR_STATEFULSELECTOR_GET_BEHAVIORS_OFFSET UNITYSDK_OFFSET(0x13DAC40)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int StatefulSelector_TypeDefinitionIndex = 14519;

	class StatefulSelector : public Il2CppObject
	{
	public:
		Il2CppObject* _behaviors; // 0x18
		::System::Int32 _lastBehavior; // 0x20

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_STATEFULSELECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_STATEFULSELECTOR_BEHAVE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Behaviors()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_STATEFULSELECTOR_GET_BEHAVIORS_OFFSET))(nullptr);
		}

	};
}

