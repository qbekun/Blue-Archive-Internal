#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTRESPONSE_SET_BANNERDBS_OFFSET UNITYSDK_OFFSET(0xF47EE0)
#define MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47EF0)
#define MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47F70)
#define MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTRESPONSE_GET_BANNERDBS_OFFSET UNITYSDK_OFFSET(0xF47F80)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ManagementBannerListResponse_TypeDefinitionIndex = 11848;

	class ManagementBannerListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _BannerDBs_k__BackingField; // 0x50

		::System::Void set_BannerDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTRESPONSE_SET_BANNERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_BannerDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTRESPONSE_GET_BANNERDBS_OFFSET))(nullptr);
		}

	};
}

