#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CafePresetType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13AD0)
#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_SET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xF13AE0)
#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xF13AF0)
#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xF13B00)
#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13B10)
#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xF13B20)
#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF13B30)
#define MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF13B40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeRenamePresetRequest_TypeDefinitionIndex = 11378;

	class CafeRenamePresetRequest : public Il2CppObject
	{
	public:
		::FlatData::CafePresetType* _PresetType_k__BackingField; // 0x40
		::System::Int32 _SlotId_k__BackingField; // 0x44
		::System::String* _PresetName_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PresetType(::FlatData::CafePresetType* arg)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_SET_PRESETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_PresetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_SET_PRESETNAME_OFFSET))(str, nullptr);
		}

		::FlatData::CafePresetType* get_PresetType()
		{
			return ((::FlatData::CafePresetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_GET_PRESETTYPE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_GET_PRESETNAME_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERENAMEPRESETREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

	};
}

