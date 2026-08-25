#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEUPDATECOPYPRESETFURNITURERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF145B0)
#define MX_NETWORKPROTOCOL_CAFEUPDATECOPYPRESETFURNITURERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF145C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeUpdateCopyPresetFurnitureResponse_TypeDefinitionIndex = 11407;

	class CafeUpdateCopyPresetFurnitureResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATECOPYPRESETFURNITURERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATECOPYPRESETFURNITURERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

