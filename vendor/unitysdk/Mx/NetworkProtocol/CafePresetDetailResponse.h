#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF144F0)
#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILRESPONSE_GET_DEPLOYCOUNTBYFURNITUREID_OFFSET UNITYSDK_OFFSET(0xF14500)
#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14510)
#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILRESPONSE_SET_DEPLOYCOUNTBYFURNITUREID_OFFSET UNITYSDK_OFFSET(0xF14520)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafePresetDetailResponse_TypeDefinitionIndex = 11405;

	class CafePresetDetailResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _DeployCountByFurnitureId_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_DeployCountByFurnitureId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILRESPONSE_GET_DEPLOYCOUNTBYFURNITUREID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DeployCountByFurnitureId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILRESPONSE_SET_DEPLOYCOUNTBYFURNITUREID_OFFSET))(arg, nullptr);
		}

	};
}

