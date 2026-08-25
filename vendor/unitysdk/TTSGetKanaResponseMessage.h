#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class TTSGetKanaResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define TTSGETKANARESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC48C40)
#define TTSGETKANARESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0xC48C80)
#define TTSGETKANARESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0xC48C90)

	inline static constexpr unsigned int TTSGetKanaResponseMessage_TypeDefinitionIndex = 8924;

	class TTSGetKanaResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::TTSGetKanaResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::TTSGetKanaResponse* arg, ::MX::NetworkProtocol::WebAPIErrorCode* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::TTSGetKanaResponse*, ::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANARESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::TTSGetKanaResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::TTSGetKanaResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANARESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::TTSGetKanaResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::TTSGetKanaResponse*, ::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANARESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

	};

