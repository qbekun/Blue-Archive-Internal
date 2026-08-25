#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONPRESETLISTRESPONSE_SET_PRESETGROUPDBS_OFFSET UNITYSDK_OFFSET(0xF42660)
#define MX_NETWORKPROTOCOL_ECHELONPRESETLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42670)
#define MX_NETWORKPROTOCOL_ECHELONPRESETLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42680)
#define MX_NETWORKPROTOCOL_ECHELONPRESETLISTRESPONSE_GET_PRESETGROUPDBS_OFFSET UNITYSDK_OFFSET(0xF42690)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonPresetListResponse_TypeDefinitionIndex = 11634;

	class EchelonPresetListResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _PresetGroupDBs_k__BackingField; // 0x50

		::System::Void set_PresetGroupDBs(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETLISTRESPONSE_SET_PRESETGROUPDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PresetGroupDBs()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETLISTRESPONSE_GET_PRESETGROUPDBS_OFFSET))(nullptr);
		}

	};
}

