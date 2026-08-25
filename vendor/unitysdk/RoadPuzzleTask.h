#pragma once
#include "unitysdk.h"

class RoadPuzzleTask;
namespace MX::Data { class MiniGameRoadPuzzleData; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Core::Math { class IRandomService; }
namespace MX::Data::Excel { class MinigameRoadPuzzleRoadRoundExcel; }
class RoadPuzzleBoardSaveDB;
namespace MX::Data::Excel { class MiniGameRoadPuzzleInfoExcel; }
namespace MX::Data::Excel { class MinigameRoadPuzzleMapExcel; }
namespace FlatData { class RoadPuzzleVoiceCondition; }
class RoadPuzzleRailTileData;

#define ROADPUZZLETASK_GETPLACEMENTREWARD_OFFSET UNITYSDK_OFFSET(0x2025B70)
#define ROADPUZZLETASK_GET_TABLEDATA_OFFSET UNITYSDK_OFFSET(0x2025EA0)
#define ROADPUZZLETASK_GETROUNDREWARD_OFFSET UNITYSDK_OFFSET(0x2025EB0)
#define ROADPUZZLETASK__GETROUNDSKIPINFO_G__GETROUNDSKIPREWARD|24_2_OFFSET UNITYSDK_OFFSET(0x20260B0)
#define ROADPUZZLETASK_CURRENTROUNDDATA_OFFSET UNITYSDK_OFFSET(0x20264A0)
#define ROADPUZZLETASK_CURRENCYAMOUNT_OFFSET UNITYSDK_OFFSET(0x2026840)
#define ROADPUZZLETASK_GETADDITIONALTILEREWARD_OFFSET UNITYSDK_OFFSET(0x2026530)
#define ROADPUZZLETASK_GET_ACTIVATEDTASK_OFFSET UNITYSDK_OFFSET(0x2026900)
#define ROADPUZZLETASK_GETROUNDSKIPINFO_OFFSET UNITYSDK_OFFSET(0x2026940)
#define ROADPUZZLETASK_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x2026C30)
#define ROADPUZZLETASK_REQUESTINFO_OFFSET UNITYSDK_OFFSET(0x2026F00)
#define ROADPUZZLETASK_REQUESTSAVESTAGE_OFFSET UNITYSDK_OFFSET(0x2027010)
#define ROADPUZZLETASK_INFODATA_OFFSET UNITYSDK_OFFSET(0x2025E30)
#define ROADPUZZLETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x20272E0)
#define ROADPUZZLETASK_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0x2026B70)
#define ROADPUZZLETASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2027350)
#define ROADPUZZLETASK_CURRENTMAPDATA_OFFSET UNITYSDK_OFFSET(0x2026750)
#define ROADPUZZLETASK__GETROUNDSKIPINFO_G__GETROUNDSKIPCOST|24_1_OFFSET UNITYSDK_OFFSET(0x2026C00)
#define ROADPUZZLETASK_SET_ACTIVATEDTASK_OFFSET UNITYSDK_OFFSET(0x2027400)
#define ROADPUZZLETASK_ISTRAINNOWREADYTODEPART_OFFSET UNITYSDK_OFFSET(0x2027450)
#define ROADPUZZLETASK_REQUESTCLEARSTAGE_OFFSET UNITYSDK_OFFSET(0x20274F0)
#define ROADPUZZLETASK_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x20275A0)
#define ROADPUZZLETASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x2027700)
#define ROADPUZZLETASK_SET_TABLEDATA_OFFSET UNITYSDK_OFFSET(0x2027710)
#define ROADPUZZLETASK_REQUESTTILEPLACE_OFFSET UNITYSDK_OFFSET(0x2027720)

	inline static constexpr unsigned int RoadPuzzleTask_TypeDefinitionIndex = 3198;

	class RoadPuzzleTask : public Il2CppObject
	{
	public:
		RoadPuzzleTask* _ActivatedTask_k__BackingField; // 0x0
		::MX::Data::MiniGameRoadPuzzleData* _TableData_k__BackingField; // 0x10
		::System::Int64 EventContentId; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* EventCostParcel; // 0x20
		::System::Action* OnRefreshInfo; // 0x28
		::System::Int64 currencyId; // 0x30
		::System::Boolean prevIsTrainReadyToDepart; // 0x38
		::MX::Core::Math::IRandomService* random; // 0x40

		Il2CppObject* GetPlacementReward(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_GETPLACEMENTREWARD_OFFSET))(arg, nullptr);
		}

		::MX::Data::MiniGameRoadPuzzleData* get_TableData()
		{
			return ((::MX::Data::MiniGameRoadPuzzleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_GET_TABLEDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetRoundReward(::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_GETROUNDREWARD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* _GetRoundSkipInfo_g__GetRoundSkipReward|24_2(<>c__DisplayClass24_0&* arg)
		{
			return ((Il2CppObject*(*)(<>c__DisplayClass24_0&*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK__GETROUNDSKIPINFO_G__GETROUNDSKIPREWARD|24_2_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel* CurrentRoundData()
		{
			return ((::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_CURRENTROUNDDATA_OFFSET))(nullptr);
		}

		::System::Int64 CurrencyAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_CURRENCYAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetAdditionalTileReward(::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::Excel::MinigameRoadPuzzleRoadRoundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_GETADDITIONALTILEREWARD_OFFSET))(arg, nullptr);
		}

		RoadPuzzleTask* get_ActivatedTask()
		{
			return ((RoadPuzzleTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_GET_ACTIVATEDTASK_OFFSET))(nullptr);
		}

		Il2CppObject* GetRoundSkipInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_GETROUNDSKIPINFO_OFFSET))(nullptr);
		}

		::System::Void SetupData(RoadPuzzleBoardSaveDB* arg)
		{
			((::System::Void(*)(RoadPuzzleBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_SETUPDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RequestInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_REQUESTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void RequestSaveStage(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_REQUESTSAVESTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel* InfoData()
		{
			return ((::MX::Data::Excel::MiniGameRoadPuzzleInfoExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_INFODATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_.CTOR_OFFSET))(nullptr);
		}

		RoadPuzzleBoardSaveDB* get_SaveDB()
		{
			return ((RoadPuzzleBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_INITIALIZE_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameRoadPuzzleMapExcel* CurrentMapData()
		{
			return ((::MX::Data::Excel::MinigameRoadPuzzleMapExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_CURRENTMAPDATA_OFFSET))(nullptr);
		}

		::System::Int64 _GetRoundSkipInfo_g__GetRoundSkipCost|24_1(<>c__DisplayClass24_0&* arg)
		{
			return ((::System::Int64(*)(<>c__DisplayClass24_0&*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK__GETROUNDSKIPINFO_G__GETROUNDSKIPCOST|24_1_OFFSET))(arg, nullptr);
		}

		::System::Void set_ActivatedTask(RoadPuzzleTask* arg)
		{
			((::System::Void(*)(RoadPuzzleTask*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_SET_ACTIVATEDTASK_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTrainNowReadyToDepart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_ISTRAINNOWREADYTODEPART_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* RequestClearStage(::System::Boolean arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_REQUESTCLEARSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlayVoice(::FlatData::RoadPuzzleVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatData::RoadPuzzleVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_PLAYVOICE_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void set_TableData(::MX::Data::MiniGameRoadPuzzleData* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameRoadPuzzleData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_SET_TABLEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RequestTilePlace(RoadPuzzleRailTileData* arg, ::System::Action* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(RoadPuzzleRailTileData*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETASK_REQUESTTILEPLACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

