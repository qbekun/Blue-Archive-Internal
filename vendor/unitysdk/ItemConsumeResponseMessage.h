#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ItemConsumeResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ITEMCONSUMERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F7C850)
#define ITEMCONSUMERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C860)

	inline static constexpr unsigned int ItemConsumeResponseMessage_TypeDefinitionIndex = 2585;

	class ItemConsumeResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ItemConsumeResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::ItemConsumeResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ItemConsumeResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ItemConsumeResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ItemConsumeResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

