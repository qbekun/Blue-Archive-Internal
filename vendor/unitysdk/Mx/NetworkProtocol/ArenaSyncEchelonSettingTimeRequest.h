#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11380)
#define MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11390)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaSyncEchelonSettingTimeRequest_TypeDefinitionIndex = 11303;

	class ArenaSyncEchelonSettingTimeRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASYNCECHELONSETTINGTIMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

