#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class ManualSkillProcessor; }
namespace MX::Logic::Battles { class O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39; }
namespace MX::Logic::Battles { class CarrierSkillCardManager; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Logic::Battles { class Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Campaign { class SkillCardHand; }
namespace MX::Logic::Skills { class TargetFindRule; }
namespace MX::Data::Excel { class EventContentBuffExcel; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_PLAYERGROUP_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1399B60)
#define MX_LOGIC_BATTLES_PLAYERGROUP_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1399B70)
#define MX_LOGIC_BATTLES_PLAYERGROUP_GET_PLAYERSKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x1399B80)
#define MX_LOGIC_BATTLES_PLAYERGROUP_SET_PLAYERSKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x1399B90)
#define MX_LOGIC_BATTLES_PLAYERGROUP_GET_CARRIERSKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x1399BB0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_SET_CARRIERSKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x1399BC0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_GET_HEXABUFFS_OFFSET UNITYSDK_OFFSET(0x1399BE0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1399BF0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_CREATESKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x1399EF0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_CREATESKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x1399FE0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_CREATECARRIERSKILLMANAGER_OFFSET UNITYSDK_OFFSET(0x1399E20)
#define MX_LOGIC_BATTLES_PLAYERGROUP_REGISTERSKILLACTOR_OFFSET UNITYSDK_OFFSET(0x139A070)
#define MX_LOGIC_BATTLES_PLAYERGROUP_INITSKILLCARD_OFFSET UNITYSDK_OFFSET(0x139A0F0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_INITSKILLCARD_OFFSET UNITYSDK_OFFSET(0x139A740)
#define MX_LOGIC_BATTLES_PLAYERGROUP_INITSUPPORTERS_OFFSET UNITYSDK_OFFSET(0x139ABF0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_ADDSUPPORTER_OFFSET UNITYSDK_OFFSET(0x139AC40)
#define MX_LOGIC_BATTLES_PLAYERGROUP_CANUSEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x139AD50)
#define MX_LOGIC_BATTLES_PLAYERGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x139AF50)
#define MX_LOGIC_BATTLES_PLAYERGROUP_UPDATEPASSIVE_OFFSET UNITYSDK_OFFSET(0x139B1F0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_INITPASSIVE_OFFSET UNITYSDK_OFFSET(0x139B240)
#define MX_LOGIC_BATTLES_PLAYERGROUP_ENABLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x139B290)
#define MX_LOGIC_BATTLES_PLAYERGROUP_DISABLEPASSIVE_OFFSET UNITYSDK_OFFSET(0x139B2E0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_UPDATECARRIERSUPPORTER_OFFSET UNITYSDK_OFFSET(0x139AFB0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_REVIVE_OFFSET UNITYSDK_OFFSET(0x139B330)
#define MX_LOGIC_BATTLES_PLAYERGROUP_INITGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x139B4A0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_INITCONQUESTGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x139B990)
#define MX_LOGIC_BATTLES_PLAYERGROUP_INITHEXABUFF_OFFSET UNITYSDK_OFFSET(0x139BBD0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_INITEVENTBUFF_OFFSET UNITYSDK_OFFSET(0x139C040)
#define MX_LOGIC_BATTLES_PLAYERGROUP_CREATETARGETFINDRULE_OFFSET UNITYSDK_OFFSET(0x139C2B0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_GETENUMVALUEARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_PLAYERGROUP_APPLYGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x139C840)
#define MX_LOGIC_BATTLES_PLAYERGROUP_APPLYGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x139CB20)
#define MX_LOGIC_BATTLES_PLAYERGROUP_APPLYHEXABUFF_OFFSET UNITYSDK_OFFSET(0x139CB40)
#define MX_LOGIC_BATTLES_PLAYERGROUP_APPLYHEXABUFF_OFFSET UNITYSDK_OFFSET(0x139CE20)
#define MX_LOGIC_BATTLES_PLAYERGROUP_APPLYEVENTBUFF_OFFSET UNITYSDK_OFFSET(0x139CE40)
#define MX_LOGIC_BATTLES_PLAYERGROUP_FINDCARRIERENTITY_OFFSET UNITYSDK_OFFSET(0x139CEA0)
#define MX_LOGIC_BATTLES_PLAYERGROUP_CONTAINSCARRIERSKILLACTOR_OFFSET UNITYSDK_OFFSET(0x139CFA0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int PlayerGroup_TypeDefinitionIndex = 14446;

