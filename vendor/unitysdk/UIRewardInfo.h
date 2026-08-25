#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UIEquipmentCard;
class UINonEquipmentCard;
class UILabel;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class RewardTag; }

#define UIREWARDINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x27B4DB0)
#define UIREWARDINFO_HIDE_OFFSET UNITYSDK_OFFSET(0x27B5170)
#define UIREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B51C0)

	inline static constexpr unsigned int UIRewardInfo_TypeDefinitionIndex = 7532;

	class UIRewardInfo : public Il2CppObject
	{
	public:
		UICharacterCard* characterCard; // 0x18
		UIEquipmentCard* equipmentCard; // 0x20
		UINonEquipmentCard* nonEquipmentCard; // 0x28
		UILabel* nameLabel; // 0x30
		UILabel* amountLabel; // 0x38

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg, ::FlatData::RewardTag* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDINFO_HIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDINFO_.CTOR_OFFSET))(nullptr);
		}

	};

