#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class FixedFrameProjectileEntityDAO; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace MX::Logic::Actions { class IActiveSkill; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideState; }
namespace MX::Visual::Battles::SkillRange { class ISkillGuide; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::GameData::DAO::Battle { class AreaEntityDAO; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnPositionTypes; }

#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AE50)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_SET_PROJECTILEENTITYDATA_OFFSET UNITYSDK_OFFSET(0x1D8AE90)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_3_OFFSET UNITYSDK_OFFSET(0x1D8AEB0)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D8AEE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_4_OFFSET UNITYSDK_OFFSET(0x1D8B530)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GET_OFFSETDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D8B560)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_1_OFFSET UNITYSDK_OFFSET(0x1D8B590)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_NEEDCHECKORIGINALNODETYPE_OFFSET UNITYSDK_OFFSET(0x1D8B5C0)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GETSPLASHAREABODY2D_OFFSET UNITYSDK_OFFSET(0x1D8B5F0)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_0_OFFSET UNITYSDK_OFFSET(0x1D8BAB0)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1D8BAE0)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GET_PROJECTILEENTITYDATA_OFFSET UNITYSDK_OFFSET(0x1D8BB10)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_2_OFFSET UNITYSDK_OFFSET(0x1D8BB20)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET UNITYSDK_OFFSET(0x1D8BB50)
#define MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GET_SPAWNPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D8BBB0)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int FixedFrameProjectileSkillTargetProcess_TypeDefinitionIndex = 20363;

	class FixedFrameProjectileSkillTargetProcess : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::FixedFrameProjectileEntityDAO* _ProjectileEntityData_k__BackingField; // 0x140

		::System::Void .ctor(::MX::Visual::Battles::SkillRange::SkillGuide* arg, ::MX::Logic::Actions::IActiveSkill* arg, ::MX::GameData::DAO::Battle::FixedFrameProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::MX::Logic::Actions::IActiveSkill*, ::MX::GameData::DAO::Battle::FixedFrameProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_ProjectileEntityData(::MX::GameData::DAO::Battle::FixedFrameProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FixedFrameProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_SET_PROJECTILEENTITYDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 _GetSplashAreaBody2D_b__14_3()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_3_OFFSET))(nullptr);
		}

		::System::Void SetTransform(::MX::Visual::Battles::SkillRange::SkillGuideState* arg, ::MX::Visual::Battles::SkillRange::ISkillGuide* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::MX::Visual::Battles::SkillRange::ISkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_SETTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 _GetSplashAreaBody2D_b__14_4()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_4_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_OffsetDirectionType()
		{
			return (return (::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GET_OFFSETDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 _GetSplashAreaBody2D_b__14_1()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_1_OFFSET))(nullptr);
		}

		::System::Boolean NeedCheckOriginalNodeType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_NEEDCHECKORIGINALNODETYPE_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Bodies::Body2D* GetSplashAreaBody2D(::MX::GameData::DAO::Battle::AreaEntityDAO* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::MX::Core::Physics2D::Bodies::Body2D*(*)(::MX::GameData::DAO::Battle::AreaEntityDAO*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GETSPLASHAREABODY2D_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 _GetSplashAreaBody2D_b__14_0()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_0_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_PositionOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GET_POSITIONOFFSET_OFFSET))(nullptr);
		}

		::MX::GameData::DAO::Battle::FixedFrameProjectileEntityDAO* get_ProjectileEntityData()
		{
			return (return (::MX::GameData::DAO::Battle::FixedFrameProjectileEntityDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GET_PROJECTILEENTITYDATA_OFFSET))(nullptr);
		}

		::System::Int32 _GetSplashAreaBody2D_b__14_2()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS__GETSPLASHAREABODY2D_B__14_2_OFFSET))(nullptr);
		}

		Il2CppObject* GetTargetList(::MX::Visual::Battles::SkillRange::SkillGuideState* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Visual::Battles::SkillRange::SkillGuideState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GETTARGETLIST_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::SpawnPositionTypes* get_SpawnPositionType()
		{
			return (return (::MX::Logic::Skills::SpawnPositionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_FIXEDFRAMEPROJECTILESKILLTARGETPROCESS_GET_SPAWNPOSITIONTYPE_OFFSET))(nullptr);
		}

	};
}

