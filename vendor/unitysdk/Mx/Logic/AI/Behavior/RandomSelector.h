#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Math { class IPseudoRandomService; }
namespace MX::Logic::AI::Behavior { class BehaviorNode; }
namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_GET_BEHAVIORS_OFFSET UNITYSDK_OFFSET(0x13D9C80)
#define MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D9C90)
#define MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D9CA0)
#define MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x13D9DC0)
#define MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13D9E60)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int RandomSelector_TypeDefinitionIndex = 14515;

	class RandomSelector : public Il2CppObject
	{
	public:
		Il2CppObject* _behaviors; // 0x18
		::MX::Core::Math::IPseudoRandomService* _random; // 0x20

		Il2CppObject* get_Behaviors()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_GET_BEHAVIORS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Core::Math::IPseudoRandomService* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::MX::Core::Math::IPseudoRandomService*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::Logic::AI::Behavior::BehaviorNode* arg)
		{
			((::System::Void(*)(::MX::Logic::AI::Behavior::BehaviorNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_ADD_OFFSET))(arg, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_RANDOMSELECTOR_BEHAVE_OFFSET))(nullptr);
		}

	};
}

