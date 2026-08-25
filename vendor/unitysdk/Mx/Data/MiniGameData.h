#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class MiniGameMissionInfo&; }
namespace MX::Data { class MiniGameRhythmBgmInfo&; }
namespace MX::Data { class MiniGameRhythmBgmInfo; }
namespace MX::Data { class MiniGameMissionInfo; }
namespace MX::Data { class MiniGameRhythmData&; }
namespace FlatData { class EventContentType; }

#define MX_DATA_MINIGAMEDATA_TRYGETMINIGAMERHYTHMBYBGMID_OFFSET UNITYSDK_OFFSET(0x18FA7F0)
#define MX_DATA_MINIGAMEDATA_GETALLBGMINFOLIST_OFFSET UNITYSDK_OFFSET(0x18FA930)
#define MX_DATA_MINIGAMEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18FA940)
#define MX_DATA_MINIGAMEDATA_GETBGMINFOLIST_OFFSET UNITYSDK_OFFSET(0x18FABF0)
#define MX_DATA_MINIGAMEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18FACB0)
#define MX_DATA_MINIGAMEDATA_GET_RHYTHMDATA_OFFSET UNITYSDK_OFFSET(0x18FCD50)
#define MX_DATA_MINIGAMEDATA_TRYGETMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x18FCDA0)
#define MX_DATA_MINIGAMEDATA_HASMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0x18FCE00)
#define MX_DATA_MINIGAMEDATA_GET_MISSIONIDS_OFFSET UNITYSDK_OFFSET(0x18FCE50)
#define MX_DATA_MINIGAMEDATA_TRYGETBGMINFO_OFFSET UNITYSDK_OFFSET(0x18FCEB0)
#define MX_DATA_MINIGAMEDATA_FINDBGMINFO_OFFSET UNITYSDK_OFFSET(0x18FCFF0)
#define MX_DATA_MINIGAMEDATA_GET_MISSIONINFOS_OFFSET UNITYSDK_OFFSET(0x18FD270)
#define MX_DATA_MINIGAMEDATA_GET_OFFSET UNITYSDK_OFFSET(0x18FD2C0)
#define MX_DATA_MINIGAMEDATA_TRYGETMISSIONINFOBYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18FD340)
#define MX_DATA_MINIGAMEDATA_TRYGETMINIGAMERHYTHM_OFFSET UNITYSDK_OFFSET(0x18FD3A0)
#define MX_DATA_MINIGAMEDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x18FD400)
#define MX_DATA_MINIGAMEDATA_GET_MINIGAMEMISSIONEXCELS_OFFSET UNITYSDK_OFFSET(0x18FDD90)
#define MX_DATA_MINIGAMEDATA_TRYGETPLAYGUIDE_OFFSET UNITYSDK_OFFSET(0x18FDDE0)
#define MX_DATA_MINIGAMEDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18FAD50)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameData_TypeDefinitionIndex = 16196;

	class MiniGameData : public Il2CppObject
	{
	public:
		Il2CppObject* miniGameRhythmDic; // 0x28
		Il2CppObject* missionInfoDic; // 0x30
		Il2CppObject* missionInfoByEventId; // 0x38
		Il2CppObject* playGuideExcelDic; // 0x40
		Il2CppObject* missionExcelDic; // 0x48
		Il2CppObject* rhythmExcelDic; // 0x50
		Il2CppObject* minigameRhythmBgmDic; // 0x58
		Il2CppObject* allRhythmBgmInfo; // 0x60

		::System::Boolean TryGetMiniGameRhythmByBGMId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_TRYGETMINIGAMERHYTHMBYBGMID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAllBgmInfoList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_GETALLBGMINFOLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgmInfoList(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_GETBGMINFOLIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_RhythmData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_GET_RHYTHMDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetMissionInfo(::System::Int64 arg, ::MX::Data::MiniGameMissionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::MiniGameMissionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_TRYGETMISSIONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasMiniGameMission(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_HASMINIGAMEMISSION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MissionIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_GET_MISSIONIDS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetBgmInfo(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::MiniGameRhythmBgmInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::MiniGameRhythmBgmInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_TRYGETBGMINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Data::MiniGameRhythmBgmInfo* FindBgmInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::MiniGameRhythmBgmInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_FINDBGMINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MissionInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_GET_MISSIONINFOS_OFFSET))(nullptr);
		}

		::MX::Data::MiniGameMissionInfo* Get(::System::Int64 arg)
		{
			return (return (::MX::Data::MiniGameMissionInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_GET_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetMissionInfoByEventContentId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_TRYGETMISSIONINFOBYEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMiniGameRhythm(::System::Int64 arg, ::MX::Data::MiniGameRhythmData&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::MiniGameRhythmData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_TRYGETMINIGAMERHYTHM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_MiniGameMissionExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_GET_MINIGAMEMISSIONEXCELS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetPlayGuide(::System::Int64 arg, ::FlatData::EventContentType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::EventContentType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_TRYGETPLAYGUIDE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

	};
}

