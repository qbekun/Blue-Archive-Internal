#pragma once
#include "unitysdk.h"

class UISmallParcelCard;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIWORLDRAIDREWARDPARCEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xC084F0)
#define UIWORLDRAIDREWARDPARCEL_SETDATA_OFFSET UNITYSDK_OFFSET(0xC08530)

	inline static constexpr unsigned int UIWorldRaidRewardParcel_TypeDefinitionIndex = 8798;

	class UIWorldRaidRewardParcel : public ::System::Xml::Serialization::XmlNodeEventArgs
	{
	public:
		UISmallParcelCard* parcelCard; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDPARCEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDPARCEL_SETDATA_OFFSET))(arg, nullptr);
		}

	};

