#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF422C0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF422D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftShiftingRewardAllRequest_TypeDefinitionIndex = 11621;

	class CraftShiftingRewardAllRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

