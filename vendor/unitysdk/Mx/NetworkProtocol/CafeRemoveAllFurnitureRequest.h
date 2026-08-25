#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITUREREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF138D0)
#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITUREREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF138E0)
#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITUREREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF138F0)
#define MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITUREREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13900)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeRemoveAllFurnitureRequest_TypeDefinitionIndex = 11372;

	class CafeRemoveAllFurnitureRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITUREREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITUREREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITUREREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEALLFURNITUREREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

	};
}

