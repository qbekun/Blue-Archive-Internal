#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Logic::Skills { class ProjectileTypes; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }
namespace MX::Logic::Data { class AreaEntityValue; }
namespace MX::Logic::Data { class AreaSpawnerValue; }
namespace MX::Logic::Data { class SkillEntitySpawnerValue; }
namespace MX::GameData::DAO::Battle { class ProjectileEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MX::GameData::DAO::Battle { class FixedFrameProjectileEntityDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }

#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1249F90)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1249FA0)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1249FB0)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONPOSITIONRANDOMOFFSETRANGE_OFFSET UNITYSDK_OFFSET(0x1249FC0)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONOFFSETDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1249FD0)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_PROJECTILETYPE_OFFSET UNITYSDK_OFFSET(0x1249FE0)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0x1249FF0)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x124A000)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x124A010)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_FIREDELAYFRAME_OFFSET UNITYSDK_OFFSET(0x124A020)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x124A030)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_FRAMETOHIT_OFFSET UNITYSDK_OFFSET(0x124A040)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_ISSTICKTOTARGETAFTERHIT_OFFSET UNITYSDK_OFFSET(0x124A050)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_ABILITIES_OFFSET UNITYSDK_OFFSET(0x124A060)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SPLASHDELAY_OFFSET UNITYSDK_OFFSET(0x124A070)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SPLASHENTITYDATA_OFFSET UNITYSDK_OFFSET(0x124A080)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SPLASHSPAWNER_OFFSET UNITYSDK_OFFSET(0x124A090)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SKILLENTITYSPAWNER_OFFSET UNITYSDK_OFFSET(0x124A0A0)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET UNITYSDK_OFFSET(0x124A0B0)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1247ED0)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1248740)
#define MX_LOGIC_DATA_PROJECTILEENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x124A140)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ProjectileEntityValue_TypeDefinitionIndex = 13974;

	class ProjectileEntityValue : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SpawnPositionTypes* _DestinationType_k__BackingField; // 0x160
		::UnityEngine::Vector2* _DestinationWorldPosition_k__BackingField; // 0x164
		::UnityEngine::Vector2* _DestinationPositionOffset_k__BackingField; // 0x16C
		::System::Int32 _DestinationPositionRandomOffsetRange_k__BackingField; // 0x174
		::MX::Logic::Skills::SpawnDirectionTypes* _DestinationOffsetDirectionType_k__BackingField; // 0x178
		::MX::Logic::Skills::ProjectileTypes* _ProjectileType_k__BackingField; // 0x17C
		::MX::Core::Physics2D::Shapes::ShapeType* _ShapeType_k__BackingField; // 0x180
		::System::Single _Width_k__BackingField; // 0x184
		::System::Single _Height_k__BackingField; // 0x188
		::System::Int32 _FireDelayFrame_k__BackingField; // 0x18C
		::System::Single _Speed_k__BackingField; // 0x190
		::System::Int64 _FrameToHit_k__BackingField; // 0x198
		::System::Boolean _IsStickToTargetAfterHit_k__BackingField; // 0x1A0
		Il2CppObject* _Abilities_k__BackingField; // 0x1A8
		::System::Int32 _SplashDelay_k__BackingField; // 0x1B0
		::MX::Logic::Data::AreaEntityValue* _SplashEntityData_k__BackingField; // 0x1B8
		::MX::Logic::Data::AreaSpawnerValue* _SplashSpawner_k__BackingField; // 0x1C0
		::MX::Logic::Data::SkillEntitySpawnerValue* _SkillEntitySpawner_k__BackingField; // 0x1C8

		::MX::Logic::Skills::SpawnPositionTypes* get_DestinationType()
		{
			return ((::MX::Logic::Skills::SpawnPositionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_DestinationWorldPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONWORLDPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_DestinationPositionOffset()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONPOSITIONOFFSET_OFFSET))(nullptr);
		}

		::System::Int32 get_DestinationPositionRandomOffsetRange()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONPOSITIONRANDOMOFFSETRANGE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_DestinationOffsetDirectionType()
		{
			return ((::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_DESTINATIONOFFSETDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ProjectileTypes* get_ProjectileType()
		{
			return ((::MX::Logic::Skills::ProjectileTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_PROJECTILETYPE_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::ShapeType* get_ShapeType()
		{
			return ((::MX::Core::Physics2D::Shapes::ShapeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SHAPETYPE_OFFSET))(nullptr);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_FireDelayFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_FIREDELAYFRAME_OFFSET))(nullptr);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Int64 get_FrameToHit()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_FRAMETOHIT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStickToTargetAfterHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_ISSTICKTOTARGETAFTERHIT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Abilities()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_ABILITIES_OFFSET))(nullptr);
		}

		::System::Int32 get_SplashDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SPLASHDELAY_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AreaEntityValue* get_SplashEntityData()
		{
			return ((::MX::Logic::Data::AreaEntityValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SPLASHENTITYDATA_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AreaSpawnerValue* get_SplashSpawner()
		{
			return ((::MX::Logic::Data::AreaSpawnerValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SPLASHSPAWNER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntitySpawnerValue* get_SkillEntitySpawner()
		{
			return ((::MX::Logic::Data::SkillEntitySpawnerValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_GET_SKILLENTITYSPAWNER_OFFSET))(nullptr);
		}

		::System::Void SetDamageDistributeRate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_SETDAMAGEDISTRIBUTERATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::FixedFrameProjectileEntityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::System::Int32 arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FixedFrameProjectileEntityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillEntityDAO* arg, Il2CppObject* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Int32 arg4, ::MX::Logic::Skills::TargetCandidateRule* arg5, ::MX::Logic::Skills::TargetSortRule* arg6)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillEntityDAO*, Il2CppObject*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROJECTILEENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};
}

