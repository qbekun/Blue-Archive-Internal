#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_STICKERLOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F9D0)
#define MX_NETWORKPROTOCOL_STICKERLOBBYREQUEST_GET_ACQUIRESTICKERUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF4F9E0)
#define MX_NETWORKPROTOCOL_STICKERLOBBYREQUEST_SET_ACQUIRESTICKERUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF4F9F0)
#define MX_NETWORKPROTOCOL_STICKERLOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FA00)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int StickerLobbyRequest_TypeDefinitionIndex = 12150;

	class StickerLobbyRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _AcquireStickerUniqueIds_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_AcquireStickerUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYREQUEST_GET_ACQUIRESTICKERUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_AcquireStickerUniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYREQUEST_SET_ACQUIRESTICKERUNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_STICKERLOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

