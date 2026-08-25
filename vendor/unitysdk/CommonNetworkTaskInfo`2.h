#pragma once
#include "unitysdk.h"

class CommonNetworkTask;
namespace MX::NetworkProtocol { class RequestPacket; }

#define COMMONNETWORKTASKINFO`2_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMMONNETWORKTASKINFO`2_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMMONNETWORKTASKINFO`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CommonNetworkTaskInfo`2_TypeDefinitionIndex = 2207;

	class CommonNetworkTaskInfo`2 : public Il2CppObject
	{
	public:
		Il2CppObject* requestPacket; // 0x0
		Il2CppObject* onResponse; // 0x0

		::System::Boolean HandleMessage(CommonNetworkTask* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(CommonNetworkTask*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMMONNETWORKTASKINFO`2_HANDLEMESSAGE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::RequestPacket* get_Request()
		{
			return ((::MX::NetworkProtocol::RequestPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONNETWORKTASKINFO`2_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMMONNETWORKTASKINFO`2_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

