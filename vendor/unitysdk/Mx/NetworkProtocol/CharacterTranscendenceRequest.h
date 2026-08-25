#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15A20)
#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15A30)
#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCEREQUEST_SET_TARGETCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF15A40)
#define MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCEREQUEST_GET_TARGETCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF15A50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterTranscendenceRequest_TypeDefinitionIndex = 11462;

	class CharacterTranscendenceRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterServerId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCEREQUEST_SET_TARGETCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TargetCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERTRANSCENDENCEREQUEST_GET_TARGETCHARACTERSERVERID_OFFSET))(nullptr);
		}

	};
}

