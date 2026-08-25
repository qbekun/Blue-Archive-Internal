#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
namespace UnityEngine { class Texture; }
namespace MX::Data { class ITBGItemInfo; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class ItemSlotType;
class UIPopup_Tooltip;
class UIPopup_TBGTooltip;

#define UITBGITEMSLOT_REFRESH_OFFSET UNITYSDK_OFFSET(0xB56F20)
#define UITBGITEMSLOT_SETINVENTORYITEMDATA_OFFSET UNITYSDK_OFFSET(0xB56650)
#define UITBGITEMSLOT__ONCLICKITEM_B__16_4_OFFSET UNITYSDK_OFFSET(0xB57140)
#define UITBGITEMSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB57160)
#define UITBGITEMSLOT__ONCLICKITEM_B__16_2_OFFSET UNITYSDK_OFFSET(0xB57170)
#define UITBGITEMSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB57200)
#define UITBGITEMSLOT_SETGOLD_OFFSET UNITYSDK_OFFSET(0xB57320)
#define UITBGITEMSLOT_SETREWARDITEMDATA_OFFSET UNITYSDK_OFFSET(0xB57450)
#define UITBGITEMSLOT__SETGOLD_B__15_0_OFFSET UNITYSDK_OFFSET(0xB574C0)
#define UITBGITEMSLOT__REFRESH_B__14_0_OFFSET UNITYSDK_OFFSET(0xB574F0)
#define UITBGITEMSLOT_CLEAR_OFFSET UNITYSDK_OFFSET(0xB570F0)
#define UITBGITEMSLOT__ONCLICKITEM_B__16_3_OFFSET UNITYSDK_OFFSET(0xB57520)
#define UITBGITEMSLOT__ONCLICKITEM_B__16_0_OFFSET UNITYSDK_OFFSET(0xB57540)
#define UITBGITEMSLOT__ONCLICKITEM_B__16_1_OFFSET UNITYSDK_OFFSET(0xB57640)
#define UITBGITEMSLOT_SETRANDOMREWARD_OFFSET UNITYSDK_OFFSET(0xB576A0)
#define UITBGITEMSLOT_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xB57700)

	inline static constexpr unsigned int UITBGItemSlot_TypeDefinitionIndex = 8393;

	class UITBGItemSlot : public Il2CppObject
	{
	public:
		MXButton* Button; // 0x18
		UITexture* Icon; // 0x20
		::UnityEngine::Texture* RandomRewardTexture; // 0x28
		::MX::Data::ITBGItemInfo* itemInfo; // 0x30
		::MX::GameLogic::Parcel::ParcelInfo* parcelInfo; // 0x38
		Il2CppObject* onUseItem; // 0x40
		ItemSlotType* slotType; // 0x48
		::System::Int32 index; // 0x4C

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SetInventoryItemData(::MX::Data::ITBGItemInfo* arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT_SETINVENTORYITEMDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OnClickItem_b__16_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT__ONCLICKITEM_B__16_4_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickItem_b__16_2(UIPopup_Tooltip* arg)
		{
			((::System::Void(*)(UIPopup_Tooltip*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT__ONCLICKITEM_B__16_2_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetGold(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT_SETGOLD_OFFSET))(arg, nullptr);
		}

		::System::Void SetRewardItemData(::MX::Data::ITBGItemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT_SETREWARDITEMDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _SetGold_b__15_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT__SETGOLD_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Refresh_b__14_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT__REFRESH_B__14_0_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void _OnClickItem_b__16_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT__ONCLICKITEM_B__16_3_OFFSET))(nullptr);
		}

		::System::Void _OnClickItem_b__16_0(UIPopup_TBGTooltip* arg)
		{
			((::System::Void(*)(UIPopup_TBGTooltip*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT__ONCLICKITEM_B__16_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickItem_b__16_1(UIPopup_TBGTooltip* arg)
		{
			((::System::Void(*)(UIPopup_TBGTooltip*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT__ONCLICKITEM_B__16_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetRandomReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT_SETRANDOMREWARD_OFFSET))(nullptr);
		}

		::System::Void OnClickItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMSLOT_ONCLICKITEM_OFFSET))(nullptr);
		}

	};

