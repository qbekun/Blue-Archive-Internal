#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINREQUEST_SET_MEMORYLOBBYID_OFFSET UNITYSDK_OFFSET(0xF480C0)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF480D0)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINREQUEST_GET_MEMORYLOBBYID_OFFSET UNITYSDK_OFFSET(0xF480E0)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF480F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MemoryLobbySetMainRequest_TypeDefinitionIndex = 11853;

	class MemoryLobbySetMainRequest : public Il2CppObject
	{
	public:
		::System::Int64 _MemoryLobbyId_k__BackingField; // 0x40

		::System::Void set_MemoryLobbyId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINREQUEST_SET_MEMORYLOBBYID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_MemoryLobbyId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINREQUEST_GET_MEMORYLOBBYID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

