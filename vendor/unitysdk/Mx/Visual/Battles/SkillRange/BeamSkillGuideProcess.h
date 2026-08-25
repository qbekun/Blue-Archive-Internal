#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class BeamEntityDAO; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace UnityEngine { class Vector3; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Visual::Battles::SkillRange { class ISkillGuide; }

#define MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D963E0)
#define MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS_GETBODY2D_OFFSET UNITYSDK_OFFSET(0x1D969A0)
#define MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS__GETBODY2D_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D971A0)
#define MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS__GETTARGETLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0x1D971D0)
#define MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D97350)
#define MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D97390)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int BeamSkillGuideProcess_TypeDefinitionIndex = 20373;

	class BeamSkillGuideProcess : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::BeamEntityDAO* beamEntityData; // 0x140
		::System::Single obbHeight; // 0x148
		::MX::Core::Physics2D::Bodies::Body2D* body2d; // 0x150

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetBody2D(::UnityEngine::Vector3* arg)
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS_GETBODY2D_OFFSET))(arg, nullptr);
		}

		::System::Int32 _GetBody2D_b__5_0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS__GETBODY2D_B__5_0_OFFSET))(nullptr);
		}

		::System::Int32 _GetTargetList_b__4_0(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS__GETTARGETLIST_B__4_0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::BeamEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::BeamEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_BEAMSKILLGUIDEPROCESS_SETTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

	};
}

