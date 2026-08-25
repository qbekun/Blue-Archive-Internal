#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Data { class DamageOverTimeRemoveCondition; }
namespace FlatData { class EndCondition; }

#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_REMAINDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ISREMOVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ISREMOVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ISDISPELLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ISDISPELLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_DISPELLERENTITYID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_DISPELLERENTITYID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ISEXPIREDBYDUPLICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ISEXPIREDBYDUPLICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_OWNERCHARACTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_OWNERBATTLEENTITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_ADD_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_REMOVE_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SETEXPIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SETREMOVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SETCOROUTINESTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GETEXTENDEDDURATIONBYSTAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_STARTENDCONDITIONCOROUTINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_EXPIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_EXPIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_CODURATIONHPRATECHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_CODURATIONCHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_CORELOADCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COAMMOCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COAMMOHITCHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COHITCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COUSEEXSKILLCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COUSEEXSKILLOVERLOADEDCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COUSETARGETSLOTSKILLCOUNTCHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1__.CTOR_B__49_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1__.CTOR_B__49_1_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1__.CTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ExpirableObjectHolder`1_TypeDefinitionIndex = 13287;

	class ExpirableObjectHolder`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Value_k__BackingField; // 0x0
		::System::Int32 _Elapsed_k__BackingField; // 0x0
		::System::Int32 _DurationFrame_k__BackingField; // 0x0
		::System::Boolean _IsExpired_k__BackingField; // 0x0
		::System::Boolean _IsRemoved_k__BackingField; // 0x0
		::System::Boolean _IsDispelled_k__BackingField; // 0x0
		::MX::Logic::BattleEntities::EntityId* _DispellerEntityId_k__BackingField; // 0x0
		::System::Boolean _IsExpiredByDuplicate_k__BackingField; // 0x0
		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* _OwnerCharacter_k__BackingField; // 0x0
		::MX::Logic::BattleEntities::BattleEntity* _OwnerBattleEntity_k__BackingField; // 0x0
		::System::Collections::IEnumerator* EndConditionChecker; // 0x0
		::System::Collections::IEnumerator* RemoveConditionChecker; // 0x0
		Il2CppObject* OnCoroutineStopList; // 0x0
		::System::EventHandler* OnExpired; // 0x0

		Il2CppObject* get_Value()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Elapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Void set_Elapsed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Void set_DurationFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_DURATIONFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RemainDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_REMAINDURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ISEXPIRED_OFFSET))(nullptr);
		}

		::System::Void set_IsExpired(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ISEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ISREMOVED_OFFSET))(nullptr);
		}

		::System::Void set_IsRemoved(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ISREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDispelled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ISDISPELLED_OFFSET))(nullptr);
		}

		::System::Void set_IsDispelled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ISDISPELLED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_DispellerEntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_DISPELLERENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_DispellerEntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_DISPELLERENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsExpiredByDuplicate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_ISEXPIREDBYDUPLICATE_OFFSET))(nullptr);
		}

		::System::Void set_IsExpiredByDuplicate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SET_ISEXPIREDBYDUPLICATE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* get_OwnerCharacter()
		{
			return ((::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_OWNERCHARACTER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_OwnerBattleEntity()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GET_OWNERBATTLEENTITY_OFFSET))(nullptr);
		}

		::System::Void add_OnExpired(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_ADD_ONEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnExpired(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_REMOVE_ONEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void SetExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SETEXPIRED_OFFSET))(nullptr);
		}

		::System::Void SetRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SETREMOVED_OFFSET))(nullptr);
		}

		::System::Void SetCoroutineStop(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_SETCOROUTINESTOP_OFFSET))(arg, nullptr);
		}

		::System::Void StopCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_STOPCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::Data::DamageOverTimeRemoveCondition* arg4, ::System::Int32 arg5)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Data::DamageOverTimeRemoveCondition*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::FlatData::EndCondition* arg2, ::System::Int32 arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(Il2CppObject*, ::FlatData::EndCondition*, ::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::FlatData::EndCondition* arg2, ::System::String* str, ::System::String* str2, ::FlatData::EndCondition* arg3, ::System::String* str3, ::System::String* str4, ::MX::Logic::BattleEntities::BattleEntity* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(Il2CppObject*, ::FlatData::EndCondition*, ::System::String*, ::System::String*, ::FlatData::EndCondition*, ::System::String*, ::System::String*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_.CTOR_OFFSET))(arg, arg2, str, str2, arg3, str3, str4, arg4, arg5, nullptr);
		}

		::System::Int32 GetExtendedDurationByStat(Il2CppObject* arg, ::System::Int32 arg2)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GETEXTENDEDDURATIONBYSTAT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* StartEndConditionCoroutine(Il2CppObject* arg, ::System::Boolean arg2, ::System::Action* arg3, ::FlatData::EndCondition* arg4, ::System::String* str, ::System::String* str2, ::System::Action* arg5, Il2CppObject* arg6)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::System::Boolean, ::System::Action*, ::FlatData::EndCondition*, ::System::String*, ::System::String*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_STARTENDCONDITIONCOROUTINE_OFFSET))(arg, arg2, arg3, arg4, str, str2, arg5, arg6, nullptr);
		}

		::System::Void Expire(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_EXPIRE_OFFSET))(arg, nullptr);
		}

		::System::Void Expire(::MX::Logic::BattleEntities::EntityId* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_EXPIRE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoDurationHpRateCheck(::System::Int32 arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::System::Int32 arg3, ::System::Boolean arg4, ::System::Action* arg5, ::System::Action* arg6)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::MX::Logic::BattleEntities::BattleEntity*, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_CODURATIONHPRATECHECK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Collections::IEnumerator* CoDurationCheck(::System::Int32 arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_CODURATIONCHECK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoReloadCountCheck(::System::Int32 arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_CORELOADCOUNTCHECK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoAmmoCountCheck(::System::Int32 arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COAMMOCOUNTCHECK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoAmmoHitCheck(::System::Int32 arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COAMMOHITCHECK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoHitCountCheck(::System::Int32 arg, Il2CppObject* arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, Il2CppObject*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COHITCOUNTCHECK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoUseExSkillCountCheck(::System::Int32 arg, ::System::Action* arg2, ::System::Action* arg3, Il2CppObject* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COUSEEXSKILLCOUNTCHECK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoUseExSkillOverloadedCountCheck(::System::Int32 arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COUSEEXSKILLOVERLOADEDCOUNTCHECK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoUseTargetSlotSkillCountCheck(::System::Int32 arg, Il2CppObject* arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, Il2CppObject*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_COUSETARGETSLOTSKILLCOUNTCHECK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _.ctor_b__49_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1__.CTOR_B__49_0_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__49_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1__.CTOR_B__49_1_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__51_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EXPIRABLEOBJECTHOLDER`1__.CTOR_B__51_0_OFFSET))(nullptr);
		}

	};
}

