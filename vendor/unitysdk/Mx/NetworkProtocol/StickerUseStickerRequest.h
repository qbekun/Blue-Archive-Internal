#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_STICKERUSESTICKERREQUEST_SET_STICKERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4FA70)
#define MX_NETWORKPROTOCOL_STICKERUSESTICKERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FA80)
#define MX_NETWORKPROTOCOL_STICKERUSESTICKERREQUEST_GET_STICKERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4FA90)
#define MX_NETWORKPROTOCOL_STICKERUSESTICKERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FAA0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int StickerUseStickerRequest_TypeDefinitionIndex = 12152;

	class StickerUseStickerRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StickerUniqueId_k__BackingField; // 0x40

		::System::Void set_StickerUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERREQUEST_SET_STICKERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_StickerUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERREQUEST_GET_STICKERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERUSESTICKERREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

