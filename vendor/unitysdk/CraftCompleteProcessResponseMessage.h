#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftCompleteProcessResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTCOMPLETEPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F50FC0)
#define CRAFTCOMPLETEPROCESSRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F50FD0)
#define CRAFTCOMPLETEPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F51010)

	inline static constexpr unsigned int CraftCompleteProcessResponseMessage_TypeDefinitionIndex = 2293;

	class CraftCompleteProcessResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftCompleteProcessResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftCompleteProcessResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftCompleteProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftCompleteProcessResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftCompleteProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::CraftCompleteProcessResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftCompleteProcessResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

