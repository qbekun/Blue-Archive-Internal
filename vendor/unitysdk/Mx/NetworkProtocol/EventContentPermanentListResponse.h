#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45F30)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45F40)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTRESPONSE_GET_PERMANENTDBS_OFFSET UNITYSDK_OFFSET(0xF45F50)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTRESPONSE_SET_PERMANENTDBS_OFFSET UNITYSDK_OFFSET(0xF45F60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentPermanentListResponse_TypeDefinitionIndex = 11766;

	class EventContentPermanentListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _PermanentDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_PermanentDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTRESPONSE_GET_PERMANENTDBS_OFFSET))(nullptr);
		}

		::System::Void set_PermanentDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPERMANENTLISTRESPONSE_SET_PERMANENTDBS_OFFSET))(arg, nullptr);
		}

	};
}

