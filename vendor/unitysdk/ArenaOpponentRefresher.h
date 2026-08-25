#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Coroutine; }
namespace MX::NetworkProtocol { class ArenaOpponentListResponse; }
namespace MX::NetworkProtocol { class ArenaEnterLobbyResponse; }
namespace MX::NetworkProtocol { class ArenaSyncEchelonSettingTimeResponse; }

#define ARENAOPPONENTREFRESHER_GET_NEEDREFRESH_OFFSET UNITYSDK_OFFSET(0x182A700)
#define ARENAOPPONENTREFRESHER_GET_CANENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x182A770)
#define ARENAOPPONENTREFRESHER_GET_TIMETOREFRESH_OFFSET UNITYSDK_OFFSET(0x182A760)
#define ARENAOPPONENTREFRESHER_GET_TIMETOBATTLE_OFFSET UNITYSDK_OFFSET(0x182A7D0)
#define ARENAOPPONENTREFRESHER_SYNC_OFFSET UNITYSDK_OFFSET(0x1829B50)
#define ARENAOPPONENTREFRESHER_SYNC_OFFSET UNITYSDK_OFFSET(0x18299E0)
#define ARENAOPPONENTREFRESHER_SYNC_OFFSET UNITYSDK_OFFSET(0x1829CB0)
#define ARENAOPPONENTREFRESHER_STOPAUTOREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0x182AC70)
#define ARENAOPPONENTREFRESHER_GETTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x182A7E0)
#define ARENAOPPONENTREFRESHER_SYNCAUTOREFRESHLIMITTIME_OFFSET UNITYSDK_OFFSET(0x182A980)
#define ARENAOPPONENTREFRESHER_SYNCECHELONSETTINGLIMITTIME_OFFSET UNITYSDK_OFFSET(0x182AB30)
#define ARENAOPPONENTREFRESHER_COUPDATEAUTOREFRESH_OFFSET UNITYSDK_OFFSET(0x182AAC0)
#define ARENAOPPONENTREFRESHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x18298F0)

	inline static constexpr unsigned int ArenaOpponentRefresher_TypeDefinitionIndex = 1309;

	class ArenaOpponentRefresher : public Il2CppObject
	{
	public:
		::System::DateTime* autoRefreshLimitTime; // 0x10
		::System::DateTime* echelonSettingLimitTime; // 0x18
		::UnityEngine::Coroutine* autoRefreshCoroutine; // 0x20

		::System::Boolean get_NeedRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_GET_NEEDREFRESH_OFFSET))(nullptr);
		}

		::System::Boolean get_CanEnterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_GET_CANENTERBATTLE_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_TimeToRefresh()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_GET_TIMETOREFRESH_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_TimeToBattle()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_GET_TIMETOBATTLE_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaOpponentListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaOpponentListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaEnterLobbyResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterLobbyResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Sync(::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaSyncEchelonSettingTimeResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_SYNC_OFFSET))(arg, nullptr);
		}

		::System::Void StopAutoRefreshTimer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_STOPAUTOREFRESHTIMER_OFFSET))(nullptr);
		}

		::System::TimeSpan* GetTimeLimit(::System::DateTime* arg)
		{
			return ((::System::TimeSpan*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_GETTIMELIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void SyncAutoRefreshLimitTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_SYNCAUTOREFRESHLIMITTIME_OFFSET))(nullptr);
		}

		::System::Void SyncEchelonSettingLimitTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_SYNCECHELONSETTINGLIMITTIME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUpdateAutoRefresh()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_COUPDATEAUTOREFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTREFRESHER_.CTOR_OFFSET))(nullptr);
		}

	};

