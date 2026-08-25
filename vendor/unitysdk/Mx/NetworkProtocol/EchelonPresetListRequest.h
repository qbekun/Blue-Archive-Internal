#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONPRESETLISTREQUEST_SET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xF42620)
#define MX_NETWORKPROTOCOL_ECHELONPRESETLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42630)
#define MX_NETWORKPROTOCOL_ECHELONPRESETLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42640)
#define MX_NETWORKPROTOCOL_ECHELONPRESETLISTREQUEST_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xF42650)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonPresetListRequest_TypeDefinitionIndex = 11633;

	class EchelonPresetListRequest : public Il2CppObject
	{
	public:
		::FlatData::EchelonExtensionType* _EchelonExtensionType_k__BackingField; // 0x40

		::System::Void set_EchelonExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETLISTREQUEST_SET_ECHELONEXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETLISTREQUEST_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

	};
}

