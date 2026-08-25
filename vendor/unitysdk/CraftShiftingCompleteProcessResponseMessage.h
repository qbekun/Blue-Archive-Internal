#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftShiftingCompleteProcessResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTSHIFTINGCOMPLETEPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F55840)
#define CRAFTSHIFTINGCOMPLETEPROCESSRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F55850)
#define CRAFTSHIFTINGCOMPLETEPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F55890)

	inline static constexpr unsigned int CraftShiftingCompleteProcessResponseMessage_TypeDefinitionIndex = 2321;

	class CraftShiftingCompleteProcessResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftShiftingCompleteProcessResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftShiftingCompleteProcessResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftShiftingCompleteProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftShiftingCompleteProcessResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftShiftingCompleteProcessResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::CraftShiftingCompleteProcessResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftShiftingCompleteProcessResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

