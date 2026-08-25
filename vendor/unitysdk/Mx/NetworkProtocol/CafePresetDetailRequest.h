#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CafePresetType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14490)
#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_SET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xF144A0)
#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF144B0)
#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF144C0)
#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xF144D0)
#define MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF144E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafePresetDetailRequest_TypeDefinitionIndex = 11404;

	class CafePresetDetailRequest : public Il2CppObject
	{
	public:
		::FlatData::CafePresetType* _PresetType_k__BackingField; // 0x40
		::System::Int32 _SlotId_k__BackingField; // 0x44

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PresetType(::FlatData::CafePresetType* arg)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_SET_PRESETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::FlatData::CafePresetType* get_PresetType()
		{
			return ((::FlatData::CafePresetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_GET_PRESETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEPRESETDETAILREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

	};
}

