#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPGACHARECRUITLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4EFE0)
#define MX_NETWORKPROTOCOL_SHOPGACHARECRUITLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4EFF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopGachaRecruitListRequest_TypeDefinitionIndex = 12122;

	class ShopGachaRecruitListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPGACHARECRUITLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPGACHARECRUITLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

