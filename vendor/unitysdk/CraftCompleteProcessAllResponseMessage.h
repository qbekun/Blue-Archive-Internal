#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftCompleteProcessAllResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F398D0)
#define CRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F398E0)
#define CRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F39920)

	inline static constexpr unsigned int CraftCompleteProcessAllResponseMessage_TypeDefinitionIndex = 2290;

	class CraftCompleteProcessAllResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftCompleteProcessAllResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftCompleteProcessAllResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftCompleteProcessAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftCompleteProcessAllResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftCompleteProcessAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::CraftCompleteProcessAllResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftCompleteProcessAllResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

