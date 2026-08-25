#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SupportActor; }
namespace MX::Logic::Battles { class PlayerGroup; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Battles { class CarrierSkillCard; }
namespace MX::Logic::Battles { class CarrierDataInfo; }
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }

#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_CARRIERSKILLSUPPORTACTOR_OFFSET UNITYSDK_OFFSET(0x1370AF0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_CARRIERSKILLSUPPORTACTOR_OFFSET UNITYSDK_OFFSET(0x1370B00)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_SKILLCARDTEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x1370B10)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_SKILLCARDTEXTURETABLE_OFFSET UNITYSDK_OFFSET(0x1370B20)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_CARRIERSKILLLISTALL_OFFSET UNITYSDK_OFFSET(0x1370B30)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_CARRIERSKILLLISTALL_OFFSET UNITYSDK_OFFSET(0x1370B40)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_CARRIERSKILLLISTENABLED_OFFSET UNITYSDK_OFFSET(0x1370B50)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_CARRIERSKILLLISTENABLED_OFFSET UNITYSDK_OFFSET(0x1370B60)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_PLAYERGROUP_OFFSET UNITYSDK_OFFSET(0x1370B70)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_PLAYERGROUP_OFFSET UNITYSDK_OFFSET(0x1370B80)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_NOTUSEDEFAULTSKILLSLOTUI_OFFSET UNITYSDK_OFFSET(0x1370B90)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_NOTUSEDEFAULTSKILLSLOTUI_OFFSET UNITYSDK_OFFSET(0x1370BA0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1370BB0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SETCARRIERSKILLSUPPORTER_OFFSET UNITYSDK_OFFSET(0x1370D10)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SETCARRIERSKILLSUPPORTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_ALLCARDSSTARTLISTENBATTLEEVENTS_OFFSET UNITYSDK_OFFSET(0x1370DE0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_ADDTOENABLEDSKILLLIST_OFFSET UNITYSDK_OFFSET(0x1371000)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_PROCESSSKILLCARD_OFFSET UNITYSDK_OFFSET(0x1371170)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_PROCESSSLOTTIME_OFFSET UNITYSDK_OFFSET(0x1371240)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_UPDATEINPUTUSECARD_OFFSET UNITYSDK_OFFSET(0x1371190)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_CLEARCARDS_OFFSET UNITYSDK_OFFSET(0x13712F0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_FINDSKILLCARD_OFFSET UNITYSDK_OFFSET(0x13715B0)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER__SETCARRIERSKILLSUPPORTER_G__ISALREADYSAMESUPPORTACTOR|26_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER__SETCARRIERSKILLSUPPORTER_G__CREATECARRIERSKILLSUPPORTACTOR|26_1_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CarrierSkillCardManager_TypeDefinitionIndex = 14371;

	class CarrierSkillCardManager : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SupportActor* _CarrierSkillSupportActor_k__BackingField; // 0x38
		Il2CppObject* _SkillCardTextureTable_k__BackingField; // 0x40
		Il2CppObject* _CarrierSkillListAll_k__BackingField; // 0x48
		Il2CppObject* _CarrierSkillListEnabled_k__BackingField; // 0x50
		::MX::Logic::Battles::PlayerGroup* _PlayerGroup_k__BackingField; // 0x58
		::System::Boolean _NotUseDefaultSkillSlotUI_k__BackingField; // 0x60

		::MX::Logic::BattleEntities::SupportActor* get_CarrierSkillSupportActor()
		{
			return ((::MX::Logic::BattleEntities::SupportActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_CARRIERSKILLSUPPORTACTOR_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkillSupportActor(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_CARRIERSKILLSUPPORTACTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SkillCardTextureTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_SKILLCARDTEXTURETABLE_OFFSET))(nullptr);
		}

		::System::Void set_SkillCardTextureTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_SKILLCARDTEXTURETABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CarrierSkillListAll()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_CARRIERSKILLLISTALL_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkillListAll(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_CARRIERSKILLLISTALL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CarrierSkillListEnabled()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_CARRIERSKILLLISTENABLED_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkillListEnabled(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_CARRIERSKILLLISTENABLED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::PlayerGroup* get_PlayerGroup()
		{
			return ((::MX::Logic::Battles::PlayerGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_PLAYERGROUP_OFFSET))(nullptr);
		}

		::System::Void set_PlayerGroup(::MX::Logic::Battles::PlayerGroup* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::PlayerGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_PLAYERGROUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NotUseDefaultSkillSlotUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_GET_NOTUSEDEFAULTSKILLSLOTUI_OFFSET))(nullptr);
		}

		::System::Void set_NotUseDefaultSkillSlotUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SET_NOTUSEDEFAULTSKILLSLOTUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::CharacterGroup* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::CharacterGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCarrierSkillSupporter(::MX::Logic::BattleEntities::SupportActor* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportActor*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SETCARRIERSKILLSUPPORTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCarrierSkillSupporter(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_SETCARRIERSKILLSUPPORTER_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void AllCardsStartListenBattleEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_ALLCARDSSTARTLISTENBATTLEEVENTS_OFFSET))(nullptr);
		}

		::System::Void AddToEnabledSkillList(::MX::Logic::Battles::CarrierSkillCard* arg, ::MX::Logic::Battles::CarrierDataInfo* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::CarrierSkillCard*, ::MX::Logic::Battles::CarrierDataInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_ADDTOENABLEDSKILLLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ProcessSkillCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_PROCESSSKILLCARD_OFFSET))(nullptr);
		}

		::System::Void ProcessSlotTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_PROCESSSLOTTIME_OFFSET))(nullptr);
		}

		::System::Boolean UpdateInputUseCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_UPDATEINPUTUSECARD_OFFSET))(nullptr);
		}

		::System::Void ClearCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_CLEARCARDS_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* FindSkillCard(::System::Int64 arg)
		{
			return ((::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER_FINDSKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetCarrierSkillSupporter_g__IsAlreadySameSupportActor|26_0(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER__SETCARRIERSKILLSUPPORTER_G__ISALREADYSAMESUPPORTACTOR|26_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetCarrierSkillSupporter_g__CreateCarrierSkillSupportActor|26_1(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARRIERSKILLCARDMANAGER__SETCARRIERSKILLSUPPORTER_G__CREATECARRIERSKILLSUPPORTACTOR|26_1_OFFSET))(arg, nullptr);
		}

	};
}

