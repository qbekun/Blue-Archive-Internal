#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::GameData::DAO::Battle { class BattleItemEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace UnityEngine { class Vector2; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBATTLEITEMSKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6180)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBATTLEITEMSKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1DA6330)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBATTLEITEMSKILLTARGETPROCESS__.CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1DA6D40)
#define MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBATTLEITEMSKILLTARGETPROCESS_REFRESHBODY2D_OFFSET UNITYSDK_OFFSET(0x1DA6C70)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SummonBattleItemSkillTargetProcess_TypeDefinitionIndex = 20404;

	class SummonBattleItemSkillTargetProcess : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Bodies::Body2D* Body2D; // 0x148

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::BattleItemEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::BattleItemEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBATTLEITEMSKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBATTLEITEMSKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 _.ctor_b__1_0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBATTLEITEMSKILLTARGETPROCESS__.CTOR_B__1_0_OFFSET))(nullptr);
		}

		::System::Void RefreshBody2D(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SUMMONBATTLEITEMSKILLTARGETPROCESS_REFRESHBODY2D_OFFSET))(arg, arg, nullptr);
		}

	};
}

