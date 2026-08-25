#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define RAIDGETBESTTEAMNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E1B0)
#define RAIDGETBESTTEAMNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET UNITYSDK_OFFSET(0x1F8E1C0)
#define RAIDGETBESTTEAMNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8E1D0)
#define RAIDGETBESTTEAMNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8E3C0)
#define RAIDGETBESTTEAMNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8E450)

	inline static constexpr unsigned int RaidGetBestTeamNetworkTask_TypeDefinitionIndex = 2697;

	class RaidGetBestTeamNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 SearchAccountId; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGETBESTTEAMNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGETBESTTEAMNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDGETBESTTEAMNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGETBESTTEAMNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDGETBESTTEAMNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

