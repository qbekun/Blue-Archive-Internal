#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidRewardAllRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define RAIDREWARDALLNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F90B60)
#define RAIDREWARDALLNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F90E40)
#define RAIDREWARDALLNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F90E50)
#define RAIDREWARDALLNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F90E60)
#define RAIDREWARDALLNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F90EF0)
#define RAIDREWARDALLNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F90F00)
#define RAIDREWARDALLNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F90F10)

	inline static constexpr unsigned int RaidRewardAllNetworkTask_TypeDefinitionIndex = 2716;

	class RaidRewardAllNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidRewardAllRequest* _Request_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDALLNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDALLNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDALLNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDALLNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::RaidRewardAllRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::RaidRewardAllRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDALLNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDALLNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::RaidRewardAllRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidRewardAllRequest*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDALLNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

	};

