#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class QueuingProcessWaitingQueueResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define QUEUINGPROCESSWAITINGQUEUERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B260)
#define QUEUINGPROCESSWAITINGQUEUERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8B280)
#define QUEUINGPROCESSWAITINGQUEUERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8B290)

	inline static constexpr unsigned int QueuingProcessWaitingQueueResponseMessage_TypeDefinitionIndex = 2675;

	class QueuingProcessWaitingQueueResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::QueuingProcessWaitingQueueResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::QueuingProcessWaitingQueueResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::QueuingProcessWaitingQueueResponse*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::QueuingProcessWaitingQueueResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::QueuingProcessWaitingQueueResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGPROCESSWAITINGQUEUERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

