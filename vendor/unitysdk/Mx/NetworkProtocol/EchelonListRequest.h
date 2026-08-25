#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF424E0)
#define MX_NETWORKPROTOCOL_ECHELONLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF424F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonListRequest_TypeDefinitionIndex = 11629;

	class EchelonListRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

