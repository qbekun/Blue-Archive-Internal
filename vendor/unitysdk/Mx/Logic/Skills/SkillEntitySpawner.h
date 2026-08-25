#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class SkillToTargetDistributeType; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::GameData::DAO::Battle { class TimelineSkillActionDAO; }
namespace MX::GameData::DAO::Battle { class NormalAttackSkillActionDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class HitCheckCoupling; }

#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x13E5A70)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_EXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x13E5A80)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_EXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x13E5A90)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x13E5AA0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_DISTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x13E5AB0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYVALUES_OFFSET UNITYSDK_OFFSET(0x13E5AC0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x13E5AD0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_SKILLENTITYTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x13E5AE0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYPOSITIONTABLE_OFFSET UNITYSDK_OFFSET(0x13E5AF0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_SKILLENTITYPOSITIONTABLE_OFFSET UNITYSDK_OFFSET(0x13E5B00)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYDIRECTIONTABLE_OFFSET UNITYSDK_OFFSET(0x13E5B10)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_SKILLENTITYDIRECTIONTABLE_OFFSET UNITYSDK_OFFSET(0x13E5B20)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYDIRECTIONOVERRIDETABLE_OFFSET UNITYSDK_OFFSET(0x13E5B30)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_SKILLENTITYDIRECTIONOVERRIDETABLE_OFFSET UNITYSDK_OFFSET(0x13E5B40)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x13E5B50)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E5CA0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E6560)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E6CE0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E63D0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSKILLCOMMANDSELECTEDTARGETANDPOSITION_OFFSET UNITYSDK_OFFSET(0x13E6F20)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_APPLYSKILLCOMMANDINFO_OFFSET UNITYSDK_OFFSET(0x13E7140)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETEXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x13E7400)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SPAWNSKILLENTITY_OFFSET UNITYSDK_OFFSET(0x13E7410)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x13E79E0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x13E7970)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x13E7B50)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x13E7C00)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x13E8190)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x13E8370)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x13E8740)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x13E8B10)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x13E8D60)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_APPLYPOSITIONTRANSFORMDIFF_OFFSET UNITYSDK_OFFSET(0x13E8FF0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x13E9390)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x13E95C0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETSKILLCOMMANDSELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x13E8030)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x13E80A0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETPROCEDURETRIGGEREDTARGET_OFFSET UNITYSDK_OFFSET(0x13E8140)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETPROCEDURETRIGGEREDPOSITION_OFFSET UNITYSDK_OFFSET(0x13E8150)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x13E9790)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x13EA5B0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x13EAE70)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x13EB810)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SPAWNSKILLENTITY_OFFSET UNITYSDK_OFFSET(0x13E78E0)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_INITTARGETTABLE_OFFSET UNITYSDK_OFFSET(0x13EA480)
#define MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETHITCHECKCOUPLING_OFFSET UNITYSDK_OFFSET(0x13EB8B0)

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int SkillEntitySpawner_TypeDefinitionIndex = 14588;

	class SkillEntitySpawner : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x10
		::System::Int32 _ExtraCostUsed_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* _Executer_k__BackingField; // 0x20
		::MX::Logic::Skills::SkillToTargetDistributeType* _DistributeType_k__BackingField; // 0x28
		Il2CppObject* _SkillEntityValues_k__BackingField; // 0x30
		Il2CppObject* _skillEntityTargetTable_k__BackingField; // 0x38
		Il2CppObject* _skillEntityPositionTable_k__BackingField; // 0x40
		Il2CppObject* _skillEntityDirectionTable_k__BackingField; // 0x48
		Il2CppObject* _skillEntityDirectionOverrideTable_k__BackingField; // 0x50
		::UnityEngine::Vector2* overrideInputPosition; // 0x58
		Il2CppObject* targetPositionByIndex; // 0x60
		Il2CppObject* skillCommandSelectedTargetByIndex; // 0x68
		Il2CppObject* skillCommandSelectedPositionByIndex; // 0x70
		Il2CppObject* couplingTable; // 0x78

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Int32 get_ExtraCostUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_EXTRACOSTUSED_OFFSET))(nullptr);
		}

		::System::Void set_ExtraCostUsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_EXTRACOSTUSED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_EXECUTER_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillToTargetDistributeType* get_DistributeType()
		{
			return ((::MX::Logic::Skills::SkillToTargetDistributeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_DISTRIBUTETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SkillEntityValues()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYVALUES_OFFSET))(nullptr);
		}

		Il2CppObject* get_skillEntityTargetTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYTARGETTABLE_OFFSET))(nullptr);
		}

		::System::Void set_skillEntityTargetTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_SKILLENTITYTARGETTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_skillEntityPositionTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYPOSITIONTABLE_OFFSET))(nullptr);
		}

		::System::Void set_skillEntityPositionTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_SKILLENTITYPOSITIONTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_skillEntityDirectionTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYDIRECTIONTABLE_OFFSET))(nullptr);
		}

		::System::Void set_skillEntityDirectionTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_SKILLENTITYDIRECTIONTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_skillEntityDirectionOverrideTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GET_SKILLENTITYDIRECTIONOVERRIDETABLE_OFFSET))(nullptr);
		}

		::System::Void set_skillEntityDirectionOverrideTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SET_SKILLENTITYDIRECTIONOVERRIDETABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetDirection(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO* arg2, ::MX::Logic::Skills::SkillSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Data::SkillEntityValue* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Int32 arg4, ::UnityEngine::Vector2* arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::SkillEntityValue*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::UnityEngine::Vector2*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::Skills::SkillSpecification* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSkillCommandSelectedTargetAndPosition(::MX::Logic::BattleEntities::BattleEntity* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSKILLCOMMANDSELECTEDTARGETANDPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplySkillCommandInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_APPLYSKILLCOMMANDINFO_OFFSET))(nullptr);
		}

		::System::Void SetExtraCostUsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETEXTRACOSTUSED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SpawnSkillEntity(::MX::Logic::Battles::Battle* arg, ::System::Int32 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SPAWNSKILLENTITY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDTARGET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDTARGET_OFFSET))(str, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSpawnPosition(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSPAWNPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpawnPosition(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetSpawnDirection(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSPAWNDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpawnDirection(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETSPAWNDIRECTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyPositionTransformDiff(Il2CppObject* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_APPLYPOSITIONTRANSFORMDIFF_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetInitialTargetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETINITIALTARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetInitialTargetPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETINITIALTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetSkillCommandSelectedTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETSKILLCOMMANDSELECTEDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSkillCommandSelectedPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetProcedureTriggeredTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETPROCEDURETRIGGEREDTARGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetProcedureTriggeredPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETPROCEDURETRIGGEREDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetEntityTarget(::MX::Logic::Battles::Battle* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::System::Int64, ::System::Int64, ::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETENTITYTARGET_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void SetEntityTarget(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETENTITYTARGET_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* SetEntityTarget(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SETENTITYTARGET_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetInitialTargetPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETINITIALTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SpawnSkillEntity(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2, ::System::Int32 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int64 arg6)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_SPAWNSKILLENTITY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void InitTargetTable(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_INITTARGETTABLE_OFFSET))(str, nullptr);
		}

		::MX::Logic::BattleEntities::HitCheckCoupling* GetHitCheckCoupling(::System::Int32 arg, ::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::HitCheckCoupling*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_SKILLENTITYSPAWNER_GETHITCHECKCOUPLING_OFFSET))(arg, str, nullptr);
		}

	};
}

