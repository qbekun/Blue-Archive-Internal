#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidDetailResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDDETAILRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C880)
#define RAIDDETAILRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F8CC50)

	inline static constexpr unsigned int RaidDetailResponseMessage_TypeDefinitionIndex = 2686;

	class RaidDetailResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidDetailResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidDetailResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidDetailResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::RaidDetailResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidDetailResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDDETAILRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

