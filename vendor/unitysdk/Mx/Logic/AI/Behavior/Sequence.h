#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorResult; }
namespace MX::Logic::AI::Behavior { class BehaviorNode; }

#define MX_LOGIC_AI_BEHAVIOR_SEQUENCE_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13DA740)
#define MX_LOGIC_AI_BEHAVIOR_SEQUENCE_ADD_OFFSET UNITYSDK_OFFSET(0x13DA8E0)
#define MX_LOGIC_AI_BEHAVIOR_SEQUENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DA980)
#define MX_LOGIC_AI_BEHAVIOR_SEQUENCE_GET_BEHAVIORS_OFFSET UNITYSDK_OFFSET(0x13DAA30)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 14518;

	class Sequence : public Il2CppObject
	{
	public:
		Il2CppObject* behaviors; // 0x18

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_SEQUENCE_BEHAVE_OFFSET))(nullptr);
		}

		::System::Void Add(::MX::Logic::AI::Behavior::BehaviorNode* arg)
		{
			((::System::Void(*)(::MX::Logic::AI::Behavior::BehaviorNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_SEQUENCE_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_SEQUENCE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Behaviors()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_SEQUENCE_GET_BEHAVIORS_OFFSET))(nullptr);
		}

	};
}

