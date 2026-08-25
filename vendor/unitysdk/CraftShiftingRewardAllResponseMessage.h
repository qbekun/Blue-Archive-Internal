#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftShiftingRewardAllResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTSHIFTINGREWARDALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F55EC0)
#define CRAFTSHIFTINGREWARDALLRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F55ED0)
#define CRAFTSHIFTINGREWARDALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F55F10)

	inline static constexpr unsigned int CraftShiftingRewardAllResponseMessage_TypeDefinitionIndex = 2324;

	class CraftShiftingRewardAllResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftShiftingRewardAllResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::CraftShiftingRewardAllResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftShiftingRewardAllResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftShiftingRewardAllResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftShiftingRewardAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDALLRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CraftShiftingRewardAllResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftShiftingRewardAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGREWARDALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

