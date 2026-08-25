#pragma once
#include "../unitysdk.h"

class Base;
namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class UCCondition; }
namespace MXUnderCover { class UCStage; }
class CoroutineAsyncOperation;
namespace UnityEngine { class Collider; }

#define MXUNDERCOVER_UCTRIGGER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xD95780)
#define MXUNDERCOVER_UCTRIGGER_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xD95790)
#define MXUNDERCOVER_UCTRIGGER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xD957A0)
#define MXUNDERCOVER_UCTRIGGER_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xD957B0)
#define MXUNDERCOVER_UCTRIGGER_GET_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0xD957C0)
#define MXUNDERCOVER_UCTRIGGER_SET_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0xD957D0)
#define MXUNDERCOVER_UCTRIGGER_GET_REACHEDMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD93EF0)
#define MXUNDERCOVER_UCTRIGGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD93C00)
#define MXUNDERCOVER_UCTRIGGER_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD94DB0)
#define MXUNDERCOVER_UCTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD93690)
#define MXUNDERCOVER_UCTRIGGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD957E0)
#define MXUNDERCOVER_UCTRIGGER_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xD93A50)
#define MXUNDERCOVER_UCTRIGGER_INVOKE_OFFSET UNITYSDK_OFFSET(0xD95810)
#define MXUNDERCOVER_UCTRIGGER_INTERNELINVOKE_OFFSET UNITYSDK_OFFSET(0xD94310)
#define MXUNDERCOVER_UCTRIGGER_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0xD93710)
#define MXUNDERCOVER_UCTRIGGER_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD94B80)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCTrigger_TypeDefinitionIndex = 9747;

	class UCTrigger : public Il2CppObject
	{
	public:
		Base* RepeatType; // 0x18
		::MXUnderCover::UCEntity* TriggerEntity; // 0x20
		::System::Int32 TriggerCount; // 0x28
		::MXUnderCover::UCCondition* Condition; // 0x30
		::MXUnderCover::UCEntity* _Owner_k__BackingField; // 0x38
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x40
		Il2CppObject* _OnTrigger_k__BackingField; // 0x48

		::MXUnderCover::UCEntity* get_Owner()
		{
			return ((::MXUnderCover::UCEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void set_Owner(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_SET_STAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OnTrigger()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_GET_ONTRIGGER_OFFSET))(nullptr);
		}

		::System::Void set_OnTrigger(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_SET_ONTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ReachedMaxCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_GET_REACHEDMAXCOUNT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_CHECKCONDITION_OFFSET))(arg, nullptr);
		}

		CoroutineAsyncOperation* Invoke()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_INVOKE_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* InternelInvoke()
		{
			return ((CoroutineAsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_INTERNELINVOKE_OFFSET))(nullptr);
		}

		::System::Boolean TryGetComponent(::UnityEngine::Collider* arg, ::MXUnderCover::UCEntity&* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::MXUnderCover::UCEntity&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_TRYGETCOMPONENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetComponent(::UnityEngine::Collider* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_TRYGETCOMPONENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

