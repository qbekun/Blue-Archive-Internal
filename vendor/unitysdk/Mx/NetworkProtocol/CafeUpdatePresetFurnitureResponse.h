#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITURERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13C50)
#define MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITURERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13C60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeUpdatePresetFurnitureResponse_TypeDefinitionIndex = 11383;

	class CafeUpdatePresetFurnitureResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITURERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITURERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