	class PlayerGroup : public Il2CppObject
	{
	public:
		::System::Int32 _EchelonNumber_k__BackingField; // 0x150
		::MX::Logic::BattleEntities::ManualSkillProcessor* manualSkillProcessor; // 0x158
		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* _PlayerSkillCardManager_k__BackingField; // 0x160
		::MX::Logic::Battles::CarrierSkillCardManager* _CarrierSkillCardManager_k__BackingField; // 0x168
		Il2CppObject* _HexaBuffs_k__BackingField; // 0x170

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* get_PlayerSkillCardManager()
		{
			return ((::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_GET_PLAYERSKILLCARDMANAGER_OFFSET))(nullptr);
		}

		::System::Void set_PlayerSkillCardManager(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_SET_PLAYERSKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::CarrierSkillCardManager* get_CarrierSkillCardManager()
		{
			return ((::MX::Logic::Battles::CarrierSkillCardManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_GET_CARRIERSKILLCARDMANAGER_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkillCardManager(::MX::Logic::Battles::CarrierSkillCardManager* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::CarrierSkillCardManager*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_SET_CARRIERSKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HexaBuffs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_GET_HEXABUFFS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::TeamSetting* arg2, ::System::Int32 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::TeamSetting*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62* CreateSkillCardManager(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_CREATESKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62* CreateSkillCardManager(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62*(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_CREATESKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Void CreateCarrierSkillManager(::System::Boolean arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_CREATECARRIERSKILLMANAGER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterSkillActor(::MX::Logic::BattleEntities::SkillActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_REGISTERSKILLACTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitSkillCard(::MX::Logic::Data::TeamSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::TeamSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_INITSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Void InitSkillCard(::MX::Campaign::SkillCardHand* arg)
		{
			((::System::Void(*)(::MX::Campaign::SkillCardHand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_INITSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Void InitSupporters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_INITSUPPORTERS_OFFSET))(arg, nullptr);
		}

		::System::Void AddSupporter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::SupportActor* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_ADDSUPPORTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanUseAutoSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_CANUSEAUTOSKILL_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdatePassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_UPDATEPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void InitPassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_INITPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void EnablePassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_ENABLEPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void DisablePassive(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_DISABLEPASSIVE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCarrierSupporter(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_UPDATECARRIERSUPPORTER_OFFSET))(arg, nullptr);
		}

		::System::Void Revive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_REVIVE_OFFSET))(nullptr);
		}

		::System::Void InitGroupBuff(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_INITGROUPBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void InitConquestGroupBuff(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_INITCONQUESTGROUPBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void InitHexaBuff(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_INITHEXABUFF_OFFSET))(arg, nullptr);
		}

		::System::Void InitEventBuff(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_INITEVENTBUFF_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::TargetFindRule* CreateTargetFindRule(::MX::Data::Excel::EventContentBuffExcel* arg)
		{
			return ((::MX::Logic::Skills::TargetFindRule*(*)(::MX::Data::Excel::EventContentBuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_CREATETARGETFINDRULE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEnumValueArray(::MX::Data::Excel::EventContentBuffExcel&* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::MX::Data::Excel::EventContentBuffExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_GETENUMVALUEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyGroupBuff(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_APPLYGROUPBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyGroupBuff(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_APPLYGROUPBUFF_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyHexaBuff(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_APPLYHEXABUFF_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyHexaBuff(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_APPLYHEXABUFF_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyEventBuff(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_APPLYEVENTBUFF_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* FindCarrierEntity(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_FINDCARRIERENTITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsCarrierSkillActor(::MX::Logic::BattleEntities::EntityId* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_PLAYERGROUP_CONTAINSCARRIERSKILLACTOR_OFFSET))(arg, nullptr);
		}

	};
}

