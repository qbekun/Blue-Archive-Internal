#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDSEARCHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C8D0)
#define MX_NETWORKPROTOCOL_RAIDSEARCHRESPONSE_GET_RAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4C8E0)
#define MX_NETWORKPROTOCOL_RAIDSEARCHRESPONSE_SET_RAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4C8F0)
#define MX_NETWORKPROTOCOL_RAIDSEARCHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C900)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidSearchResponse_TypeDefinitionIndex = 12024;

	class RaidSearchResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _RaidDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_RaidDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHRESPONSE_GET_RAIDDBS_OFFSET))(nullptr);
		}

		::System::Void set_RaidDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHRESPONSE_SET_RAIDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSEARCHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

