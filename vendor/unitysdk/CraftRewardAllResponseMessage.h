#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftRewardAllResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTREWARDALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F52000)
#define CRAFTREWARDALLRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F52010)
#define CRAFTREWARDALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F52050)

	inline static constexpr unsigned int CraftRewardAllResponseMessage_TypeDefinitionIndex = 2299;

	class CraftRewardAllResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftRewardAllResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::CraftRewardAllResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftRewardAllResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDALLRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftRewardAllResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftRewardAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDALLRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CraftRewardAllResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftRewardAllResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDALLRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

