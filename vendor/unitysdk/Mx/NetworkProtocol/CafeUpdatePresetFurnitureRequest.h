#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF13BF0)
#define MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13C00)
#define MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13C10)
#define MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13C20)
#define MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13C30)
#define MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF13C40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeUpdatePresetFurnitureRequest_TypeDefinitionIndex = 11382;

	class CafeUpdatePresetFurnitureRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x40
		::System::Int32 _SlotId_k__BackingField; // 0x48

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEUPDATEPRESETFURNITUREREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

	};
}

