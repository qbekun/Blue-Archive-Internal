#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaCumulativeTimeRewardResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ARENACUMULATIVETIMEREWARDRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F08F40)
#define ARENACUMULATIVETIMEREWARDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F08C90)
#define ARENACUMULATIVETIMEREWARDRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F08F50)

	inline static constexpr unsigned int ArenaCumulativeTimeRewardResponseMessage_TypeDefinitionIndex = 1989;

	class ArenaCumulativeTimeRewardResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaCumulativeTimeRewardResponse* _Response_k__BackingField; // 0x20

		::System::Void set_Response(::MX::NetworkProtocol::ArenaCumulativeTimeRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaCumulativeTimeRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENACUMULATIVETIMEREWARDRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::ArenaCumulativeTimeRewardResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::ArenaCumulativeTimeRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ARENACUMULATIVETIMEREWARDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::ArenaCumulativeTimeRewardResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::ArenaCumulativeTimeRewardResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENACUMULATIVETIMEREWARDRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

