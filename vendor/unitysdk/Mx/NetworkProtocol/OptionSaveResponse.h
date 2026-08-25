#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_OPTIONSAVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B220)
#define MX_NETWORKPROTOCOL_OPTIONSAVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B230)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int OptionSaveResponse_TypeDefinitionIndex = 11990;

	class OptionSaveResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPTIONSAVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPTIONSAVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

