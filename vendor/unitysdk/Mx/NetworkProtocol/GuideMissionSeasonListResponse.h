#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTRESPONSE_SET_GUIDEMISSIONSEASONDBS_OFFSET UNITYSDK_OFFSET(0xF4A740)
#define MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A750)
#define MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A760)
#define MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTRESPONSE_GET_GUIDEMISSIONSEASONDBS_OFFSET UNITYSDK_OFFSET(0xF4A770)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int GuideMissionSeasonListResponse_TypeDefinitionIndex = 11954;

	class GuideMissionSeasonListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _GuideMissionSeasonDBs_k__BackingField; // 0x50

		::System::Void set_GuideMissionSeasonDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTRESPONSE_SET_GUIDEMISSIONSEASONDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_GuideMissionSeasonDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTRESPONSE_GET_GUIDEMISSIONSEASONDBS_OFFSET))(nullptr);
		}

	};
}

