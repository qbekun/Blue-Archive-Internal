#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MultiFloorRaidSeasonManageExcel&; }
namespace MX::Data::Excel { class MultiFloorRaidStageExcel; }
namespace MX::Data { class MultiFloorRaidStatChangeInfo&; }
namespace MX::Data::Excel { class MultiFloorRaidStageExcel&; }
namespace MX::Data::Excel { class MultiFloorRaidStatChangeExcel&; }

#define MX_DATA_MULTIFLOORRAIDDATA_GETOPENEDSEASONANDNEXTSEASONID_OFFSET UNITYSDK_OFFSET(0x1918DC0)
#define MX_DATA_MULTIFLOORRAIDDATA_GETACTIVESEASONEXCELS_OFFSET UNITYSDK_OFFSET(0x1918E70)
#define MX_DATA_MULTIFLOORRAIDDATA_TRYGETSEASONSTAGEEXCELS_OFFSET UNITYSDK_OFFSET(0x1918F20)
#define MX_DATA_MULTIFLOORRAIDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x19191B0)
#define MX_DATA_MULTIFLOORRAIDDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1919340)
#define MX_DATA_MULTIFLOORRAIDDATA_TRYGETREWARDEXCELS_OFFSET UNITYSDK_OFFSET(0x1919350)
#define MX_DATA_MULTIFLOORRAIDDATA_TRYGETSEASONMANAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x19190E0)
#define MX_DATA_MULTIFLOORRAIDDATA_GETALLSEASONEXCELS_OFFSET UNITYSDK_OFFSET(0x1919400)
#define MX_DATA_MULTIFLOORRAIDDATA_GETSTAGEBYGROUNDID_OFFSET UNITYSDK_OFFSET(0x1919470)
#define MX_DATA_MULTIFLOORRAIDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1919590)
#define MX_DATA_MULTIFLOORRAIDDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x19195A0)
#define MX_DATA_MULTIFLOORRAIDDATA_TRYGETSTATCHANGEINFO_OFFSET UNITYSDK_OFFSET(0x19195B0)
#define MX_DATA_MULTIFLOORRAIDDATA_TRYGETSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1919740)
#define MX_DATA_MULTIFLOORRAIDDATA_PREPROCESSCLIENT_OFFSET UNITYSDK_OFFSET(0x1919810)
#define MX_DATA_MULTIFLOORRAIDDATA_GETSETTLEMENTSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x1919820)
#define MX_DATA_MULTIFLOORRAIDDATA_TRYGETSTATCHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1919670)
#define MX_DATA_MULTIFLOORRAIDDATA_GETLASTSETTLEMENTFINISHEDSEASONID_OFFSET UNITYSDK_OFFSET(0x19198D0)

namespace MX::Data
{
	inline static constexpr unsigned int MultiFloorRaidData_TypeDefinitionIndex = 16276;

	class MultiFloorRaidData : public Il2CppObject
	{
	public:
		Il2CppObject* GetOpenedSeasonAndNextSeasonId(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_GETOPENEDSEASONANDNEXTSEASONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetActiveSeasonExcels(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_GETACTIVESEASONEXCELS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSeasonStageExcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_TRYGETSEASONSTAGEEXCELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRewardExcels(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_TRYGETREWARDEXCELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonManageExcel(::System::Int64 arg, ::MX::Data::Excel::MultiFloorRaidSeasonManageExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MultiFloorRaidSeasonManageExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_TRYGETSEASONMANAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllSeasonExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_GETALLSEASONEXCELS_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidStageExcel* GetStageByGroundId(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidStageExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_GETSTAGEBYGROUNDID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetStatChangeInfo(::System::Int64 arg, ::MX::Data::MultiFloorRaidStatChangeInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::MultiFloorRaidStatChangeInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_TRYGETSTATCHANGEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetStageExcel(::System::Int64 arg, ::MX::Data::Excel::MultiFloorRaidStageExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MultiFloorRaidStageExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_TRYGETSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_PREPROCESSCLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetSettlementSeasonInfos(::System::DateTime* arg)
		{
			return (return (Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_GETSETTLEMENTSEASONINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetStatChangeExcel(::System::Int64 arg, ::MX::Data::Excel::MultiFloorRaidStatChangeExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MultiFloorRaidStatChangeExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_TRYGETSTATCHANGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetLastSettlementFinishedSeasonId(::System::DateTime* arg)
		{
			return (return (::System::Int64(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTIFLOORRAIDDATA_GETLASTSETTLEMENTFINISHEDSEASONID_OFFSET))(arg, nullptr);
		}

	};
}

