#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTRESPONSE_SET_PROTOCOLLOCKDBS_OFFSET UNITYSDK_OFFSET(0xF47FB0)
#define MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTRESPONSE_GET_PROTOCOLLOCKDBS_OFFSET UNITYSDK_OFFSET(0xF47FC0)
#define MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47FD0)
#define MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48050)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ManagementProtocolLockListResponse_TypeDefinitionIndex = 11850;

	class ManagementProtocolLockListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ProtocolLockDBs_k__BackingField; // 0x50

		::System::Void set_ProtocolLockDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTRESPONSE_SET_PROTOCOLLOCKDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ProtocolLockDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTRESPONSE_GET_PROTOCOLLOCKDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

