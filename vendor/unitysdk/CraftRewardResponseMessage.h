#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CraftRewardResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CRAFTREWARDRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F52750)
#define CRAFTREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F52760)
#define CRAFTREWARDRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F527A0)

	inline static constexpr unsigned int CraftRewardResponseMessage_TypeDefinitionIndex = 2302;

	class CraftRewardResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CraftRewardResponse* _Response_k__BackingField; // 0x20

		::MX::NetworkProtocol::CraftRewardResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CraftRewardResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CraftRewardResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CraftRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CraftRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

