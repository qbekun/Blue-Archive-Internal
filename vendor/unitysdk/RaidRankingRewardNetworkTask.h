#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidRankingRewardRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define RAIDRANKINGREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F903D0)
#define RAIDRANKINGREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F90460)
#define RAIDRANKINGREWARDNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F90870)
#define RAIDRANKINGREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F90880)
#define RAIDRANKINGREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F90890)
#define RAIDRANKINGREWARDNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F908A0)
#define RAIDRANKINGREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F908B0)

	inline static constexpr unsigned int RaidRankingRewardNetworkTask_TypeDefinitionIndex = 2713;

	class RaidRankingRewardNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidRankingRewardRequest* _Request_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKINGREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKINGREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::NetworkProtocol::RaidRankingRewardRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::RaidRankingRewardRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKINGREWARDNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKINGREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKINGREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::RaidRankingRewardRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidRankingRewardRequest*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKINGREWARDNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRANKINGREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

