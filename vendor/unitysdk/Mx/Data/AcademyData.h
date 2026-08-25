#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class AcademyTicketExcel; }
namespace MX::Data { class AcademyFavorScheduleData&; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data { class AcademyLocationData; }
namespace MX::Data::Excel { class AcademyLocationExcel&; }
namespace MX::Data { class AcademyMessageData&; }
namespace MX::Data { class AcademyFavorScheduleData; }
namespace MX::Data { class AcademyZoneData; }
namespace MX::Data { class AcademyScheduleData; }
namespace MX::Data::Excel { class AcademyZoneExcel&; }
namespace MX::Data { class AcademyScheduleData&; }

#define MX_DATA_ACADEMYDATA_GET_ZONEDATA_OFFSET UNITYSDK_OFFSET(0x1869FB0)
#define MX_DATA_ACADEMYDATA_GETPREVACADEMYTICKETEXCEL_OFFSET UNITYSDK_OFFSET(0x186A000)
#define MX_DATA_ACADEMYDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x186A0E0)
#define MX_DATA_ACADEMYDATA_TRYGETFAVORSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x186C890)
#define MX_DATA_ACADEMYDATA_TRYGETCHARACTERFAVORTAGS_OFFSET UNITYSDK_OFFSET(0x186C8F0)
#define MX_DATA_ACADEMYDATA_GET_VISITABLECHARACTERS_OFFSET UNITYSDK_OFFSET(0x186C950)
#define MX_DATA_ACADEMYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x186C960)
#define MX_DATA_ACADEMYDATA_GET_ZONEEXCELS_OFFSET UNITYSDK_OFFSET(0x186D090)
#define MX_DATA_ACADEMYDATA_FINDSCENARIOGROUPIDSBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x186D0E0)
#define MX_DATA_ACADEMYDATA_GETLOCATIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x186D330)
#define MX_DATA_ACADEMYDATA_GET_FAVORSCHEDULEDATAGROUPS_OFFSET UNITYSDK_OFFSET(0x186D480)
#define MX_DATA_ACADEMYDATA_GET_LOCATIONDATA_OFFSET UNITYSDK_OFFSET(0x186D4D0)
#define MX_DATA_ACADEMYDATA_GET_ACADEMYMESSANGERDATABYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x186D520)
#define MX_DATA_ACADEMYDATA_GETACADEMYTICKETMAX_OFFSET UNITYSDK_OFFSET(0x186D530)
#define MX_DATA_ACADEMYDATA_GET_ACADEMYENTERPARCELINFO_OFFSET UNITYSDK_OFFSET(0x186D7B0)
#define MX_DATA_ACADEMYDATA_TRYGETMESSAGEBYMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x186D8D0)
#define MX_DATA_ACADEMYDATA_GET_ACADEMYMESSANGERS_OFFSET UNITYSDK_OFFSET(0x186D930)
#define MX_DATA_ACADEMYDATA_FINDLOCATIONDATA_OFFSET UNITYSDK_OFFSET(0x186D980)
#define MX_DATA_ACADEMYDATA_TRYGETLOCATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x186D9E0)
#define MX_DATA_ACADEMYDATA_GET_FAVORSCHEDULES_OFFSET UNITYSDK_OFFSET(0x186D2E0)
#define MX_DATA_ACADEMYDATA_GET_LOCATIONEXCELS_OFFSET UNITYSDK_OFFSET(0x186DA40)
#define MX_DATA_ACADEMYDATA_GETACADEMYTICKETRANKSUMS_OFFSET UNITYSDK_OFFSET(0x186DA90)
#define MX_DATA_ACADEMYDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x186DC90)
#define MX_DATA_ACADEMYDATA_FINDZONEDATABYLOCATIONID_OFFSET UNITYSDK_OFFSET(0x186FD10)
#define MX_DATA_ACADEMYDATA_GETACADEMYTICKETEXCEL_OFFSET UNITYSDK_OFFSET(0x186FE00)
#define MX_DATA_ACADEMYDATA_TRYGETMESSANGERDATA_OFFSET UNITYSDK_OFFSET(0x186FEE0)
#define MX_DATA_ACADEMYDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x186A1F0)
#define MX_DATA_ACADEMYDATA_TRYGETMESSAGEBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x186FF40)
#define MX_DATA_ACADEMYDATA_CHECKMOMOTALKERROR_OFFSET UNITYSDK_OFFSET(0x186FFA0)
#define MX_DATA_ACADEMYDATA_FINDFAVORSCHEDULEBYSCENARIOID_OFFSET UNITYSDK_OFFSET(0x1870330)
#define MX_DATA_ACADEMYDATA_FINDZONEDATA_OFFSET UNITYSDK_OFFSET(0x1870500)
#define MX_DATA_ACADEMYDATA_FINDFAVORSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1870570)
#define MX_DATA_ACADEMYDATA_TRYGETMESSAGEGROUPBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x18705E0)
#define MX_DATA_ACADEMYDATA_GETREQUIREDEXPTOLEVELUP_OFFSET UNITYSDK_OFFSET(0x1870640)
#define MX_DATA_ACADEMYDATA_GET_FAVORSCHEDULESBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1870890)
#define MX_DATA_ACADEMYDATA_TRYGETCHARACTERFORBIDDENTAGS_OFFSET UNITYSDK_OFFSET(0x18708A0)
#define MX_DATA_ACADEMYDATA_FINDSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1870900)
#define MX_DATA_ACADEMYDATA_TRYGETZONEEXCEL_OFFSET UNITYSDK_OFFSET(0x18709D0)
#define MX_DATA_ACADEMYDATA_TRYGETCHARACTERFAVORITEMTAGS_OFFSET UNITYSDK_OFFSET(0x1870A30)
#define MX_DATA_ACADEMYDATA_GET_ACADEMYMESSANGERDATA_OFFSET UNITYSDK_OFFSET(0x1870A90)
#define MX_DATA_ACADEMYDATA_FINDMESSAGEGROUPS_OFFSET UNITYSDK_OFFSET(0x1870AA0)
#define MX_DATA_ACADEMYDATA_GETREQUIREDEXPFORLOCATIONRANK_OFFSET UNITYSDK_OFFSET(0x1870B10)
#define MX_DATA_ACADEMYDATA_TRYGETSCHEDULEDATABYGROUPID_OFFSET UNITYSDK_OFFSET(0x1870C50)
#define MX_DATA_ACADEMYDATA_GETNEXTLOCATIONRANKSUM_OFFSET UNITYSDK_OFFSET(0x1870D20)
#define MX_DATA_ACADEMYDATA_TRYGETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1870970)

namespace MX::Data
{
	inline static constexpr unsigned int AcademyData_TypeDefinitionIndex = 15947;

