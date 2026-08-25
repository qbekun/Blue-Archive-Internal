#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PROOFTOKENREQUESTQUESTIONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B4E0)
#define MX_NETWORKPROTOCOL_PROOFTOKENREQUESTQUESTIONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B4F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ProofTokenRequestQuestionResponse_TypeDefinitionIndex = 12000;

	class ProofTokenRequestQuestionResponse : public Il2CppObject
	{
	public:
		::System::Int64 Hint; // 0x50
		::System::String* Question; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PROOFTOKENREQUESTQUESTIONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PROOFTOKENREQUESTQUESTIONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

