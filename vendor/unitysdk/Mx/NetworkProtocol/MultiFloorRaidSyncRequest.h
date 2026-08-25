#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AAE0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF4AAF0)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF4AB00)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AB10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MultiFloorRaidSyncRequest_TypeDefinitionIndex = 11967;

	class MultiFloorRaidSyncRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _SeasonId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SeasonId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDSYNCREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

