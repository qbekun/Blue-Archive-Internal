#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::Data { class ITBGSeasonInfo; }
namespace MX::Campaign { class HexLocation; }
namespace MX::TableBoard { class TBGItemDB; }
namespace MX::Core::Math { class IRandomService; }
namespace MX::TableBoard { class TBGItemEffectDB; }
namespace MX::TableBoard { class TBGPlayerDB; }
namespace FlatData { class TBGProbModifyCondition; }
namespace MX::Data { class ITBGItemInfo; }
namespace MX::Data { class ITBGDiceInfo; }

#define MX_TABLEBOARD_TBGPLAYERDB_ROLLDICE_OFFSET UNITYSDK_OFFSET(0xF0A8E0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_DICEPROBMODIFYPARAMS_OFFSET UNITYSDK_OFFSET(0xF0AF20)
#define MX_TABLEBOARD_TBGPLAYERDB_CLEARALLITEMEFFECTS_OFFSET UNITYSDK_OFFSET(0xF0AF30)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDGUIDEEFFECT_OFFSET UNITYSDK_OFFSET(0xF0AFC0)
#define MX_TABLEBOARD_TBGPLAYERDB_RESETDICETODEFAULT_OFFSET UNITYSDK_OFFSET(0xF0B0D0)
#define MX_TABLEBOARD_TBGPLAYERDB_CREATEPLAYERDB_OFFSET UNITYSDK_OFFSET(0xF0B180)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_DICEPROBMODIFYPARAMS_OFFSET UNITYSDK_OFFSET(0xF0B3B0)
#define MX_TABLEBOARD_TBGPLAYERDB_ADDDICEPROBMODIFIER_OFFSET UNITYSDK_OFFSET(0xF0B3C0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDDEFENCECRITICALEFFECT_OFFSET UNITYSDK_OFFSET(0xF0B540)
#define MX_TABLEBOARD_TBGPLAYERDB_ONDICEPLAYFAILURE_OFFSET UNITYSDK_OFFSET(0xF0B750)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ITEMEFFECTS_OFFSET UNITYSDK_OFFSET(0xF0B850)
#define MX_TABLEBOARD_TBGPLAYERDB_REMOVEITEMEFFECT_OFFSET UNITYSDK_OFFSET(0xF0B860)
#define MX_TABLEBOARD_TBGPLAYERDB_RESERVEITEMTEMPORARYSLOT_OFFSET UNITYSDK_OFFSET(0xF02A40)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_MAXHITPOINT_OFFSET UNITYSDK_OFFSET(0xF0B8C0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ISMAXPERMANENTDICEADDDOTREACHED_OFFSET UNITYSDK_OFFSET(0xF00F30)
#define MX_TABLEBOARD_TBGPLAYERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0B2E0)
#define MX_TABLEBOARD_TBGPLAYERDB_CLEARALLITEMS_OFFSET UNITYSDK_OFFSET(0xF0BFE0)
#define MX_TABLEBOARD_TBGPLAYERDB_REMOVEDICEPROBMODIFIER_OFFSET UNITYSDK_OFFSET(0xF0B7D0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDDICEFORCEDOTEFFECT_OFFSET UNITYSDK_OFFSET(0xF0AD10)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_HASITEMEFFECTDIRTY_OFFSET UNITYSDK_OFFSET(0xF0C080)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_HITPOINT_OFFSET UNITYSDK_OFFSET(0xF0C090)
#define MX_TABLEBOARD_TBGPLAYERDB_ADDITEMEFFECT_OFFSET UNITYSDK_OFFSET(0xF0A3A0)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_ITEMEFFECTS_OFFSET UNITYSDK_OFFSET(0xF0C0B0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDDICEADDDOTEFFECT_OFFSET UNITYSDK_OFFSET(0xF0C0C0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_HASITEMEFFECTDIRTY_OFFSET UNITYSDK_OFFSET(0xF0C1D0)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_HITPOINT_OFFSET UNITYSDK_OFFSET(0xF0C310)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_DICEID_OFFSET UNITYSDK_OFFSET(0xF0C320)
#define MX_TABLEBOARD_TBGPLAYERDB_TRYRECEIVEITEMINTEMPORARYSLOT_OFFSET UNITYSDK_OFFSET(0xF00080)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDPERMANENTDICEADDDOTEFFECT_OFFSET UNITYSDK_OFFSET(0xF0BEC0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xF0C3C0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0xF0AC80)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_CURRENTDICEINFO_OFFSET UNITYSDK_OFFSET(0xF0C3E0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDDEFENCEEFFECT_OFFSET UNITYSDK_OFFSET(0xF0C500)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_TEMPORARYITEM_OFFSET UNITYSDK_OFFSET(0xF0C610)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0xF0C620)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xF0C630)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xF0C640)
#define MX_TABLEBOARD_TBGPLAYERDB_TRYREMOVEITEM_OFFSET UNITYSDK_OFFSET(0xF029C0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ITEMSLOTS_OFFSET UNITYSDK_OFFSET(0xF0C650)
#define MX_TABLEBOARD_TBGPLAYERDB_ONDICEPLAYSUCCESS_OFFSET UNITYSDK_OFFSET(0xF0C830)
#define MX_TABLEBOARD_TBGPLAYERDB_DAMAGE_OFFSET UNITYSDK_OFFSET(0xF0C900)
#define MX_TABLEBOARD_TBGPLAYERDB_HEAL_OFFSET UNITYSDK_OFFSET(0xF0A370)
#define MX_TABLEBOARD_TBGPLAYERDB_RESOLVESAVEDB_OFFSET UNITYSDK_OFFSET(0xF0CB50)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_HASITEMSDIRTY_OFFSET UNITYSDK_OFFSET(0xF0CB60)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_DICEID_OFFSET UNITYSDK_OFFSET(0xF0CCA0)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_TEMPORARYITEM_OFFSET UNITYSDK_OFFSET(0xF0CCB0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0xF0CCC0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF0CCD0)
#define MX_TABLEBOARD_TBGPLAYERDB_GET_ISMAXHITPOINTREACHED_OFFSET UNITYSDK_OFFSET(0xF00E80)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_HASITEMSDIRTY_OFFSET UNITYSDK_OFFSET(0xF0CCE0)
#define MX_TABLEBOARD_TBGPLAYERDB_ADDHITPOINT_OFFSET UNITYSDK_OFFSET(0xF0CA80)
#define MX_TABLEBOARD_TBGPLAYERDB__GET_ITEMSLOTS_B__25_0_OFFSET UNITYSDK_OFFSET(0xF0CCF0)
#define MX_TABLEBOARD_TBGPLAYERDB__ROLLDICE_B__70_0_OFFSET UNITYSDK_OFFSET(0xF0CD60)
#define MX_TABLEBOARD_TBGPLAYERDB_TRYUSEITEM_OFFSET UNITYSDK_OFFSET(0xF0C330)
#define MX_TABLEBOARD_TBGPLAYERDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF0D370)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGPlayerDB_TypeDefinitionIndex = 11215;

	class TBGPlayerDB : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGBoardSaveDB* _saveDB; // 0x10
		::MX::Data::ITBGSeasonInfo* _seasonInfoCache; // 0x18
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x30
		::System::Int32 _HitPoint_k__BackingField; // 0x38
		::System::Int64 _DiceId_k__BackingField; // 0x40
		Il2CppObject* _DiceProbModifyParams_k__BackingField; // 0x48
		Il2CppObject* _Items_k__BackingField; // 0x50
		::MX::TableBoard::TBGItemDB* _TemporaryItem_k__BackingField; // 0x58
		::System::Boolean _hasItemsDirty; // 0x60
		Il2CppObject* _ItemEffects_k__BackingField; // 0x68
		::System::Boolean _hasItemEffectDirty; // 0x70

		::Il2CppArray<::System::Object*>* RollDice(::MX::Core::Math::IRandomService* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_ROLLDICE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DiceProbModifyParams()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_DICEPROBMODIFYPARAMS_OFFSET))(nullptr);
		}

		::System::Void ClearAllItemEffects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_CLEARALLITEMEFFECTS_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGItemEffectDB* get_ActivatedGuideEffect()
		{
			return ((::MX::TableBoard::TBGItemEffectDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDGUIDEEFFECT_OFFSET))(nullptr);
		}

		::System::Void ResetDiceToDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_RESETDICETODEFAULT_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGPlayerDB* CreatePlayerDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			return ((::MX::TableBoard::TBGPlayerDB*(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_CREATEPLAYERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_DiceProbModifyParams(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_DICEPROBMODIFYPARAMS_OFFSET))(arg, nullptr);
		}

		::System::Void AddDiceProbModifier(::FlatData::TBGProbModifyCondition* arg)
		{
			((::System::Void(*)(::FlatData::TBGProbModifyCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_ADDDICEPROBMODIFIER_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGItemEffectDB* get_ActivatedDefenceCriticalEffect()
		{
			return ((::MX::TableBoard::TBGItemEffectDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDDEFENCECRITICALEFFECT_OFFSET))(nullptr);
		}

		::System::Void OnDicePlayFailure()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_ONDICEPLAYFAILURE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ItemEffects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ITEMEFFECTS_OFFSET))(nullptr);
		}

		::System::Void RemoveItemEffect(::MX::TableBoard::TBGItemEffectDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGItemEffectDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_REMOVEITEMEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReserveItemTemporarySlot(::MX::Data::ITBGItemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_RESERVEITEMTEMPORARYSLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxHitPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_MAXHITPOINT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMaxPermanentDiceAddDotReached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ISMAXPERMANENTDICEADDDOTREACHED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ClearAllItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_CLEARALLITEMS_OFFSET))(nullptr);
		}

		::System::Void RemoveDiceProbModifier(::FlatData::TBGProbModifyCondition* arg)
		{
			((::System::Void(*)(::FlatData::TBGProbModifyCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_REMOVEDICEPROBMODIFIER_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGItemEffectDB* get_ActivatedDiceForceDotEffect()
		{
			return ((::MX::TableBoard::TBGItemEffectDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDDICEFORCEDOTEFFECT_OFFSET))(nullptr);
		}

		::System::Void set_HasItemEffectDirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_HASITEMEFFECTDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_HitPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_HITPOINT_OFFSET))(nullptr);
		}

		::System::Void AddItemEffect(::MX::TableBoard::TBGItemEffectDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGItemEffectDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_ADDITEMEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ItemEffects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_ITEMEFFECTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ActivatedDiceAddDotEffect()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDDICEADDDOTEFFECT_OFFSET))(nullptr);
		}

		::System::Boolean get_HasItemEffectDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_HASITEMEFFECTDIRTY_OFFSET))(nullptr);
		}

		::System::Void set_HitPoint(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_HITPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DiceId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_DICEID_OFFSET))(nullptr);
		}

		::System::Boolean TryReceiveItemInTemporarySlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_TRYRECEIVEITEMINTEMPORARYSLOT_OFFSET))(nullptr);
		}

		Il2CppObject* get_ActivatedPermanentDiceAddDotEffect()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDPERMANENTDICEADDDOTEFFECT_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_LOCATION_OFFSET))(nullptr);
		}

		::MX::Data::ITBGSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::ITBGSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_SEASONINFO_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentDiceInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_CURRENTDICEINFO_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGItemEffectDB* get_ActivatedDefenceEffect()
		{
			return ((::MX::TableBoard::TBGItemEffectDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ACTIVATEDDEFENCEEFFECT_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGItemDB* get_TemporaryItem()
		{
			return ((::MX::TableBoard::TBGItemDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_TEMPORARYITEM_OFFSET))(nullptr);
		}

		::System::Void set_Location(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_Items(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_ITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Items()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::Boolean TryRemoveItem(::MX::TableBoard::TBGItemDB* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_TRYREMOVEITEM_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ItemSlots()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ITEMSLOTS_OFFSET))(nullptr);
		}

		::System::Void OnDicePlaySuccess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_ONDICEPLAYSUCCESS_OFFSET))(nullptr);
		}

		::System::Boolean Damage(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_DAMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Heal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_HEAL_OFFSET))(arg, nullptr);
		}

		::System::Void ResolveSaveDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_RESOLVESAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasItemsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_HASITEMSDIRTY_OFFSET))(nullptr);
		}

		::System::Void set_DiceId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_DICEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TemporaryItem(::MX::TableBoard::TBGItemDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_TEMPORARYITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ISDEAD_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMaxHitPointReached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_GET_ISMAXHITPOINTREACHED_OFFSET))(nullptr);
		}

		::System::Void set_HasItemsDirty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_HASITEMSDIRTY_OFFSET))(arg, nullptr);
		}

		::System::Void AddHitPoint(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_ADDHITPOINT_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGItemDB* _get_ItemSlots_b__25_0(::System::Int32 arg)
		{
			return ((::MX::TableBoard::TBGItemDB*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB__GET_ITEMSLOTS_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Int32 _RollDice_b__70_0(::MX::Data::ITBGDiceInfo* arg)
		{
			return ((::System::Int32(*)(::MX::Data::ITBGDiceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB__ROLLDICE_B__70_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryUseItem(::MX::TableBoard::TBGItemDB* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_TRYUSEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGPLAYERDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

