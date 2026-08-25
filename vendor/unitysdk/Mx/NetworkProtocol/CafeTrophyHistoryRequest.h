#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFETROPHYHISTORYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF140F0)
#define MX_NETWORKPROTOCOL_CAFETROPHYHISTORYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14100)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeTrophyHistoryRequest_TypeDefinitionIndex = 11394;

	class CafeTrophyHistoryRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETROPHYHISTORYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETROPHYHISTORYREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

