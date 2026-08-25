#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_SET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF141D0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF141E0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_SET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF141F0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14200)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_GET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF14210)
#define MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_GET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF14220)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeApplyTemplateResponse_TypeDefinitionIndex = 11397;

	class CafeApplyTemplateResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CafeDBs_k__BackingField; // 0x50
		Il2CppObject* _FurnitureDBs_k__BackingField; // 0x58

		::System::Void set_FurnitureDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_SET_FURNITUREDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_SET_CAFEDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_FurnitureDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_GET_FURNITUREDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CafeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYTEMPLATERESPONSE_GET_CAFEDBS_OFFSET))(nullptr);
		}

	};
}

