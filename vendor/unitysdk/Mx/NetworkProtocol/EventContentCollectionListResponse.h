#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTRESPONSE_GET_EVENTCONTENTUNLOCKCGDBS_OFFSET UNITYSDK_OFFSET(0xF455B0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF455C0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTRESPONSE_SET_EVENTCONTENTUNLOCKCGDBS_OFFSET UNITYSDK_OFFSET(0xF455D0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF455E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentCollectionListResponse_TypeDefinitionIndex = 11740;

	class EventContentCollectionListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _EventContentUnlockCGDBs_k__BackingField; // 0x50

		Il2CppObject* get_EventContentUnlockCGDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTRESPONSE_GET_EVENTCONTENTUNLOCKCGDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentUnlockCGDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTRESPONSE_SET_EVENTCONTENTUNLOCKCGDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

