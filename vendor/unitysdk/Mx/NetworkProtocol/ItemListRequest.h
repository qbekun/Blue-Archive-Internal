#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47580)
#define MX_NETWORKPROTOCOL_ITEMLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47590)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemListRequest_TypeDefinitionIndex = 11823;

	class ItemListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

