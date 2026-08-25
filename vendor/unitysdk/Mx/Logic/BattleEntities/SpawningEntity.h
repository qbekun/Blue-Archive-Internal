#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class HitCheckCoupling; }

#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETSKILLCOMMANDSELECTEDTARGET_OFFSET UNITYSDK_OFFSET(0x11BA7D0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x11BA7E0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x11BA7F0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x11BA880)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_EXECUTER_OFFSET UNITYSDK_OFFSET(0x11BA8A0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_ADD_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11BA8B0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_FINDTARGETS_OFFSET UNITYSDK_OFFSET(0x11BA950)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET UNITYSDK_OFFSET(0x11BA9A0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x11BA9B0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_FINDSPAWNDIRECTION_OFFSET UNITYSDK_OFFSET(0x11BA9C0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x11BAA10)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_FINDTARGET_OFFSET UNITYSDK_OFFSET(0x11BAA20)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETPROCEDURETRIGGEREDTARGET_OFFSET UNITYSDK_OFFSET(0x11BAA70)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x11BAA80)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x11BAA90)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETHITCHECKCOUPLING_OFFSET UNITYSDK_OFFSET(0x11BAAA0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETINITIALTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11BAC60)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETPROCEDURETRIGGEREDPOSITION_OFFSET UNITYSDK_OFFSET(0x11BACA0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_REMOVE_EXPIRED_OFFSET UNITYSDK_OFFSET(0x11BACE0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_EXTRACOSTUSED_OFFSET UNITYSDK_OFFSET(0x11BAD80)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x11BAD90)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_FINDSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x11BADB0)
#define MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_EXPIRE_OFFSET UNITYSDK_OFFSET(0x11BAE00)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SpawningEntity_TypeDefinitionIndex = 13335;

	class SpawningEntity : public Il2CppObject
	{
	public:
		Il2CppObject* Expired; // 0x28
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x30
		::System::Int32 _ExtraCostUsed_k__BackingField; // 0x38
		::MX::Logic::BattleEntities::BattleEntity* _Executer_k__BackingField; // 0x40
		::System::Int32 _Elapsed_k__BackingField; // 0x48
		::System::Int32 _Duration_k__BackingField; // 0x4C
		Il2CppObject* couplingTable; // 0x50
		::MX::Logic::BattleEntities::BattleEntity* skillCommandSelectedTarget; // 0x58
		::UnityEngine::Vector2* skillCommandSelectedPosition; // 0x60

		::MX::Logic::BattleEntities::BattleEntity* GetSkillCommandSelectedTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETSKILLCOMMANDSELECTEDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void set_Elapsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::MX::Logic::BattleEntities::BattleEntity* arg6, ::UnityEngine::Vector2* arg7)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_ISEXPIRED_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Executer()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_EXECUTER_OFFSET))(nullptr);
		}

		::System::Void add_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_ADD_EXPIRED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindTargets(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_FINDTARGETS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyPositionTransformDiffByMovingArea(Il2CppObject* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_APPLYPOSITIONTRANSFORMDIFFBYMOVINGAREA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_DURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* FindSpawnDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_FINDSPAWNDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetSkillCommandSelectedPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETSKILLCOMMANDSELECTEDPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_FINDTARGET_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetProcedureTriggeredTarget(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETPROCEDURETRIGGEREDTARGET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_ELAPSED_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void Init(::MX::Logic::Battles::Battle* arg, ::UnityEngine::Vector2* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_UPDATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::HitCheckCoupling* GetHitCheckCoupling(::System::Int32 arg, ::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::HitCheckCoupling*(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETHITCHECKCOUPLING_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::Vector2* GetInitialTargetPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETINITIALTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetProcedureTriggeredPosition(::MX::Logic::Data::SkillEntityValue* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GETPROCEDURETRIGGEREDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Expired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_REMOVE_EXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraCostUsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_GET_EXTRACOSTUSED_OFFSET))(nullptr);
		}

		::System::Void OnExpired(::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_ONEXPIRED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* FindSpawnPosition(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::SkillEntityValue* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::SkillEntityValue*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_FINDSPAWNPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Expire()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_SPAWNINGENTITY_EXPIRE_OFFSET))(nullptr);
		}

	};
}

