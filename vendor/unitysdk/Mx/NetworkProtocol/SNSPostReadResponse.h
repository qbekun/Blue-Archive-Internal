#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SNSPOSTREADRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F930)
#define MX_NETWORKPROTOCOL_SNSPOSTREADRESPONSE_GET_SNSPOSTDBS_OFFSET UNITYSDK_OFFSET(0xF4F940)
#define MX_NETWORKPROTOCOL_SNSPOSTREADRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F950)
#define MX_NETWORKPROTOCOL_SNSPOSTREADRESPONSE_SET_SNSPOSTDBS_OFFSET UNITYSDK_OFFSET(0xF4F960)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SNSPostReadResponse_TypeDefinitionIndex = 12147;

	class SNSPostReadResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _SNSPostDBs_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SNSPOSTREADRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_SNSPostDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SNSPOSTREADRESPONSE_GET_SNSPOSTDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SNSPOSTREADRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SNSPostDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SNSPOSTREADRESPONSE_SET_SNSPOSTDBS_OFFSET))(arg, nullptr);
		}

	};
}

