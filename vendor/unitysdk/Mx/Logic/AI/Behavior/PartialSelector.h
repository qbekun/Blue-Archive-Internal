#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_PARTIALSELECTOR_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13D9830)
#define MX_LOGIC_AI_BEHAVIOR_PARTIALSELECTOR_GET_BEHAVIORS_OFFSET UNITYSDK_OFFSET(0x13D9990)
#define MX_LOGIC_AI_BEHAVIOR_PARTIALSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D99A0)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int PartialSelector_TypeDefinitionIndex = 14513;

	class PartialSelector : public Il2CppObject
	{
	public:
		Il2CppObject* _behaviors; // 0x18
		::System::Int32 _selections; // 0x20

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_PARTIALSELECTOR_BEHAVE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Behaviors()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_PARTIALSELECTOR_GET_BEHAVIORS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_PARTIALSELECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

