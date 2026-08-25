#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameResult; }
class MinigameRhythmSummary;
namespace MX::GameLogic::DBModel { class MiniGameShootingHistoryDB; }
namespace MX::Data { class MiniGameRhythmData; }
namespace MX::GameLogic::DBModel { class MiniGameHistoryDB; }
class MiniGameShootingSummary;
namespace MX::Data { class MiniGameRhythmBgmInfo; }

#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_CREATEMINIGAMERESULT_OFFSET UNITYSDK_OFFSET(0xFB3470)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_GETCURRENTSCORE_OFFSET UNITYSDK_OFFSET(0xFB39E0)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_UPDATECOMBOSCORE_OFFSET UNITYSDK_OFFSET(0xFB39D0)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_GETRAWNOTEMAXSCORE_OFFSET UNITYSDK_OFFSET(0xFB3980)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_BUIILDMINIGAMESHOOTINGHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xFB3A40)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_GETRAWCOMBOMAXSCORE_OFFSET UNITYSDK_OFFSET(0xFB39A0)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFB3E20)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_GETORCREATEMINIGAMESHOOTINGHISTORYDB_OFFSET UNITYSDK_OFFSET(0xFB3E30)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_BUIILDMINIGAMESHOOTINGHISTORYDB_OFFSET UNITYSDK_OFFSET(0xFB3DB0)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_ISVALIDRHYTHMSTAGE_OFFSET UNITYSDK_OFFSET(0xFB3FC0)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_ISSUMMARYVAILD_OFFSET UNITYSDK_OFFSET(0xFB45A0)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_ISOPENRHYTHMSTAGE_OFFSET UNITYSDK_OFFSET(0xFB47D0)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_CREATEMINIGAMEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xFB4AA0)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_ISVALIDSHOOTINGSTAGE_OFFSET UNITYSDK_OFFSET(0xFB4C50)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_UPDATENOTESCORE_OFFSET UNITYSDK_OFFSET(0xFB39C0)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_LESSTHANLASTPLAYTIME_OFFSET UNITYSDK_OFFSET(0xFB4730)
#define MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_SAMENOTECOUNT_OFFSET UNITYSDK_OFFSET(0xFB41C0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int MiniGameService_TypeDefinitionIndex = 12369;

	class MiniGameService : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameResult* CreateMiniGameResult(::System::Int64 arg, ::System::Int64 arg2, MinigameRhythmSummary* arg3)
		{
			return ((::MX::GameLogic::DBModel::MiniGameResult*(*)(::System::Int64, ::System::Int64, MinigameRhythmSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_CREATEMINIGAMERESULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 GetCurrentScore(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Int32 arg6)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_GETCURRENTSCORE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void UpdateComboScore(int64_t&* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(int64_t&*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_UPDATECOMBOSCORE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetRawNoteMaxScore(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_GETRAWNOTEMAXSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void BuiildMiniGameShootingHistoryDBs(::System::DateTime* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::DateTime*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_BUIILDMINIGAMESHOOTINGHISTORYDBS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetRawComboMaxScore(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_GETRAWCOMBOMAXSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameShootingHistoryDB* GetOrCreateMiniGameShootingHistoryDB(::System::DateTime* arg, ::System::Int64 arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			return ((::MX::GameLogic::DBModel::MiniGameShootingHistoryDB*(*)(::System::DateTime*, ::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_GETORCREATEMINIGAMESHOOTINGHISTORYDB_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void BuiildMiniGameShootingHistoryDB(::System::DateTime* arg, ::MX::GameLogic::DBModel::MiniGameShootingHistoryDB* arg2)
		{
			((::System::Void(*)(::System::DateTime*, ::MX::GameLogic::DBModel::MiniGameShootingHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_BUIILDMINIGAMESHOOTINGHISTORYDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsValidRhythmStage(::System::Int64 arg, ::System::Int64 arg2, ::System::DateTime* arg3, Il2CppObject* arg4, ::MX::GameLogic::DBModel::MiniGameResult* arg5, MinigameRhythmSummary* arg6)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::DateTime*, Il2CppObject*, ::MX::GameLogic::DBModel::MiniGameResult*, MinigameRhythmSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_ISVALIDRHYTHMSTAGE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean IsSummaryVaild(::MX::GameLogic::DBModel::MiniGameResult* arg, MinigameRhythmSummary* arg2, ::MX::Data::MiniGameRhythmData* arg3)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MiniGameResult*, MinigameRhythmSummary*, ::MX::Data::MiniGameRhythmData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_ISSUMMARYVAILD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsOpenRhythmStage(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_ISOPENRHYTHMSTAGE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameHistoryDB* CreateMiniGameHistoryDB(::System::DateTime* arg, ::MX::GameLogic::DBModel::MiniGameResult* arg2, Il2CppObject* arg3)
		{
			return ((::MX::GameLogic::DBModel::MiniGameHistoryDB*(*)(::System::DateTime*, ::MX::GameLogic::DBModel::MiniGameResult*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_CREATEMINIGAMEHISTORYDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsValidShootingStage(MiniGameShootingSummary* arg, ::System::String&* arg2)
		{
			return ((::System::Boolean(*)(MiniGameShootingSummary*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_ISVALIDSHOOTINGSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateNoteScore(int64_t&* arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(int64_t&*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_UPDATENOTESCORE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean LessThanLastPlayTime(::System::DateTime* arg, ::MX::GameLogic::DBModel::MiniGameHistoryDB* arg2, ::MX::Data::MiniGameRhythmBgmInfo* arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::MX::GameLogic::DBModel::MiniGameHistoryDB*, ::MX::Data::MiniGameRhythmBgmInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_LESSTHANLASTPLAYTIME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean SameNoteCount(::MX::GameLogic::DBModel::MiniGameResult* arg, MinigameRhythmSummary* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MiniGameResult*, MinigameRhythmSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_MINIGAMESERVICE_SAMENOTECOUNT_OFFSET))(arg, arg2, nullptr);
		}

	};
}

