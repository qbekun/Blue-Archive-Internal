#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class PickUpCharacterBonusKeyPair; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class PickupDuplicateBonusExcel; }
namespace FlatData { class ShopCategoryType; }

#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1857100)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1857110)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_SET_REWARDPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1857200)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1857210)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1857220)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1857230)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1857240)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1857250)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_REWARDPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1857260)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1857270)
#define MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_PICKUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1857280)

namespace MX::Data
{
	inline static constexpr unsigned int PickupDuplicateBonusExcelData_TypeDefinitionIndex = 15872;

	class PickupDuplicateBonusExcelData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _ShopId_k__BackingField; // 0x18
		::MX::Data::PickUpCharacterBonusKeyPair* _Key_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcelInfo_k__BackingField; // 0x30

		::System::Void set_ShopId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_SET_SHOPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::PickupDuplicateBonusExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::PickupDuplicateBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardParcelInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_SET_REWARDPARCELINFO_OFFSET))(arg, nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::MX::Data::PickUpCharacterBonusKeyPair* get_Key()
		{
			return (return (::MX::Data::PickUpCharacterBonusKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_KEY_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_SHOPID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_REWARDPARCELINFO_OFFSET))(nullptr);
		}

		::System::Void set_Key(::MX::Data::PickUpCharacterBonusKeyPair* arg)
		{
			((::System::Void(*)(::MX::Data::PickUpCharacterBonusKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PickupCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPDUPLICATEBONUSEXCELDATA_GET_PICKUPCHARACTERID_OFFSET))(nullptr);
		}

	};
}

