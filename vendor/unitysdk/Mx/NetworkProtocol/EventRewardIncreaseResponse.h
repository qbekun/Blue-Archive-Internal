#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTREWARDINCREASERESPONSE_GET_EVENTREWARDINCREASEDBS_OFFSET UNITYSDK_OFFSET(0xF46850)
#define MX_NETWORKPROTOCOL_EVENTREWARDINCREASERESPONSE_SET_EVENTREWARDINCREASEDBS_OFFSET UNITYSDK_OFFSET(0xF46860)
#define MX_NETWORKPROTOCOL_EVENTREWARDINCREASERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46870)
#define MX_NETWORKPROTOCOL_EVENTREWARDINCREASERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46880)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventRewardIncreaseResponse_TypeDefinitionIndex = 11794;

	class EventRewardIncreaseResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _EventRewardIncreaseDBs_k__BackingField; // 0x50

		Il2CppObject* get_EventRewardIncreaseDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTREWARDINCREASERESPONSE_GET_EVENTREWARDINCREASEDBS_OFFSET))(nullptr);
		}

		::System::Void set_EventRewardIncreaseDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTREWARDINCREASERESPONSE_SET_EVENTREWARDINCREASEDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTREWARDINCREASERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTREWARDINCREASERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

