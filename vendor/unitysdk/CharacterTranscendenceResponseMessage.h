#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CharacterTranscendenceResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CHARACTERTRANSCENDENCERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F22E70)
#define CHARACTERTRANSCENDENCERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F23170)
#define CHARACTERTRANSCENDENCERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F23180)

	inline static constexpr unsigned int CharacterTranscendenceResponseMessage_TypeDefinitionIndex = 2147;

	class CharacterTranscendenceResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CharacterTranscendenceResponse* _Response_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CharacterTranscendenceResponse* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CharacterTranscendenceResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Response(::MX::NetworkProtocol::CharacterTranscendenceResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CharacterTranscendenceResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CharacterTranscendenceResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CharacterTranscendenceResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERTRANSCENDENCERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

