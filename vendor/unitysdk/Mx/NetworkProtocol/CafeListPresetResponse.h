#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_SET_CAFECOPYPRESETDBS_OFFSET UNITYSDK_OFFSET(0xF13A70)
#define MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_SET_CAFEPRESETDBS_OFFSET UNITYSDK_OFFSET(0xF13A80)
#define MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13A90)
#define MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13AA0)
#define MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_GET_CAFECOPYPRESETDBS_OFFSET UNITYSDK_OFFSET(0xF13AB0)
#define MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_GET_CAFEPRESETDBS_OFFSET UNITYSDK_OFFSET(0xF13AC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeListPresetResponse_TypeDefinitionIndex = 11377;

	class CafeListPresetResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CafePresetDBs_k__BackingField; // 0x50
		Il2CppObject* _CafeCopyPresetDBs_k__BackingField; // 0x58

		::System::Void set_CafeCopyPresetDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_SET_CAFECOPYPRESETDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CafePresetDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_SET_CAFEPRESETDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_CafeCopyPresetDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_GET_CAFECOPYPRESETDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CafePresetDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFELISTPRESETRESPONSE_GET_CAFEPRESETDBS_OFFSET))(nullptr);
		}

	};
}

