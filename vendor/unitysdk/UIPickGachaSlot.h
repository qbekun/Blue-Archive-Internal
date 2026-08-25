#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UICharacterCard;
class UITexture;
namespace UnityEngine { class Transform; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
class ItemObject;

#define UIPICKGACHASLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x25BE9F0)
#define UIPICKGACHASLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x25BEDD0)
#define UIPICKGACHASLOT_SETOBTAINEDCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x25BFFF0)
#define UIPICKGACHASLOT_SETOBTAINEDCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x25BF680)
#define UIPICKGACHASLOT_SETUNOBTAINEDCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x25BFE70)
#define UIPICKGACHASLOT_ONCLICKGAIN_OFFSET UNITYSDK_OFFSET(0x25C0020)
#define UIPICKGACHASLOT_EXCHANGECOIN_OFFSET UNITYSDK_OFFSET(0x25C02C0)
#define UIPICKGACHASLOT_ONCLICKDISABLEGAIN_OFFSET UNITYSDK_OFFSET(0x25C0580)
#define UIPICKGACHASLOT_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0x25C07D0)
#define UIPICKGACHASLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C09B0)

	inline static constexpr unsigned int UIPickGachaSlot_TypeDefinitionIndex = 6296;

	class UIPickGachaSlot : public Il2CppObject
	{
	public:
		MXButton* Card; // 0x18
		MXButton* GainBtn; // 0x20
		MXButton* DisableGainBtn; // 0x28
		UILabel* StarLabel; // 0x30
		UILabel* NameText; // 0x38
		::Il2CppArray<::System::Object*>* RquierRecruitCoinLabel; // 0x40
		::Il2CppArray<::System::Object*>* RquierRecruitCoinIcon; // 0x48
		::UnityEngine::GameObject* HasCharacterInfo; // 0x50
		::UnityEngine::GameObject* NoHasCharacterInfo; // 0x58
		UICharacterCard* CharacterCard; // 0x60
		::Il2CppArray<::System::Object*>* ElephIcon; // 0x68
		UILabel* RewardElephAmount; // 0x70
		UILabel* HasElephAmount; // 0x78
		UILabel* EligmaLocalizeNameLabel; // 0x80
		UILabel* RewardEligmaAmount; // 0x88
		UILabel* HasEligmaAmount; // 0x90
		UILabel* ElephName; // 0x98
		UITexture* SchoolIcon; // 0xA0
		UILabel* SchoolName; // 0xA8
		::UnityEngine::Transform* PickupFirstGetTagTransform; // 0xB0
		UILabel* PickupFirstGetBonusLabel; // 0xB8
		::System::Int64 uniqueId; // 0xC0
		::System::Int64 merchandiseId; // 0xC8
		::System::Int64 shopId; // 0xD0
		::MX::GameLogic::Parcel::ParcelCost* cost; // 0xD8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2, ItemObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetObtainedCharacterInfo(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_SETOBTAINEDCHARACTERINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetObtainedCharacterInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_SETOBTAINEDCHARACTERINFO_OFFSET))(nullptr);
		}

		::System::Void SetUnobtainedCharacterInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_SETUNOBTAINEDCHARACTERINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickGain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_ONCLICKGAIN_OFFSET))(nullptr);
		}

		::System::Void ExchangeCoin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_EXCHANGECOIN_OFFSET))(nullptr);
		}

		::System::Void OnClickDisableGain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_ONCLICKDISABLEGAIN_OFFSET))(nullptr);
		}

		::System::Void OnClickCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_ONCLICKCARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPICKGACHASLOT_.CTOR_OFFSET))(nullptr);
		}

	};

