#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPREQUEST_SET_MULTISWEEPPARAMETERS_OFFSET UNITYSDK_OFFSET(0xF41720)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41730)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPREQUEST_GET_MULTISWEEPPARAMETERS_OFFSET UNITYSDK_OFFSET(0xF41740)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41750)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ContentSweepMultiSweepRequest_TypeDefinitionIndex = 11587;

	class ContentSweepMultiSweepRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _MultiSweepParameters_k__BackingField; // 0x40

		::System::Void set_MultiSweepParameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPREQUEST_SET_MULTISWEEPPARAMETERS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_MultiSweepParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPREQUEST_GET_MULTISWEEPPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPMULTISWEEPREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

