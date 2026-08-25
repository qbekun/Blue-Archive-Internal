#pragma once
#include "unitysdk.h"

class UILabel;
class UINonEquipmentCard;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define CLANATTENDANCEREWARDPARCEL_GET_PARCELCARD_OFFSET UNITYSDK_OFFSET(0x232D680)
#define CLANATTENDANCEREWARDPARCEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x232D6F0)
#define CLANATTENDANCEREWARDPARCEL_SETDATA_OFFSET UNITYSDK_OFFSET(0x232D700)

	inline static constexpr unsigned int ClanAttendanceRewardParcel_TypeDefinitionIndex = 4935;

	class ClanAttendanceRewardParcel : public Il2CppObject
	{
	public:
		UILabel* count; // 0x18
		UINonEquipmentCard* parcelCard; // 0x20

		UINonEquipmentCard* get_ParcelCard()
		{
			return ((UINonEquipmentCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANATTENDANCEREWARDPARCEL_GET_PARCELCARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANATTENDANCEREWARDPARCEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CLANATTENDANCEREWARDPARCEL_SETDATA_OFFSET))(arg, nullptr);
		}

	};

