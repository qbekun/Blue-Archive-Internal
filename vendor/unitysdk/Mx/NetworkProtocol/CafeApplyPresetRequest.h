#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CafePresetType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF13C70)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_SET_USEOTHERCAFEFURNITURE_OFFSET UNITYSDK_OFFSET(0xF13C80)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13C90)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13CA0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF13CB0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_SET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xF13CC0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13CD0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13CE0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_USEOTHERCAFEFURNITURE_OFFSET UNITYSDK_OFFSET(0xF13CF0)
#define MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0xF13D00)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeApplyPresetRequest_TypeDefinitionIndex = 11384;

	class CafeApplyPresetRequest : public Il2CppObject
	{
	public:
		::FlatData::CafePresetType* _PresetType_k__BackingField; // 0x40
		::System::Int32 _SlotId_k__BackingField; // 0x44
		::System::Int64 _CafeDBId_k__BackingField; // 0x48
		::System::Boolean _UseOtherCafeFurniture_k__BackingField; // 0x50

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseOtherCafeFurniture(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_SET_USEOTHERCAFEFURNITURE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void set_PresetType(::FlatData::CafePresetType* arg)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_SET_PRESETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_UseOtherCafeFurniture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_USEOTHERCAFEFURNITURE_OFFSET))(nullptr);
		}

		::FlatData::CafePresetType* get_PresetType()
		{
			return ((::FlatData::CafePresetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEAPPLYPRESETREQUEST_GET_PRESETTYPE_OFFSET))(nullptr);
		}

	};
}

