#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::AI::Behavior { class BehaviorNode; }
namespace MX::Logic::AI::Behavior { class BehaviorResult; }

#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_GET_SWITCHBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x13DA020)
#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_GET_BRANCHINDEX_OFFSET UNITYSDK_OFFSET(0x13DA030)
#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_SET_BRANCHINDEX_OFFSET UNITYSDK_OFFSET(0x13DA040)
#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DA050)
#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DA080)
#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DA0E0)
#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x13DA0B0)
#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x13DA180)
#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_BEHAVE_OFFSET UNITYSDK_OFFSET(0x13DA230)
#define MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13DA410)

namespace MX::Logic::AI::Behavior
{
	inline static constexpr unsigned int RootSelector_TypeDefinitionIndex = 14516;

	class RootSelector : public Il2CppObject
	{
	public:
		Il2CppObject* _SwitchBehavior_k__BackingField; // 0x28
		::System::Int32 _BranchIndex_k__BackingField; // 0x30

		Il2CppObject* get_SwitchBehavior()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_GET_SWITCHBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Int32 get_BranchIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_GET_BRANCHINDEX_OFFSET))(nullptr);
		}

		::System::Void set_BranchIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_SET_BRANCHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Add(::MX::Logic::AI::Behavior::BehaviorNode* arg)
		{
			((::System::Void(*)(::MX::Logic::AI::Behavior::BehaviorNode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_ADD_OFFSET))(arg, nullptr);
		}

		::MX::Logic::AI::Behavior::BehaviorResult* Behave()
		{
			return ((::MX::Logic::AI::Behavior::BehaviorResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_BEHAVE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_AI_BEHAVIOR_ROOTSELECTOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

