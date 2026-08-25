#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CafePresetType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF13B70)
#define MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13B80)
#define MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_SET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xF13B90)
#define MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13BA0)
#define MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF13BB0)
#define MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xF13BC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeClearPresetRequest_TypeDefinitionIndex = 11380;

	class CafeClearPresetRequest : public Il2CppObject
	{
	public:
		::FlatData::CafePresetType* _PresetType_k__BackingField; // 0x40
		::System::Int32 _SlotId_k__BackingField; // 0x44

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PresetType(::FlatData::CafePresetType* arg)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_SET_PRESETTYPE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::FlatData::CafePresetType* get_PresetType()
		{
			return ((::FlatData::CafePresetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFECLEARPRESETREQUEST_GET_PRESETTYPE_OFFSET))(nullptr);
		}

	};
}

