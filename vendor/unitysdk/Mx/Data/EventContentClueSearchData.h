#pragma once
#include "../../unitysdk.h"

namespace MX::Data::DataModel { class EventContentClueSearchRewardInfo&; }
namespace MX::Data::DataModel { class EventContentClueSearchRoundInfo&; }
namespace MX::Data::Excel { class EventContentClueSearchExcel&; }
namespace MX::Data::DataModel { class EventContentClueInfo&; }

#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDREWARDINFOSERVER_OFFSET UNITYSDK_OFFSET(0x18BE2D0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__REWARDINFODICT_OFFSET UNITYSDK_OFFSET(0x18BE550)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDINFO_OFFSET UNITYSDK_OFFSET(0x18BE380)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18BE5C0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDINFOSERVER_OFFSET UNITYSDK_OFFSET(0x18BEB10)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_INITIALIZESERVER_OFFSET UNITYSDK_OFFSET(0x18BEBB0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHEXCEL_OFFSET UNITYSDK_OFFSET(0x18BFE10)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETLOOPROUNDBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18BE560)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDREWARDINFO_OFFSET UNITYSDK_OFFSET(0x18BFEF0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHCLUEINFOSERVER_OFFSET UNITYSDK_OFFSET(0x18C0170)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDINFOFORCLIENT_OFFSET UNITYSDK_OFFSET(0x18C0210)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__ROUNDINFODICT_OFFSET UNITYSDK_OFFSET(0x18C06B0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__CLUEINFODICT_OFFSET UNITYSDK_OFFSET(0x18C06C0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__CLUESEARCHEXCELDICT_OFFSET UNITYSDK_OFFSET(0x18C06D0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHCLUEINFO_OFFSET UNITYSDK_OFFSET(0x18C06E0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__LOOPROUNDBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18C0800)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x18C0810)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__ROUNDINFODICT_OFFSET UNITYSDK_OFFSET(0x18C1ED0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__LOOPROUNDBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18C1EE0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__REWARDINFODICT_OFFSET UNITYSDK_OFFSET(0x18C1EF0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18C1F00)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHEXCELSERVER_OFFSET UNITYSDK_OFFSET(0x18C20C0)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__CLUEINFODICT_OFFSET UNITYSDK_OFFSET(0x18C2120)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_GETALLCLUESEARCHEXCELSSERVER_OFFSET UNITYSDK_OFFSET(0x18C2130)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHCLUEINFOFORCLIENT_OFFSET UNITYSDK_OFFSET(0x18C2180)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__CLUESEARCHEXCELDICT_OFFSET UNITYSDK_OFFSET(0x18C2620)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18BE660)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_GETALLCLUESEARCHEXCELS_OFFSET UNITYSDK_OFFSET(0x18C2630)
#define MX_DATA_EVENTCONTENTCLUESEARCHDATA_PREPAREINITIALDATASERVER_OFFSET UNITYSDK_OFFSET(0x18BEC50)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentClueSearchData_TypeDefinitionIndex = 16069;

	class EventContentClueSearchData : public Il2CppObject
	{
	public:
		Il2CppObject* __loopRoundByEventContentId_k__BackingField; // 0x28
		Il2CppObject* __clueSearchExcelDict_k__BackingField; // 0x30
		Il2CppObject* __clueInfoDict_k__BackingField; // 0x38
		Il2CppObject* __roundInfoDict_k__BackingField; // 0x40
		Il2CppObject* __rewardInfoDict_k__BackingField; // 0x48

		::System::Boolean TryGetClueSearchRoundRewardInfoServer(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::DataModel::EventContentClueSearchRewardInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::DataModel::EventContentClueSearchRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDREWARDINFOSERVER_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get__rewardInfoDict()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__REWARDINFODICT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetClueSearchRoundInfo(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::DataModel::EventContentClueSearchRoundInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::DataModel::EventContentClueSearchRoundInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetClueSearchRoundInfoServer(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::DataModel::EventContentClueSearchRoundInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::DataModel::EventContentClueSearchRoundInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDINFOSERVER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_INITIALIZESERVER_OFFSET))(nullptr);
		}

		::System::Boolean TryGetClueSearchExcel(::System::Int64 arg, ::MX::Data::Excel::EventContentClueSearchExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::EventContentClueSearchExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLoopRoundByEventContentId(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETLOOPROUNDBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetClueSearchRoundRewardInfo(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::DataModel::EventContentClueSearchRewardInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::DataModel::EventContentClueSearchRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDREWARDINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetClueSearchClueInfoServer(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::DataModel::EventContentClueInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::DataModel::EventContentClueInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHCLUEINFOSERVER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetClueSearchRoundInfoForClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHROUNDINFOFORCLIENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get__roundInfoDict()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__ROUNDINFODICT_OFFSET))(nullptr);
		}

		::System::Void set__clueInfoDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__CLUEINFODICT_OFFSET))(arg, nullptr);
		}

		::System::Void set__clueSearchExcelDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__CLUESEARCHEXCELDICT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetClueSearchClueInfo(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::DataModel::EventContentClueInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::DataModel::EventContentClueInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHCLUEINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get__loopRoundByEventContentId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__LOOPROUNDBYEVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void set__roundInfoDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__ROUNDINFODICT_OFFSET))(arg, nullptr);
		}

		::System::Void set__loopRoundByEventContentId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__LOOPROUNDBYEVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set__rewardInfoDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_SET__REWARDINFODICT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetClueSearchExcelServer(::System::Int64 arg, ::MX::Data::Excel::EventContentClueSearchExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::EventContentClueSearchExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHEXCELSERVER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get__clueInfoDict()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__CLUEINFODICT_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllClueSearchExcelsServer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_GETALLCLUESEARCHEXCELSSERVER_OFFSET))(nullptr);
		}

		::System::Boolean TryGetClueSearchClueInfoForClient(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_TRYGETCLUESEARCHCLUEINFOFORCLIENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get__clueSearchExcelDict()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_GET__CLUESEARCHEXCELDICT_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllClueSearchExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_GETALLCLUESEARCHEXCELS_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialDataServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCLUESEARCHDATA_PREPAREINITIALDATASERVER_OFFSET))(nullptr);
		}

	};
}

