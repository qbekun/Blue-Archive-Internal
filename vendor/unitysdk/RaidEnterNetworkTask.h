#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidEnterBattleRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define RAIDENTERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8DC60)
#define RAIDENTERNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F8DC70)
#define RAIDENTERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8DC80)
#define RAIDENTERNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F8DD10)
#define RAIDENTERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8DD20)
#define RAIDENTERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F8DF50)
#define RAIDENTERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8DF60)

	inline static constexpr unsigned int RaidEnterNetworkTask_TypeDefinitionIndex = 2695;

	class RaidEnterNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidEnterBattleRequest* _Request_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::RaidEnterBattleRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidEnterBattleRequest*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::RaidEnterBattleRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::RaidEnterBattleRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENTERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

