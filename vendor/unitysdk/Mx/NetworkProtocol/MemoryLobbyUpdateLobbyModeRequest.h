#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48140)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48150)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODEREQUEST_SET_ISMEMORYLOBBYMODE_OFFSET UNITYSDK_OFFSET(0xF48160)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODEREQUEST_GET_ISMEMORYLOBBYMODE_OFFSET UNITYSDK_OFFSET(0xF48170)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MemoryLobbyUpdateLobbyModeRequest_TypeDefinitionIndex = 11855;

	class MemoryLobbyUpdateLobbyModeRequest : public Il2CppObject
	{
	public:
		::System::Boolean _IsMemoryLobbyMode_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsMemoryLobbyMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODEREQUEST_SET_ISMEMORYLOBBYMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMemoryLobbyMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYUPDATELOBBYMODEREQUEST_GET_ISMEMORYLOBBYMODE_OFFSET))(nullptr);
		}

	};
}

