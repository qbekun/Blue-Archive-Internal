#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidRankingRewardRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define ELIMINATERAIDRANKINGREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D9E0)
#define ELIMINATERAIDRANKINGREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5D9F0)
#define ELIMINATERAIDRANKINGREWARDNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F5DE40)
#define ELIMINATERAIDRANKINGREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5DE50)
#define ELIMINATERAIDRANKINGREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5DE60)
#define ELIMINATERAIDRANKINGREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F5DEF0)
#define ELIMINATERAIDRANKINGREWARDNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F5DF00)

	inline static constexpr unsigned int EliminateRaidRankingRewardNetworkTask_TypeDefinitionIndex = 2376;

	class EliminateRaidRankingRewardNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidRankingRewardRequest* _Request_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKINGREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKINGREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::EliminateRaidRankingRewardRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EliminateRaidRankingRewardRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKINGREWARDNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKINGREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKINGREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKINGREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::EliminateRaidRankingRewardRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::EliminateRaidRankingRewardRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDRANKINGREWARDNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

	};

