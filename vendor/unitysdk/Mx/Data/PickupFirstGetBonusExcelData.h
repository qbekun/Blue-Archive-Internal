#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class PickupFirstGetBonusExcel; }
namespace MX::Data::Excel { class PickupFirstGetBonus2Excel; }
namespace MX::Data { class PickupFirstGetBonusExcelData; }

#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_GET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1857290)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_SET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x18572A0)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_GET_RECRUITSELECTIONSHOPID_OFFSET UNITYSDK_OFFSET(0x18572B0)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_SET_RECRUITSELECTIONSHOPID_OFFSET UNITYSDK_OFFSET(0x18572C0)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_GET_PICKUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18572D0)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_SET_PICKUPCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18572E0)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x18572F0)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x1857300)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1857310)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1857360)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1857440)
#define MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1857520)

namespace MX::Data
{
	inline static constexpr unsigned int PickupFirstGetBonusExcelData_TypeDefinitionIndex = 15873;

	class PickupFirstGetBonusExcelData : public Il2CppObject
	{
	public:
		::System::Int64 _ShopRecruitId_k__BackingField; // 0x10
		::System::Int64 _RecruitSelectionShopId_k__BackingField; // 0x18
		::System::Int64 _PickupCharacterId_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelInfo* _Reward_k__BackingField; // 0x28

		::System::Int64 get_ShopRecruitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_GET_SHOPRECRUITID_OFFSET))(nullptr);
		}

		::System::Void set_ShopRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_SET_SHOPRECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RecruitSelectionShopId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_GET_RECRUITSELECTIONSHOPID_OFFSET))(nullptr);
		}

		::System::Void set_RecruitSelectionShopId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_SET_RECRUITSELECTIONSHOPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PickupCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_GET_PICKUPCHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_PickupCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_SET_PICKUPCHARACTERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_Reward()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_GET_REWARD_OFFSET))(nullptr);
		}

		::System::Void set_Reward(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_SET_REWARD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::PickupFirstGetBonusExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::PickupFirstGetBonusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::PickupFirstGetBonus2Excel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::PickupFirstGetBonus2Excel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Data::PickupFirstGetBonusExcelData* Clone()
		{
			return (return (::MX::Data::PickupFirstGetBonusExcelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PICKUPFIRSTGETBONUSEXCELDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

