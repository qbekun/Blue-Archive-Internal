#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::GameLogic::DBModel { class AssistRelation; }
namespace MX::Data::Excel { class AssistSlotExcel; }

#define MX_DATA_ASSISTSLOTINFO_GET_ASSISTREWARDLIMIT_OFFSET UNITYSDK_OFFSET(0x180FFB0)
#define MX_DATA_ASSISTSLOTINFO_SET_ASSISTRENTALFEEAMOUNTSTRANGER_OFFSET UNITYSDK_OFFSET(0x180FFC0)
#define MX_DATA_ASSISTSLOTINFO_GETASSISTRENTALFEECOST_OFFSET UNITYSDK_OFFSET(0x180FFD0)
#define MX_DATA_ASSISTSLOTINFO_SET_ASSISTTERMREWARDPERIOD_OFFSET UNITYSDK_OFFSET(0x1810070)
#define MX_DATA_ASSISTSLOTINFO_SET_ASSISTREWARDDAILYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1810080)
#define MX_DATA_ASSISTSLOTINFO_GET_ASSISTREWARDDAILYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1810090)
#define MX_DATA_ASSISTSLOTINFO_GET_ASSISTRENTALFEEAMOUNT_OFFSET UNITYSDK_OFFSET(0x18100A0)
#define MX_DATA_ASSISTSLOTINFO_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x18100B0)
#define MX_DATA_ASSISTSLOTINFO_SET_ASSISTREWARDLIMIT_OFFSET UNITYSDK_OFFSET(0x18100C0)
#define MX_DATA_ASSISTSLOTINFO_GET_ASSISTTERMREWARDPERIOD_OFFSET UNITYSDK_OFFSET(0x18100D0)
#define MX_DATA_ASSISTSLOTINFO_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x18100E0)
#define MX_DATA_ASSISTSLOTINFO_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x18100F0)
#define MX_DATA_ASSISTSLOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x180A270)
#define MX_DATA_ASSISTSLOTINFO_SET_ASSISTRENTALFEEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1810100)
#define MX_DATA_ASSISTSLOTINFO_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1810110)
#define MX_DATA_ASSISTSLOTINFO_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1810120)
#define MX_DATA_ASSISTSLOTINFO_GET_ASSISTRENTALFEEAMOUNTSTRANGER_OFFSET UNITYSDK_OFFSET(0x1810130)
#define MX_DATA_ASSISTSLOTINFO_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1810140)

namespace MX::Data
{
	inline static constexpr unsigned int AssistSlotInfo_TypeDefinitionIndex = 15714;

	class AssistSlotInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SlotId_k__BackingField; // 0x10
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x18
		::System::Int64 _SlotNumber_k__BackingField; // 0x20
		::System::TimeSpan* _AssistTermRewardPeriod_k__BackingField; // 0x28
		::System::Int64 _AssistRewardLimit_k__BackingField; // 0x30
		::System::Int64 _AssistRewardDailyMaxCount_k__BackingField; // 0x38
		::System::Int64 _AssistRentalFeeAmount_k__BackingField; // 0x40
		::System::Int64 _AssistRentalFeeAmountStranger_k__BackingField; // 0x48

		::System::Int64 get_AssistRewardLimit()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_GET_ASSISTREWARDLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_AssistRentalFeeAmountStranger(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_SET_ASSISTRENTALFEEAMOUNTSTRANGER_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* GetAssistRentalFeeCost(::MX::GameLogic::DBModel::AssistRelation* arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::MX::GameLogic::DBModel::AssistRelation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_GETASSISTRENTALFEECOST_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistTermRewardPeriod(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_SET_ASSISTTERMREWARDPERIOD_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistRewardDailyMaxCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_SET_ASSISTREWARDDAILYMAXCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AssistRewardDailyMaxCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_GET_ASSISTREWARDDAILYMAXCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistRentalFeeAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_GET_ASSISTRENTALFEEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SlotNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistRewardLimit(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_SET_ASSISTREWARDLIMIT_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_AssistTermRewardPeriod()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_GET_ASSISTTERMREWARDPERIOD_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AssistSlotExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AssistSlotExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistRentalFeeAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_SET_ASSISTRENTALFEEAMOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotNumber()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistRentalFeeAmountStranger()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_GET_ASSISTRENTALFEEAMOUNTSTRANGER_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTSLOTINFO_SET_SLOTID_OFFSET))(arg, nullptr);
		}

	};
}

