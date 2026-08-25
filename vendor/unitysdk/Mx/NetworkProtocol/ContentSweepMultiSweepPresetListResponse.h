#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41840)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_GET_MULTISWEEPPRESETDBS_OFFSET UNITYSDK_OFFSET(0xF41850)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41860)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_SET_MULTISWEEPPRESETDBS_OFFSET UNITYSDK_OFFSET(0xF41870)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ContentSweepMultiSweepPresetListResponse_TypeDefinitionIndex = 11590;

	class ContentSweepMultiSweepPresetListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MultiSweepPresetDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_MultiSweepPresetDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_GET_MULTISWEEPPRESETDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MultiSweepPresetDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_SET_MULTISWEEPPRESETDBS_OFFSET))(arg, nullptr);
		}

	};
}

