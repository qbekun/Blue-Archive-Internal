#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidCompleteListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDCOMPLETELISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BBC0)
#define RAIDCOMPLETELISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8BF20)

	inline static constexpr unsigned int RaidCompleteListResponseMessage_TypeDefinitionIndex = 2680;

	class RaidCompleteListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidCompleteListResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidCompleteListResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidCompleteListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCOMPLETELISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::RaidCompleteListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidCompleteListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCOMPLETELISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

