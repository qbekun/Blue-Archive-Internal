#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTRESPONSE_GET_CLEARDECKGROUPEDDBS_OFFSET UNITYSDK_OFFSET(0xF3F2A0)
#define MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3F2B0)
#define MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3F2C0)
#define MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTRESPONSE_SET_CLEARDECKGROUPEDDBS_OFFSET UNITYSDK_OFFSET(0xF3F2D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClearDeckGroupedListResponse_TypeDefinitionIndex = 11530;

	class ClearDeckGroupedListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ClearDeckGroupedDBs_k__BackingField; // 0x50

		Il2CppObject* get_ClearDeckGroupedDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTRESPONSE_GET_CLEARDECKGROUPEDDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ClearDeckGroupedDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKGROUPEDLISTRESPONSE_SET_CLEARDECKGROUPEDDBS_OFFSET))(arg, nullptr);
		}

	};
}

