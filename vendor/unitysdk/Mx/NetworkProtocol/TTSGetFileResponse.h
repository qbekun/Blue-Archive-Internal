#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_GET_ISFILEREADY_OFFSET UNITYSDK_OFFSET(0xF50220)
#define MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_SET_ISFILEREADY_OFFSET UNITYSDK_OFFSET(0xF50230)
#define MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50240)
#define MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50250)
#define MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_SET_TTSFILES3URI_OFFSET UNITYSDK_OFFSET(0xF50260)
#define MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_GET_TTSFILES3URI_OFFSET UNITYSDK_OFFSET(0xF50270)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TTSGetFileResponse_TypeDefinitionIndex = 12173;

	class TTSGetFileResponse : public Il2CppObject
	{
	public:
		::System::Boolean _IsFileReady_k__BackingField; // 0x50
		::System::String* _TTSFileS3Uri_k__BackingField; // 0x58

		::System::Boolean get_IsFileReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_GET_ISFILEREADY_OFFSET))(nullptr);
		}

		::System::Void set_IsFileReady(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_SET_ISFILEREADY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_TTSFileS3Uri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_SET_TTSFILES3URI_OFFSET))(str, nullptr);
		}

		::System::String* get_TTSFileS3Uri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TTSGETFILERESPONSE_GET_TTSFILES3URI_OFFSET))(nullptr);
		}

	};
}

