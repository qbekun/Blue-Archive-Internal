#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class FixedFrameNontargetProjectileEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace UnityEngine { class Vector2; }

#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D8F3F0)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FCE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS__GETBODY2D_B__3_0_OFFSET UNITYSDK_OFFSET(0x1D8FD30)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS__GETTARGETLIST_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D8FD60)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS_GETBODY2D_OFFSET UNITYSDK_OFFSET(0x1D8F8F0)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int FixedFrameNonTargetProjectileSkillTargetProcess_TypeDefinitionIndex = 20366;

	class FixedFrameNonTargetProjectileSkillTargetProcess : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO* nonTargetProjectileData; // 0x148

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 _GetBody2D_b__3_0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS__GETBODY2D_B__3_0_OFFSET))(nullptr);
		}

		::System::Int32 _GetTargetList_b__2_0(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS__GETTARGETLIST_B__2_0_OFFSET))(arg, arg, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetBody2D(::UnityEngine::Vector2* arg)
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMENONTARGETPROJECTILESKILLTARGETPROCESS_GETBODY2D_OFFSET))(arg, nullptr);
		}

	};
}

