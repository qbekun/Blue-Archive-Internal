#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ProjectileEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class ISkillGuide; }
namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::GameData::DAO::Battle { class AreaEntityDAO; }

#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_3_OFFSET UNITYSDK_OFFSET(0x1D90E00)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D90E30)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GET_PROJECTILEENTITYDATA_OFFSET UNITYSDK_OFFSET(0x1D90E70)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GET_OFFSETDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D90E80)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_SET_PROJECTILEENTITYDATA_OFFSET UNITYSDK_OFFSET(0x1D90EB0)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D90ED0)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_1_OFFSET UNITYSDK_OFFSET(0x1D916B0)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_0_OFFSET UNITYSDK_OFFSET(0x1D916E0)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_4_OFFSET UNITYSDK_OFFSET(0x1D91710)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GET_SPAWNPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D91740)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D91770)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1D917D0)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GETSPLASHAREABODY2D_OFFSET UNITYSDK_OFFSET(0x1D91800)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_NEEDCHECKORIGINALNODETYPE_OFFSET UNITYSDK_OFFSET(0x1D91CC0)
#define MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_2_OFFSET UNITYSDK_OFFSET(0x1D91D10)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int ProjectileSkillTargetProcess_TypeDefinitionIndex = 20369;

	class ProjectileSkillTargetProcess : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::ProjectileEntityDAO* _ProjectileEntityData_k__BackingField; // 0x140

		::System::Int32 _GetSplashAreaBody2D_b__14_3()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_3_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::ProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::ProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::GameData::DAO::Battle::ProjectileEntityDAO* get_ProjectileEntityData()
		{
			return (return (::MX::GameData::DAO::Battle::ProjectileEntityDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GET_PROJECTILEENTITYDATA_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_OffsetDirectionType()
		{
			return (return (::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GET_OFFSETDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ProjectileEntityData(::MX::GameData::DAO::Battle::ProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_SET_PROJECTILEENTITYDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_SETTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 _GetSplashAreaBody2D_b__14_1()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_1_OFFSET))(nullptr);
		}

		::System::Int32 _GetSplashAreaBody2D_b__14_0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_0_OFFSET))(nullptr);
		}

		::System::Int32 _GetSplashAreaBody2D_b__14_4()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_4_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnPositionTypes* get_SpawnPositionType()
		{
			return (return (::MX::Logic::Skills::SpawnPositionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GET_SPAWNPOSITIONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_PositionOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GET_POSITIONOFFSET_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetSplashAreaBody2D(::MX::GameData::DAO::Battle::AreaEntityDAO* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::MX::GameData::DAO::Battle::AreaEntityDAO*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_GETSPLASHAREABODY2D_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean NeedCheckOriginalNodeType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS_NEEDCHECKORIGINALNODETYPE_OFFSET))(nullptr);
		}

		::System::Int32 _GetSplashAreaBody2D_b__14_2()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_PROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_2_OFFSET))(nullptr);
		}

	};
}

