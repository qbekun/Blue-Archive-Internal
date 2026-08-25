#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RESETABLECONTENTGETRESPONSE_GET_RESETABLECONTENTVALUEDBS_OFFSET UNITYSDK_OFFSET(0xF4D720)
#define MX_NETWORKPROTOCOL_RESETABLECONTENTGETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D730)
#define MX_NETWORKPROTOCOL_RESETABLECONTENTGETRESPONSE_SET_RESETABLECONTENTVALUEDBS_OFFSET UNITYSDK_OFFSET(0xF4D740)
#define MX_NETWORKPROTOCOL_RESETABLECONTENTGETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D750)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ResetableContentGetResponse_TypeDefinitionIndex = 12056;

	class ResetableContentGetResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ResetableContentValueDBs_k__BackingField; // 0x50

		Il2CppObject* get_ResetableContentValueDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESETABLECONTENTGETRESPONSE_GET_RESETABLECONTENTVALUEDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESETABLECONTENTGETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ResetableContentValueDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESETABLECONTENTGETRESPONSE_SET_RESETABLECONTENTVALUEDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESETABLECONTENTGETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

