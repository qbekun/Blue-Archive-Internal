#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ItemBulkConsumeResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ITEMBULKCONSUMERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C170)
#define ITEMBULKCONSUMERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F7C1B0)

	inline static constexpr unsigned int ItemBulkConsumeResponseMessage_TypeDefinitionIndex = 2582;

	class ItemBulkConsumeResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ItemBulkConsumeResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ItemBulkConsumeResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ItemBulkConsumeResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMBULKCONSUMERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::ItemBulkConsumeResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ItemBulkConsumeResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMBULKCONSUMERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