	class AcademyData : public Il2CppObject
	{
	public:
		Il2CppObject* characterAcademyTagExcels; // 0x28
		Il2CppObject* locationExcels; // 0x30
		Il2CppObject* zoneExcels; // 0x38
		Il2CppObject* rewardExcels; // 0x40
		Il2CppObject* favorScheduleExcels; // 0x48
		Il2CppObject* academyTicketExcels; // 0x50
		Il2CppObject* academyLocationRankExcels; // 0x58
		Il2CppObject* characterFavorTags; // 0x60
		Il2CppObject* characterFavorItemTags; // 0x68
		Il2CppObject* characterForbiddenTags; // 0x70
		Il2CppObject* academyLocations; // 0x78
		Il2CppObject* academyZones; // 0x80
		Il2CppObject* schedulesById; // 0x88
		Il2CppObject* schedulesByGroupId; // 0x90
		Il2CppObject* favorSchedulesById; // 0x98
		Il2CppObject* favorSchedulesByGroupId; // 0xA0
		Il2CppObject* academyMessangers; // 0xA8
		Il2CppObject* academyMessangersByCharacterId; // 0xB0
		Il2CppObject* academyMessangersByGroupId; // 0xB8
		Il2CppObject* academyMessangerGroupsByCharacterId; // 0xC0
		Il2CppObject* visitableCharacters; // 0xC8
		Il2CppObject* scheduleExcelIdsForValidate; // 0xD0
		Il2CppObject* favorScheduleExcelIdsForValidate; // 0xD8

