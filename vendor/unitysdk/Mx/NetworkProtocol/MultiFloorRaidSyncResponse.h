#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCRESPONSE_SET_MULTIFLOORRAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4AB20)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AB30)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AB40)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCRESPONSE_GET_MULTIFLOORRAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4AB50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MultiFloorRaidSyncResponse_TypeDefinitionIndex = 11968;

	class MultiFloorRaidSyncResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MultiFloorRaidDBs_k__BackingField; // 0x50

		::System::Void set_MultiFloorRaidDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCRESPONSE_SET_MULTIFLOORRAIDDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_MultiFloorRaidDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCRESPONSE_GET_MULTIFLOORRAIDDBS_OFFSET))(nullptr);
		}

	};
}

