#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MEMORYLOBBYLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48080)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48090)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYLISTRESPONSE_SET_MEMORYLOBBYDBS_OFFSET UNITYSDK_OFFSET(0xF480A0)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYLISTRESPONSE_GET_MEMORYLOBBYDBS_OFFSET UNITYSDK_OFFSET(0xF480B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MemoryLobbyListResponse_TypeDefinitionIndex = 11852;

	class MemoryLobbyListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MemoryLobbyDBs_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_MemoryLobbyDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYLISTRESPONSE_SET_MEMORYLOBBYDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MemoryLobbyDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYLISTRESPONSE_GET_MEMORYLOBBYDBS_OFFSET))(nullptr);
		}

	};
}