		Il2CppObject* get_ZoneData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_ZONEDATA_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AcademyTicketExcel* GetPrevAcademyTicketExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::AcademyTicketExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GETPREVACADEMYTICKETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetFavorScheduleData(::System::Int64 arg, ::MX::Data::AcademyFavorScheduleData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::AcademyFavorScheduleData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETFAVORSCHEDULEDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCharacterFavorTags(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETCHARACTERFAVORTAGS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_VisitableCharacters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_VISITABLECHARACTERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ZoneExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_ZONEEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* FindScenarioGroupIdsByCharacterId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_FINDSCENARIOGROUPIDSBYCHARACTERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetLocationMaxLevel()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GETLOCATIONMAXLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_FavorScheduleDataGroups()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_FAVORSCHEDULEDATAGROUPS_OFFSET))(nullptr);
		}

		Il2CppObject* get_LocationData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_LOCATIONDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_AcademyMessangerDataByCharacterId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_ACADEMYMESSANGERDATABYCHARACTERID_OFFSET))(nullptr);
		}

		Il2CppObject* GetAcademyTicketMax(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GETACADEMYTICKETMAX_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_AcademyEnterParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_ACADEMYENTERPARCELINFO_OFFSET))(nullptr);
		}

		::System::Boolean TryGetMessageByMessageGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETMESSAGEBYMESSAGEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_AcademyMessangers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_ACADEMYMESSANGERS_OFFSET))(nullptr);
		}

		::MX::Data::AcademyLocationData* FindLocationData(::System::Int64 arg)
		{
			return (return (::MX::Data::AcademyLocationData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_FINDLOCATIONDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetLocationExcel(::System::Int64 arg, ::MX::Data::Excel::AcademyLocationExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::AcademyLocationExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETLOCATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_FavorSchedules()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_FAVORSCHEDULES_OFFSET))(nullptr);
		}

		Il2CppObject* get_LocationExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_LOCATIONEXCELS_OFFSET))(nullptr);
		}

		Il2CppObject* GetAcademyTicketRankSums()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GETACADEMYTICKETRANKSUMS_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* FindZoneDataByLocationId(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_FINDZONEDATABYLOCATIONID_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AcademyTicketExcel* GetAcademyTicketExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::AcademyTicketExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GETACADEMYTICKETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetMessangerData(::System::Int64 arg, ::MX::Data::AcademyMessageData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::AcademyMessageData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETMESSANGERDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetMessageByCharacterId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETMESSAGEBYCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CheckMomoTalkError()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_CHECKMOMOTALKERROR_OFFSET))(nullptr);
		}

		::MX::Data::AcademyFavorScheduleData* FindFavorScheduleByScenarioId(::System::Int64 arg)
		{
			return (return (::MX::Data::AcademyFavorScheduleData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_FINDFAVORSCHEDULEBYSCENARIOID_OFFSET))(arg, nullptr);
		}

		::MX::Data::AcademyZoneData* FindZoneData(::System::Int64 arg)
		{
			return (return (::MX::Data::AcademyZoneData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_FINDZONEDATA_OFFSET))(arg, nullptr);
		}

		::MX::Data::AcademyFavorScheduleData* FindFavorScheduleData(::System::Int64 arg)
		{
			return (return (::MX::Data::AcademyFavorScheduleData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_FINDFAVORSCHEDULEDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetMessageGroupByCharacterId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETMESSAGEGROUPBYCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetRequiredExpToLevelUp(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GETREQUIREDEXPTOLEVELUP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FavorSchedulesByGroupId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_FAVORSCHEDULESBYGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean TryGetcharacterForbiddenTags(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETCHARACTERFORBIDDENTAGS_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::AcademyScheduleData* FindScheduleData(::System::Int64 arg)
		{
			return (return (::MX::Data::AcademyScheduleData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_FINDSCHEDULEDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetZoneExcel(::System::Int64 arg, ::MX::Data::Excel::AcademyZoneExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::AcademyZoneExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETZONEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCharacterFavorItemTags(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETCHARACTERFAVORITEMTAGS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_AcademyMessangerData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GET_ACADEMYMESSANGERDATA_OFFSET))(nullptr);
		}

		Il2CppObject* FindMessageGroups(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_FINDMESSAGEGROUPS_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetRequiredExpForLocationRank(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GETREQUIREDEXPFORLOCATIONRANK_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetScheduleDataByGroupId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETSCHEDULEDATABYGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetNextLocationRankSum(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_GETNEXTLOCATIONRANKSUM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetScheduleData(::System::Int64 arg, ::MX::Data::AcademyScheduleData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::AcademyScheduleData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYDATA_TRYGETSCHEDULEDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

