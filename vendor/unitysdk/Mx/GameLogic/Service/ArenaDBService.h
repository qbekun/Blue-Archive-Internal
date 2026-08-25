#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class IPseudoRandomService; }
namespace MX::GameLogic::DBModel { class ArenaUserDB; }
namespace MX::GameLogic::DBModel { class ArenaHistoryDB; }
namespace MX::Logic::BattleEntities { class BattleEntityType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::DBModel { class ArenaTeamSettingDB; }
namespace MX::Logic::Data { class TeamSetting; }

#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF54F60)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_GENERATENPCRANKER_OFFSET UNITYSDK_OFFSET(0xF54F70)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_MAKENPCARENAUSERDB_OFFSET UNITYSDK_OFFSET(0xF551C0)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_GETHIGHESTDAMAGEGIVEN_OFFSET UNITYSDK_OFFSET(0xF56990)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CANRECEIVEDAILYREWARD_OFFSET UNITYSDK_OFFSET(0xF56A00)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CREATENPCARENAUSERDB_OFFSET UNITYSDK_OFFSET(0xF56B00)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CALCRELATIVERANK_OFFSET UNITYSDK_OFFSET(0xF56C90)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CALCULATECUMULATIVETIMEREWARD_OFFSET UNITYSDK_OFFSET(0xF56CE0)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_GETARENADAILYREWARDREFRESHTIME_OFFSET UNITYSDK_OFFSET(0xF56F60)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_MAKENPCARENATEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0xF553C0)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xF57030)
#define MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CALCALLOWTORECEIVEDAILYREWARDDATE_OFFSET UNITYSDK_OFFSET(0xF57070)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ArenaDBService_TypeDefinitionIndex = 12225;

	class ArenaDBService : public Il2CppObject
	{
	public:
		::System::Int32 RankListCountPerRequest; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GenerateNPCRanker(::System::DateTime* arg, ::MX::Core::Math::IPseudoRandomService* arg2, ::System::Int64 arg3, ::System::Int64 arg4, Il2CppObject* arg5, ::System::Int64 arg6, ::System::Int64 arg7)
		{
			return ((Il2CppObject*(*)(::System::DateTime*, ::MX::Core::Math::IPseudoRandomService*, ::System::Int64, ::System::Int64, Il2CppObject*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_GENERATENPCRANKER_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* MakeNPCArenaUserDB(::System::DateTime* arg, ::MX::Core::Math::IPseudoRandomService* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::System::DateTime*, ::MX::Core::Math::IPseudoRandomService*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_MAKENPCARENAUSERDB_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 GetHighestDamageGiven(::MX::GameLogic::DBModel::ArenaHistoryDB* arg, ::System::Int64 arg2, ::MX::Logic::BattleEntities::BattleEntityType* arg3, ::System::Boolean arg4)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::ArenaHistoryDB*, ::System::Int64, ::MX::Logic::BattleEntities::BattleEntityType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_GETHIGHESTDAMAGEGIVEN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean CanReceiveDailyReward(::System::DateTime* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CANRECEIVEDAILYREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* CreateNPCArenaUserDB(::System::Int64 arg, ::System::Int64 arg2, ::MX::Core::Math::IPseudoRandomService* arg3)
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::System::Int64, ::System::Int64, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CREATENPCARENAUSERDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 CalcRelativeRank(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CALCRELATIVERANK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* CalculateCumulativeTimeReward(::System::Int64 arg, ::System::Int64 arg2, ::System::DateTime* arg3, ::System::DateTime* arg4)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::System::Int64, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CALCULATECUMULATIVETIMEREWARD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::DateTime* GetArenaDailyRewardRefreshTime(::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_GETARENADAILYREWARDREFRESHTIME_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaTeamSettingDB* MakeNPCArenaTeamSettingDB(::MX::Core::Math::IPseudoRandomService* arg, ::MX::Logic::Data::TeamSetting* arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			return ((::MX::GameLogic::DBModel::ArenaTeamSettingDB*(*)(::MX::Core::Math::IPseudoRandomService*, ::MX::Logic::Data::TeamSetting*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_MAKENPCARENATEAMSETTINGDB_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::DateTime* CalcAllowToReceiveDailyRewardDate(::System::DateTime* arg, ::System::DateTime* arg2, ::System::Int64 arg3)
		{
			return ((::System::DateTime*(*)(::System::DateTime*, ::System::DateTime*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_ARENADBSERVICE_CALCALLOWTORECEIVEDAILYREWARDDATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

