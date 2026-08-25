#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MOMOTALKOUTLINEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A840)
#define MX_NETWORKPROTOCOL_MOMOTALKOUTLINEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A850)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MomoTalkOutLineRequest_TypeDefinitionIndex = 11959;

	class MomoTalkOutLineRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKOUTLINEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKOUTLINEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

