#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaDailyRewardResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ARENADAILYREWARDRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F095B0)
#define ARENADAILYREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F09240)
#define ARENADAILYREWARDRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F095C0)

	inline static constexpr unsigned int ArenaDailyRewardResponseMessage_TypeDefinitionIndex = 1992;

	class ArenaDailyRewardResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaDailyRewardResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::ArenaDailyRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaDailyRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENADAILYREWARDRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ArenaDailyRewardResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ArenaDailyRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENADAILYREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::ArenaDailyRewardResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ArenaDailyRewardResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENADAILYREWARDRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

