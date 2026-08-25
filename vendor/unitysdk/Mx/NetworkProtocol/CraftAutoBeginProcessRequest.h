#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_GET_PRESETINDEX_OFFSET UNITYSDK_OFFSET(0xF42080)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xF42090)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xF420A0)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF420B0)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF420C0)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_SET_PRESETINDEX_OFFSET UNITYSDK_OFFSET(0xF420D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftAutoBeginProcessRequest_TypeDefinitionIndex = 11613;

	class CraftAutoBeginProcessRequest : public Il2CppObject
	{
	public:
		::System::Int32 _PresetIndex_k__BackingField; // 0x40
		::System::Int64 _Count_k__BackingField; // 0x48

		::System::Int32 get_PresetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_GET_PRESETINDEX_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_PresetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSREQUEST_SET_PRESETINDEX_OFFSET))(arg, nullptr);
		}

	};
}

