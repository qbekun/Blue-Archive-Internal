#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BehaviorTreeAsset; }
namespace MXBehaviorTree { class BehaviorTree; }
namespace MXBehaviorTree { class Blackboard; }
namespace MXBehaviorTree { class BehaviorTreeOwner; }

#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_BEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x9405230)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_BEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x9405240)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x9405250)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x9405260)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_BEHAVIORTREEOWNER_OFFSET UNITYSDK_OFFSET(0x9405270)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_BEHAVIORTREEOWNER_OFFSET UNITYSDK_OFFSET(0x9405280)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x9405290)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x94052A0)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x94052B0)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x94052C0)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_AWAKE_OFFSET UNITYSDK_OFFSET(0x94052D0)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_PLAY_OFFSET UNITYSDK_OFFSET(0x9405360)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_PLAY_OFFSET UNITYSDK_OFFSET(0x94055C0)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_PLAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x9405540)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_BUILD_OFFSET UNITYSDK_OFFSET(0x94053E0)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_STOP_OFFSET UNITYSDK_OFFSET(0x9405710)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9405720)
#define MXBEHAVIORTREE_BEHAVIORTREERUNNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9405890)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BehaviorTreeRunner_TypeDefinitionIndex = 36737;

	class BehaviorTreeRunner : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BehaviorTreeAsset* Asset; // 0x18
		::System::Boolean PlayOnAwake; // 0x20
		::MXBehaviorTree::BehaviorTree* _behaviorTree_k__BackingField; // 0x28
		::MXBehaviorTree::Blackboard* _blackboard_k__BackingField; // 0x30
		::MXBehaviorTree::BehaviorTreeOwner* _behaviorTreeOwner_k__BackingField; // 0x38
		::System::Boolean _isPlaying_k__BackingField; // 0x40
		::System::Boolean _isStarted_k__BackingField; // 0x41

		::MXBehaviorTree::BehaviorTree* get_behaviorTree()
		{
			return (return (::MXBehaviorTree::BehaviorTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_BEHAVIORTREE_OFFSET))(nullptr);
		}

		::System::Void set_behaviorTree(::MXBehaviorTree::BehaviorTree* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::BehaviorTree*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_BEHAVIORTREE_OFFSET))(arg, nullptr);
		}

		::MXBehaviorTree::Blackboard* get_blackboard()
		{
			return (return (::MXBehaviorTree::Blackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_BLACKBOARD_OFFSET))(nullptr);
		}

		::System::Void set_blackboard(::MXBehaviorTree::Blackboard* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_BLACKBOARD_OFFSET))(arg, nullptr);
		}

		::MXBehaviorTree::BehaviorTreeOwner* get_behaviorTreeOwner()
		{
			return (return (::MXBehaviorTree::BehaviorTreeOwner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_BEHAVIORTREEOWNER_OFFSET))(nullptr);
		}

		::System::Void set_behaviorTreeOwner(::MXBehaviorTree::BehaviorTreeOwner* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::BehaviorTreeOwner*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_BEHAVIORTREEOWNER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_isPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isStarted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_GET_ISSTARTED_OFFSET))(nullptr);
		}

		::System::Void set_isStarted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_SET_ISSTARTED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Play(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::MXBehaviorTree::BehaviorTreeAsset* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::BehaviorTreeAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void PlayInternal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_PLAYINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void Build()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_BUILD_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_STOP_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREERUNNER_.CTOR_OFFSET))(nullptr);
		}

	};
}

