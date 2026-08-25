#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftShiftingRewardResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTSHIFTINGREWARDRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F56610)
#define CRAFTSHIFTINGREWARDRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F56620)
#define CRAFTSHIFTINGREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F56630)

	inline static constexpr unsigned int CraftShiftingRewardResponseMessage_TypeDefinitionIndex = 2327;

	class CraftShiftingRewardResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftShiftingRewardResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::CraftShiftingRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftShiftingRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CraftShiftingRewardResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftShiftingRewardResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftShiftingRewardResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftShiftingRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

