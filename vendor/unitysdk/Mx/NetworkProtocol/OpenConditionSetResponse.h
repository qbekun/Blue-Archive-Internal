#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_OPENCONDITIONSETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B0E0)
#define MX_NETWORKPROTOCOL_OPENCONDITIONSETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B0F0)
#define MX_NETWORKPROTOCOL_OPENCONDITIONSETRESPONSE_GET_CONDITIONDBS_OFFSET UNITYSDK_OFFSET(0xF4B100)
#define MX_NETWORKPROTOCOL_OPENCONDITIONSETRESPONSE_SET_CONDITIONDBS_OFFSET UNITYSDK_OFFSET(0xF4B110)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int OpenConditionSetResponse_TypeDefinitionIndex = 11986;

	class OpenConditionSetResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ConditionDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONSETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONSETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConditionDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONSETRESPONSE_GET_CONDITIONDBS_OFFSET))(nullptr);
		}

		::System::Void set_ConditionDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONSETRESPONSE_SET_CONDITIONDBS_OFFSET))(arg, nullptr);
		}

	};
}

