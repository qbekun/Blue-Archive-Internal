#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftShiftingCompleteProcessAllResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F550F0)
#define CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F55100)
#define CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F55110)

	inline static constexpr unsigned int CraftShiftingCompleteProcessAllResponseMessage_TypeDefinitionIndex = 2318;

	class CraftShiftingCompleteProcessAllResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftShiftingCompleteProcessAllResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftShiftingCompleteProcessAllResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftShiftingCompleteProcessAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CraftShiftingCompleteProcessAllResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftShiftingCompleteProcessAllResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftShiftingCompleteProcessAllResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftShiftingCompleteProcessAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

