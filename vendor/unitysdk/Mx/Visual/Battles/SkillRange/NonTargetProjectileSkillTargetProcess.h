#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class NontargetProjectileEntityDAO; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace UnityEngine { class Vector2; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }

#define MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS__GETBODY2D_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D958F0)
#define MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS__GETTARGETLIST_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D95920)
#define MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS_GETBODY2D_OFFSET UNITYSDK_OFFSET(0x1D95AA0)
#define MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D95E90)
#define MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D95EE0)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int NonTargetProjectileSkillTargetProcess_TypeDefinitionIndex = 20372;

	class NonTargetProjectileSkillTargetProcess : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO* nonTargetProjectileData; // 0x148

		::System::Int32 _GetBody2D_b__3_0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS__GETBODY2D_B__3_0_OFFSET))(nullptr);
		}

		::System::Int32 _GetTargetList_b__2_0(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS__GETTARGETLIST_B__2_0_OFFSET))(arg, arg, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetBody2D(::UnityEngine::Vector2* arg)
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS_GETBODY2D_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_NONTARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

	};
}

