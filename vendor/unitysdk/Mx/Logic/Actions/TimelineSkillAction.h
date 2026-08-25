#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillEntitySpawner; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::GameData::DAO::Battle { class RandomProjectileEntityDAO; }
namespace MX::GameData::DAO::Battle { class AreaTimelineDAO; }
namespace MX::GameData::DAO::Battle { class ExSkillEntityTimelineDAO; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::GameData::DAO::Battle { class TimelineSkillActionDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::GameData::DAO::Battle { class SummonGroupDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerTimelineDAO; }

#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GETENTITIESTOSPAWN_OFFSET UNITYSDK_OFFSET(0x10F99B0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_SKILLENTITYSPAWNER_OFFSET UNITYSDK_OFFSET(0x10F99C0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_INVOKERDIRECTIONWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x10F99D0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x10F99E0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x10F9F40)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_G__ADDTOENTITIESTOSPAWN|31_1_OFFSET UNITYSDK_OFFSET(0x10FA0A0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATEINVOKERDIRECTIONEVERYFRAME_OFFSET UNITYSDK_OFFSET(0x10FA3D0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ISWEAPONUNMOUNTUSESKILL_OFFSET UNITYSDK_OFFSET(0x10FA3E0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_4_OFFSET UNITYSDK_OFFSET(0x10FA3F0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_SPAWNSKILLENTITY_OFFSET UNITYSDK_OFFSET(0x10F9B20)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_APPLYSPAWNPOSITIONTRANSFORMDIFF_OFFSET UNITYSDK_OFFSET(0x10FA410)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_ENTER_OFFSET UNITYSDK_OFFSET(0x10FA450)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_5_OFFSET UNITYSDK_OFFSET(0x10FA810)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATINGTURRETFRAMEMAX_OFFSET UNITYSDK_OFFSET(0x10FA830)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_SET_INVOKERDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x10FA840)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_SET_INVOKERDIRECTIONWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x10FA850)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATINGTURRETFRAMEMIN_OFFSET UNITYSDK_OFFSET(0x10FA860)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_INVOKERDIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x10FA870)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_0_OFFSET UNITYSDK_OFFSET(0x10FA880)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATETURRETONLY_OFFSET UNITYSDK_OFFSET(0x10FA8B0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10FA8C0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATETURRETDIRECTIONTARGETTRACKING_OFFSET UNITYSDK_OFFSET(0x10FAAA0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_3_OFFSET UNITYSDK_OFFSET(0x10FAAB0)
#define MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_2_OFFSET UNITYSDK_OFFSET(0x10FAB50)

namespace MX::Logic::Actions
{
	inline static constexpr unsigned int TimelineSkillAction_TypeDefinitionIndex = 13030;

	class TimelineSkillAction : public Il2CppObject
	{
	public:
		::System::Boolean _RotateTurretOnly_k__BackingField; // 0x1A8
		::System::Boolean _RotateTurretDirectionTargetTracking_k__BackingField; // 0x1A9
		::System::Int32 _RotatingTurretFrameMin_k__BackingField; // 0x1AC
		::System::Int32 _RotatingTurretFrameMax_k__BackingField; // 0x1B0
		::System::Boolean _RotateInvokerDirectionEveryFrame_k__BackingField; // 0x1B4
		::MX::Logic::Skills::SkillEntitySpawner* _SkillEntitySpawner_k__BackingField; // 0x1B8
		::System::Boolean _IsWeaponUnmountUseSkill_k__BackingField; // 0x1C0
		::MX::Logic::Skills::SpawnDirectionTypes* _InvokerDirectionType_k__BackingField; // 0x1C4
		::UnityEngine::Vector2* _InvokerDirectionWorldPosition_k__BackingField; // 0x1C8
		Il2CppObject* entitiesToSpawn; // 0x1D0
		::System::Int32 durationOriginal; // 0x1D8

		Il2CppObject* GetEntitiesToSpawn()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GETENTITIESTOSPAWN_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillEntitySpawner* get_SkillEntitySpawner()
		{
			return ((::MX::Logic::Skills::SkillEntitySpawner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_SKILLENTITYSPAWNER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_InvokerDirectionWorldPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_INVOKERDIRECTIONWORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Interrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_INTERRUPT_OFFSET))(nullptr);
		}

		::System::Void _.ctor_g__AddToEntitiesToSpawn|31_1(::MX::GameData::DAO::Battle::SkillEntityDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_G__ADDTOENTITIESTOSPAWN|31_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RotateInvokerDirectionEveryFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATEINVOKERDIRECTIONEVERYFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWeaponUnmountUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ISWEAPONUNMOUNTUSESKILL_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__31_4(::MX::GameData::DAO::Battle::RandomProjectileEntityDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::RandomProjectileEntityDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_4_OFFSET))(arg, nullptr);
		}

		::System::Void SpawnSkillEntity(::MX::Logic::Battles::Battle* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_SPAWNSKILLENTITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplySpawnPositionTransformDiff(Il2CppObject* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_APPLYSPAWNPOSITIONTRANSFORMDIFF_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Enter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_ENTER_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__31_5(::MX::GameData::DAO::Battle::AreaTimelineDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::AreaTimelineDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_5_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RotatingTurretFrameMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATINGTURRETFRAMEMAX_OFFSET))(nullptr);
		}

		::System::Void set_InvokerDirectionType(::MX::Logic::Skills::SpawnDirectionTypes* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::SpawnDirectionTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_SET_INVOKERDIRECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_InvokerDirectionWorldPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_SET_INVOKERDIRECTIONWORLDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RotatingTurretFrameMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATINGTURRETFRAMEMIN_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SpawnDirectionTypes* get_InvokerDirectionType()
		{
			return ((::MX::Logic::Skills::SpawnDirectionTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_INVOKERDIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__31_0(::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RotateTurretOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATETURRETONLY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BehaviorType* arg2, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO* arg3, ::MX::Logic::Skills::SkillSpecification* arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BehaviorType*, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean get_RotateTurretDirectionTargetTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION_GET_ROTATETURRETDIRECTIONTARGETTRACKING_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__31_3(::MX::GameData::DAO::Battle::SummonGroupDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SummonGroupDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_3_OFFSET))(arg, nullptr);
		}

		::System::Void _.ctor_b__31_2(::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_ACTIONS_TIMELINESKILLACTION__.CTOR_B__31_2_OFFSET))(arg, nullptr);
		}

	};
}

