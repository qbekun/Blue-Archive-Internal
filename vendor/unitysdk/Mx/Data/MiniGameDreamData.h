#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameDreamInfoExcel&; }
namespace FlatData { class DreamMakerParameterType; }
namespace MX::Data::Excel { class MiniGameDreamParameterExcel&; }
namespace MX::Data { class MiniGameDreamMakerScheduleExcelInfo&; }
namespace MX::Data { class MiniGameDreamEndingExcelInfo&; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define MX_DATA_MINIGAMEDREAMDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1901190)
#define MX_DATA_MINIGAMEDREAMDATA_GET_DREAMINFOEXCELS_OFFSET UNITYSDK_OFFSET(0x19012F0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1901360)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCELSBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1901450)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERTIMELINEEXCELSBYEVENTCONTENTIDANDDAY_OFFSET UNITYSDK_OFFSET(0x19014F0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCEL_OFFSET UNITYSDK_OFFSET(0x19015E0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCEL_OFFSET UNITYSDK_OFFSET(0x19016D0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERSCHEDULEEXCELINFO_OFFSET UNITYSDK_OFFSET(0x19017C0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERSCHEDULEEXCELINFOSBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1901960)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERENDINGEXCELINFOSBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1902060)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERENDINGEXCELINFO_OFFSET UNITYSDK_OFFSET(0x1902710)
#define MX_DATA_MINIGAMEDREAMDATA_GETDREAMMAKERDAILYPOINTREWARD_OFFSET UNITYSDK_OFFSET(0x19028B0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERCOLLECTIONSCENARIOEXCELLIST_OFFSET UNITYSDK_OFFSET(0x1902DE0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETREPLAYSCENARIOEXCELLIST_OFFSET UNITYSDK_OFFSET(0x1902EA0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERVOICEEXCELLIST_OFFSET UNITYSDK_OFFSET(0x1902F60)
#define MX_DATA_MINIGAMEDREAMDATA_ISDREAMMAKERSCENARIO_OFFSET UNITYSDK_OFFSET(0x1903020)
#define MX_DATA_MINIGAMEDREAMDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1903070)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERINFOEXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x1901370)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCELSBYEVENTCONTENTIDCLIENT_OFFSET UNITYSDK_OFFSET(0x1901460)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERTIMELINEEXCELSBYEVENTCONTENTIDANDDAYCLIENT_OFFSET UNITYSDK_OFFSET(0x1901500)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x19015F0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCELCLIENT_OFFSET UNITYSDK_OFFSET(0x19016E0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERSCHEDULEEXCELINFOCLIENT_OFFSET UNITYSDK_OFFSET(0x19017D0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERSCHEDULEEXCELINFOSBYEVENTCONTENTIDCLIENT_OFFSET UNITYSDK_OFFSET(0x1901970)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERENDINGEXCELINFOSBYEVENTCONTENTIDCLIENT_OFFSET UNITYSDK_OFFSET(0x1902070)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERENDINGEXCELINFOCLIENT_OFFSET UNITYSDK_OFFSET(0x1902720)
#define MX_DATA_MINIGAMEDREAMDATA_GETDREAMMAKERDAILYPOINTREWARDCLIENT_OFFSET UNITYSDK_OFFSET(0x19028C0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERCOLLECTIONSCENARIOEXCELLISTCLIENT_OFFSET UNITYSDK_OFFSET(0x1902DF0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERREPLAYSCENARIOEXCELLISTCLIENT_OFFSET UNITYSDK_OFFSET(0x1902EB0)
#define MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERVOICEEXCELLISTCLIENT_OFFSET UNITYSDK_OFFSET(0x1902F70)
#define MX_DATA_MINIGAMEDREAMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1903F20)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameDreamData_TypeDefinitionIndex = 16209;

	class MiniGameDreamData : public Il2CppObject
	{
	public:
		Il2CppObject* dreamScenarioGroupIds; // 0x28

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_DreamInfoExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_GET_DREAMINFOEXCELS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetDreamMakerInfoExcel(::System::Int64 arg, ::MX::Data::Excel::MiniGameDreamInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MiniGameDreamInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerParameterExcelsByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCELSBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerTimelineExcelsByEventContentIdAndDay(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERTIMELINEEXCELSBYEVENTCONTENTIDANDDAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerParameterExcel(::System::Int64 arg, ::FlatData::DreamMakerParameterType* arg, ::MX::Data::Excel::MiniGameDreamParameterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::DreamMakerParameterType*, ::MX::Data::Excel::MiniGameDreamParameterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerParameterExcel(::System::Int64 arg, ::MX::Data::Excel::MiniGameDreamParameterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MiniGameDreamParameterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerScheduleExcelInfo(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::MiniGameDreamMakerScheduleExcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::MiniGameDreamMakerScheduleExcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERSCHEDULEEXCELINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerScheduleExcelInfosByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERSCHEDULEEXCELINFOSBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerEndingExcelInfosByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERENDINGEXCELINFOSBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerEndingExcelInfo(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::MiniGameDreamEndingExcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::MiniGameDreamEndingExcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERENDINGEXCELINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetDreamMakerDailyPointReward(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_GETDREAMMAKERDAILYPOINTREWARD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerCollectionScenarioExcelList(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERCOLLECTIONSCENARIOEXCELLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetReplayScenarioExcelList(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETREPLAYSCENARIOEXCELLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerVoiceExcelList(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERVOICEEXCELLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDreamMakerScenario(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_ISDREAMMAKERSCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetDreamMakerInfoExcelClient(::System::Int64 arg, ::MX::Data::Excel::MiniGameDreamInfoExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MiniGameDreamInfoExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERINFOEXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerParameterExcelsByEventContentIdClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCELSBYEVENTCONTENTIDCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerTimelineExcelsByEventContentIdAndDayClient(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERTIMELINEEXCELSBYEVENTCONTENTIDANDDAYCLIENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerParameterExcelClient(::System::Int64 arg, ::FlatData::DreamMakerParameterType* arg, ::MX::Data::Excel::MiniGameDreamParameterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::DreamMakerParameterType*, ::MX::Data::Excel::MiniGameDreamParameterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCELCLIENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerParameterExcelClient(::System::Int64 arg, ::MX::Data::Excel::MiniGameDreamParameterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::MiniGameDreamParameterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERPARAMETEREXCELCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerScheduleExcelInfoClient(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::MiniGameDreamMakerScheduleExcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::MiniGameDreamMakerScheduleExcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERSCHEDULEEXCELINFOCLIENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerScheduleExcelInfosByEventContentIdClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERSCHEDULEEXCELINFOSBYEVENTCONTENTIDCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerEndingExcelInfosByEventContentIdClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERENDINGEXCELINFOSBYEVENTCONTENTIDCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerEndingExcelInfoClient(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::MiniGameDreamEndingExcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::MiniGameDreamEndingExcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERENDINGEXCELINFOCLIENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetDreamMakerDailyPointRewardClient(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_GETDREAMMAKERDAILYPOINTREWARDCLIENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerCollectionScenarioExcelListClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERCOLLECTIONSCENARIOEXCELLISTCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerReplayScenarioExcelListClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERREPLAYSCENARIOEXCELLISTCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDreamMakerVoiceExcelListClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_TRYGETDREAMMAKERVOICEEXCELLISTCLIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDREAMDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

