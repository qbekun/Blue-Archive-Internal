#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ELIMINATERAIDGETBESTTEAMNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5BD10)
#define ELIMINATERAIDGETBESTTEAMNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5BDA0)
#define ELIMINATERAIDGETBESTTEAMNETWORKTASK_SET_BOSSGROUPTORANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1F5BFC0)
#define ELIMINATERAIDGETBESTTEAMNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BFD0)
#define ELIMINATERAIDGETBESTTEAMNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5BFE0)
#define ELIMINATERAIDGETBESTTEAMNETWORKTASK_SET_SEARCHACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F5BFF0)
#define ELIMINATERAIDGETBESTTEAMNETWORKTASK_GET_BOSSGROUPTORANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1F5C000)
#define ELIMINATERAIDGETBESTTEAMNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F5C010)
#define ELIMINATERAIDGETBESTTEAMNETWORKTASK_GET_SEARCHACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F5C020)

	inline static constexpr unsigned int EliminateRaidGetBestTeamNetworkTask_TypeDefinitionIndex = 2364;

	class EliminateRaidGetBestTeamNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _SearchAccountId_k__BackingField; // 0x40
		Il2CppObject* _BossGroupToRankingPoint_k__BackingField; // 0x48

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_BossGroupToRankingPoint(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMNETWORKTASK_SET_BOSSGROUPTORANKINGPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_SearchAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMNETWORKTASK_SET_SEARCHACCOUNTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BossGroupToRankingPoint()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMNETWORKTASK_GET_BOSSGROUPTORANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Int64 get_SearchAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDGETBESTTEAMNETWORKTASK_GET_SEARCHACCOUNTID_OFFSET))(nullptr);
		}

	};

