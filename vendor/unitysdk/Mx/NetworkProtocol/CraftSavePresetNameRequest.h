#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xF423C0)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF423D0)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_SET_PRESETINDEX_OFFSET UNITYSDK_OFFSET(0xF423E0)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_GET_PRESETINDEX_OFFSET UNITYSDK_OFFSET(0xF423F0)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xF42400)
#define MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42410)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftSavePresetNameRequest_TypeDefinitionIndex = 11625;

	class CraftSavePresetNameRequest : public Il2CppObject
	{
	public:
		::System::Int32 _PresetIndex_k__BackingField; // 0x40
		::System::String* _PresetName_k__BackingField; // 0x48

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_GET_PRESETNAME_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_PresetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_SET_PRESETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PresetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_GET_PRESETINDEX_OFFSET))(nullptr);
		}

		::System::Void set_PresetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_SET_PRESETNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSAVEPRESETNAMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

