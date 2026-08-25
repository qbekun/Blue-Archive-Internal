#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ExtraHitTargetProjectileEntityDAO; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Battles { class Battle; }
namespace UnityEngine { class Vector3; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace UnityEngine { class Vector2; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class ISkillGuide; }

#define MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_FINDEXTRAHITTARGETS_OFFSET UNITYSDK_OFFSET(0x1D94720)
#define MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_GETEXTRAHITBODY2D_OFFSET UNITYSDK_OFFSET(0x1D94BE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D95000)
#define MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_SIMULATION_OFFSET UNITYSDK_OFFSET(0x1D951C0)
#define MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D95480)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int ExtraHitTargetProjectileSkillTargetProcess_TypeDefinitionIndex = 20371;

	class ExtraHitTargetProjectileSkillTargetProcess : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO* extraHitEntityData; // 0x150
		::MX::Logic::Skills::TargetSideId* extraHitCheckTargetSide; // 0x158
		::MX::Logic::Skills::TargetEntityType* extraHitCheckTargetEntityType; // 0x15C
		::MX::Logic::Skills::TargetCandidateRule* extraHitTargetRule; // 0x160

		Il2CppObject* FindExtraHitTargets(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_FINDEXTRAHITTARGETS_OFFSET))(arg, arg, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetExtraHitBody2D(::UnityEngine::Vector2* arg)
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_GETEXTRAHITBODY2D_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Simulation(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Boolean arg, ::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Boolean, ::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_SIMULATION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_EXTRAHITTARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

	};
}

