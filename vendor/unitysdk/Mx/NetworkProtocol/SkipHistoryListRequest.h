#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SKIPHISTORYLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F810)
#define MX_NETWORKPROTOCOL_SKIPHISTORYLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F820)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SkipHistoryListRequest_TypeDefinitionIndex = 12142;

	class SkipHistoryListRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SKIPHISTORYLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

