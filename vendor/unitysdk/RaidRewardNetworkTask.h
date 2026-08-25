#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidRewardRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define RAIDREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F91210)
#define RAIDREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F91710)
#define RAIDREWARDNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F91720)
#define RAIDREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F91730)
#define RAIDREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F91740)
#define RAIDREWARDNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F91750)
#define RAIDREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F91760)

	inline static constexpr unsigned int RaidRewardNetworkTask_TypeDefinitionIndex = 2720;

	class RaidRewardNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidRewardRequest* _Request_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::RaidRewardRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidRewardRequest*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::RaidRewardRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::RaidRewardRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

