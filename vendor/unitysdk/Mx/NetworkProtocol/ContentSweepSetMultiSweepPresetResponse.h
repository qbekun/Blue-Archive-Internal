#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONTENTSWEEPSETMULTISWEEPPRESETRESPONSE_GET_MULTISWEEPPRESETDBS_OFFSET UNITYSDK_OFFSET(0xF41920)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPSETMULTISWEEPPRESETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41930)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPSETMULTISWEEPPRESETRESPONSE_SET_MULTISWEEPPRESETDBS_OFFSET UNITYSDK_OFFSET(0xF41940)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPSETMULTISWEEPPRESETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41950)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ContentSweepSetMultiSweepPresetResponse_TypeDefinitionIndex = 11592;

	class ContentSweepSetMultiSweepPresetResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MultiSweepPresetDBs_k__BackingField; // 0x50

		Il2CppObject* get_MultiSweepPresetDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPSETMULTISWEEPPRESETRESPONSE_GET_MULTISWEEPPRESETDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPSETMULTISWEEPPRESETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_MultiSweepPresetDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPSETMULTISWEEPPRESETRESPONSE_SET_MULTISWEEPPRESETDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPSETMULTISWEEPPRESETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

