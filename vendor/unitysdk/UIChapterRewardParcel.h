#pragma once
#include "unitysdk.h"

class UINonEquipmentCard;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UICHAPTERREWARDPARCEL_SETDATA_OFFSET UNITYSDK_OFFSET(0xB18C50)
#define UICHAPTERREWARDPARCEL_GET_PARCELCARD_OFFSET UNITYSDK_OFFSET(0xB18E00)
#define UICHAPTERREWARDPARCEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xB18E70)

	inline static constexpr unsigned int UIChapterRewardParcel_TypeDefinitionIndex = 8226;

	class UIChapterRewardParcel : public Il2CppObject
	{
	public:
		UINonEquipmentCard* parcelCard; // 0x18

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERREWARDPARCEL_SETDATA_OFFSET))(arg, nullptr);
		}

		UINonEquipmentCard* get_ParcelCard()
		{
			return ((UINonEquipmentCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERREWARDPARCEL_GET_PARCELCARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERREWARDPARCEL_.CTOR_OFFSET))(nullptr);
		}

	};

