#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_GET_FURNITURESERVERIDS_OFFSET UNITYSDK_OFFSET(0xF13810)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13820)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13830)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13840)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13850)
#define MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_SET_FURNITURESERVERIDS_OFFSET UNITYSDK_OFFSET(0xF13860)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeRemoveFurnitureRequest_TypeDefinitionIndex = 11370;

	class CafeRemoveFurnitureRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x40
		Il2CppObject* _FurnitureServerIds_k__BackingField; // 0x48

		Il2CppObject* get_FurnitureServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_GET_FURNITURESERVERIDS_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEREMOVEFURNITUREREQUEST_SET_FURNITURESERVERIDS_OFFSET))(arg, nullptr);
		}

	};
}

