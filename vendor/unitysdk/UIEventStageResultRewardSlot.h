#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
class MXButton;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIEVENTSTAGERESULTREWARDSLOT_GET_BONUSCHARACTERIDLIST_OFFSET UNITYSDK_OFFSET(0x24C5FF0)
#define UIEVENTSTAGERESULTREWARDSLOT_SET_BONUSAMOUNT_OFFSET UNITYSDK_OFFSET(0x24C6000)
#define UIEVENTSTAGERESULTREWARDSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24C6010)
#define UIEVENTSTAGERESULTREWARDSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24C40E0)
#define UIEVENTSTAGERESULTREWARDSLOT_ADD_DETAILBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x24C3140)
#define UIEVENTSTAGERESULTREWARDSLOT_GET_REWARDPARCELINFO_OFFSET UNITYSDK_OFFSET(0x24C6130)
#define UIEVENTSTAGERESULTREWARDSLOT_GET_DEBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x24C6140)
#define UIEVENTSTAGERESULTREWARDSLOT_SET_BONUSCHARACTERIDLIST_OFFSET UNITYSDK_OFFSET(0x24C6150)
#define UIEVENTSTAGERESULTREWARDSLOT_SET_DEBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x24C6160)
#define UIEVENTSTAGERESULTREWARDSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C6170)
#define UIEVENTSTAGERESULTREWARDSLOT_ONCLICKDETAILBUTTON_OFFSET UNITYSDK_OFFSET(0x24C6180)
#define UIEVENTSTAGERESULTREWARDSLOT_GET_BONUSAMOUNT_OFFSET UNITYSDK_OFFSET(0x24C61A0)
#define UIEVENTSTAGERESULTREWARDSLOT_REMOVE_DETAILBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x24C61B0)
#define UIEVENTSTAGERESULTREWARDSLOT_SET_REWARDPARCELINFO_OFFSET UNITYSDK_OFFSET(0x24C6250)

	inline static constexpr unsigned int UIEventStageResultRewardSlot_TypeDefinitionIndex = 5905;

	class UIEventStageResultRewardSlot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* bestRecordTagRoot; // 0x18
		UILabel* rewardNameLabel; // 0x20
		UITexture* rewardIconTexture; // 0x28
		UILabel* rewardAmountLabel; // 0x30
		UILabel* rewardTotalAmountLabel; // 0x38
		MXButton* detailButton; // 0x40
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcelInfo_k__BackingField; // 0x48
		::System::Int64 _BonusAmount_k__BackingField; // 0x50
		Il2CppObject* _DebuffIdList_k__BackingField; // 0x58
		Il2CppObject* _BonusCharacterIdList_k__BackingField; // 0x60
		Il2CppObject* DetailButtonClicked; // 0x68

		Il2CppObject* get_BonusCharacterIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_GET_BONUSCHARACTERIDLIST_OFFSET))(nullptr);
		}

		::System::Void set_BonusAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_SET_BONUSAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Boolean arg, ::MX::GameLogic::Parcel::ParcelInfo* arg2, ::System::Int64 arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Boolean, ::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void add_DetailButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_ADD_DETAILBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcelInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_GET_REWARDPARCELINFO_OFFSET))(nullptr);
		}

		Il2CppObject* get_DebuffIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_GET_DEBUFFIDLIST_OFFSET))(nullptr);
		}

		::System::Void set_BonusCharacterIdList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_SET_BONUSCHARACTERIDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_DebuffIdList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_SET_DEBUFFIDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickDetailButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_ONCLICKDETAILBUTTON_OFFSET))(nullptr);
		}

		::System::Int64 get_BonusAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_GET_BONUSAMOUNT_OFFSET))(nullptr);
		}

		::System::Void remove_DetailButtonClicked(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_REMOVE_DETAILBUTTONCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDSLOT_SET_REWARDPARCELINFO_OFFSET))(arg, nullptr);
		}

	};

