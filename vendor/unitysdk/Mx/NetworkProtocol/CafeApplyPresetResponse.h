#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_GET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF13D10)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13D20)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13D30)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_GET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF13D40)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_SET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF13D50)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_SET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF13D60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeApplyPresetResponse_TypeDefinitionIndex = 11385;

	class CafeApplyPresetResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CafeDBs_k__BackingField; // 0x50
		Il2CppObject* _FurnitureDBs_k__BackingField; // 0x58

		Il2CppObject* get_CafeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_GET_CAFEDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_FurnitureDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_GET_FURNITUREDBS_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_SET_FURNITUREDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CafeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETRESPONSE_SET_CAFEDBS_OFFSET))(arg, nullptr);
		}

	};
}

