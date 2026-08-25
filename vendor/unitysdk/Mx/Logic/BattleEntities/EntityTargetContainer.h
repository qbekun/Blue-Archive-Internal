#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class TargetingType; }
namespace MX::Logic::Skills { class TargetCandidateRule; }

#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_BEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0x117E3E0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SET_BEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0x117E3F0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x117E400)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_TARGETDIRECTION_OFFSET UNITYSDK_OFFSET(0x117E5B0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_MAINTARGET_OFFSET UNITYSDK_OFFSET(0x117E540)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_HASTARGET_OFFSET UNITYSDK_OFFSET(0x117E820)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_HASMAINTARGET_OFFSET UNITYSDK_OFFSET(0x117E920)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_ISSELFMAINTARGET_OFFSET UNITYSDK_OFFSET(0x117E9B0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0x117EA30)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_TARGETINGTYPE_OFFSET UNITYSDK_OFFSET(0x117EA40)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SET_TARGETINGTYPE_OFFSET UNITYSDK_OFFSET(0x117EA50)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x117EA60)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x117EB40)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x117EDB0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x117EFE0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x117F0F0)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x117F270)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_UPDATE_OFFSET UNITYSDK_OFFSET(0x117F390)
#define MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_CLEAR_OFFSET UNITYSDK_OFFSET(0x117ECD0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EntityTargetContainer_TypeDefinitionIndex = 13245;

	class EntityTargetContainer : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* owner; // 0x10
		::MX::Logic::BattleEntities::BehaviorType* _BehaviorType_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::SkillSlot* skillSlot; // 0x1C
		::UnityEngine::Vector2* targetPosition; // 0x20
		::UnityEngine::Vector2* targetDirection; // 0x28
		Il2CppObject* targets; // 0x30
		::MX::Logic::Skills::TargetingType* _TargetingType_k__BackingField; // 0x38
		::MX::Logic::Skills::TargetCandidateRule* targetCandidateRule; // 0x40

		::MX::Logic::BattleEntities::BehaviorType* get_BehaviorType()
		{
			return ((::MX::Logic::BattleEntities::BehaviorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_BEHAVIORTYPE_OFFSET))(nullptr);
		}

		::System::Void set_BehaviorType(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SET_BEHAVIORTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_TargetPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_TargetDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_TARGETDIRECTION_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_MainTarget()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_MAINTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_HasTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_HASTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_HasMainTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_HASMAINTARGET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSelfMainTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_ISSELFMAINTARGET_OFFSET))(nullptr);
		}

		Il2CppObject* get_Targets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_TARGETS_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::TargetingType* get_TargetingType()
		{
			return ((::MX::Logic::Skills::TargetingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_GET_TARGETINGTYPE_OFFSET))(nullptr);
		}

		::System::Void set_TargetingType(::MX::Logic::Skills::TargetingType* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::TargetingType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SET_TARGETINGTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetTarget(::MX::Logic::BattleEntities::BehaviorType* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::MX::Logic::Skills::TargetCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetTarget(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::TargetCandidateRule* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::TargetCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetTarget(::MX::Logic::BattleEntities::BehaviorType* arg, Il2CppObject* arg2, ::MX::Logic::Skills::TargetCandidateRule* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, Il2CppObject*, ::MX::Logic::Skills::TargetCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetTarget(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, Il2CppObject* arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::MX::Logic::Skills::TargetCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetTarget(::MX::Logic::BattleEntities::BehaviorType* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, Il2CppObject* arg4, ::MX::Logic::Skills::TargetingType* arg5, ::MX::Logic::Skills::TargetCandidateRule* arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, Il2CppObject*, ::MX::Logic::Skills::TargetingType*, ::MX::Logic::Skills::TargetCandidateRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_SETTARGET_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENTITYTARGETCONTAINER_CLEAR_OFFSET))(nullptr);
		}

	};
}

