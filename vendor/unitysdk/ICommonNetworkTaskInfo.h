#pragma once
#include "unitysdk.h"

class CommonNetworkTask;
namespace MX::NetworkProtocol { class RequestPacket; }

#define ICOMMONNETWORKTASKINFO_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICOMMONNETWORKTASKINFO_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ICommonNetworkTaskInfo_TypeDefinitionIndex = 2206;

	class ICommonNetworkTaskInfo : public Il2CppObject
	{
	public:
		::System::Boolean HandleMessage(CommonNetworkTask* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(CommonNetworkTask*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ICOMMONNETWORKTASKINFO_HANDLEMESSAGE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::RequestPacket* get_Request()
		{
			return ((::MX::NetworkProtocol::RequestPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOMMONNETWORKTASKINFO_GET_REQUEST_OFFSET))(nullptr);
		}

	};

