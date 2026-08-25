#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENARANKLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11240)
#define MX_NETWORKPROTOCOL_ARENARANKLISTRESPONSE_SET_TOPRANKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF11250)
#define MX_NETWORKPROTOCOL_ARENARANKLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11260)
#define MX_NETWORKPROTOCOL_ARENARANKLISTRESPONSE_GET_TOPRANKEDUSERDBS_OFFSET UNITYSDK_OFFSET(0xF11270)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaRankListResponse_TypeDefinitionIndex = 11298;

	class ArenaRankListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _TopRankedUserDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_TopRankedUserDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTRESPONSE_SET_TOPRANKEDUSERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_TopRankedUserDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTRESPONSE_GET_TOPRANKEDUSERDBS_OFFSET))(nullptr);
		}

	};
}

