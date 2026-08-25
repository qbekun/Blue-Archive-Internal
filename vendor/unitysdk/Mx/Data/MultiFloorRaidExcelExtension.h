#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MultiFloorRaidSeasonManageExcel; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class MultiFloorRaidRewardExcel; }
namespace MX::Data::Excel { class MultiFloorRaidStageExcel; }

#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSTAGEEXCELSBYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x197B1D0)
#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_CANRECEIVEREWARDSEASON_OFFSET UNITYSDK_OFFSET(0x197B4E0)
#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_ASPARCEL_OFFSET UNITYSDK_OFFSET(0x197B700)
#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSEASONSETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x197B650)
#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_CANENTERSEASON_OFFSET UNITYSDK_OFFSET(0x197B790)
#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSEASONSTARTDATE_OFFSET UNITYSDK_OFFSET(0x197B5A0)
#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x197B850)
#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSEASONENDNOTELABELSTARDATE_OFFSET UNITYSDK_OFFSET(0x197B900)
#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSEASONENDDATE_OFFSET UNITYSDK_OFFSET(0x197B9B0)
#define MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_CANPLAYSEASON_OFFSET UNITYSDK_OFFSET(0x197BA60)

namespace MX::Data
{
	inline static constexpr unsigned int MultiFloorRaidExcelExtension_TypeDefinitionIndex = 16505;

	class MultiFloorRaidExcelExtension : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetStageExcelsByDifficulty(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSTAGEEXCELSBYDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveRewardSeason(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_CANRECEIVEREWARDSEASON_OFFSET))(arg, arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* AsParcel(::MX::Data::Excel::MultiFloorRaidRewardExcel* arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::MX::Data::Excel::MultiFloorRaidRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_ASPARCEL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetSeasonSettlementEndDate(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg)
		{
			return (return (::System::DateTime*(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSEASONSETTLEMENTENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanEnterSeason(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg, ::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_CANENTERSEASON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::DateTime* GetSeasonStartDate(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg)
		{
			return (return (::System::DateTime*(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSEASONSTARTDATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRewardParcels(::MX::Data::Excel::MultiFloorRaidStageExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::MultiFloorRaidStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETREWARDPARCELS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetSeasonEndNoteLabelStarDate(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg)
		{
			return (return (::System::DateTime*(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSEASONENDNOTELABELSTARDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetSeasonEndDate(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg)
		{
			return (return (::System::DateTime*(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_GETSEASONENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanPlaySeason(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::MultiFloorRaidSeasonManageExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDEXCELEXTENSION_CANPLAYSEASON_OFFSET))(arg, arg, nullptr);
		}

	};
}

