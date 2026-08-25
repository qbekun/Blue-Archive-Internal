#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_OPENCONDITIONLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B060)
#define MX_NETWORKPROTOCOL_OPENCONDITIONLISTRESPONSE_SET_CONDITIONCONTENTS_OFFSET UNITYSDK_OFFSET(0xF4B070)
#define MX_NETWORKPROTOCOL_OPENCONDITIONLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B080)
#define MX_NETWORKPROTOCOL_OPENCONDITIONLISTRESPONSE_GET_CONDITIONCONTENTS_OFFSET UNITYSDK_OFFSET(0xF4B090)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int OpenConditionListResponse_TypeDefinitionIndex = 11984;

	class OpenConditionListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ConditionContents_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConditionContents(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONLISTRESPONSE_SET_CONDITIONCONTENTS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConditionContents()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_OPENCONDITIONLISTRESPONSE_GET_CONDITIONCONTENTS_OFFSET))(nullptr);
		}

	};
}

