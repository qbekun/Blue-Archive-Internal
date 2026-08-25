#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10320)
#define MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDRESPONSE_SET_ACCOUNTLEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF10330)
#define MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10340)
#define MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDRESPONSE_GET_ACCOUNTLEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF10350)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CheckAccountLevelRewardResponse_TypeDefinitionIndex = 11264;

	class CheckAccountLevelRewardResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _AccountLevelRewardIds_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AccountLevelRewardIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDRESPONSE_SET_ACCOUNTLEVELREWARDIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_AccountLevelRewardIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHECKACCOUNTLEVELREWARDRESPONSE_GET_ACCOUNTLEVELREWARDIDS_OFFSET))(nullptr);
		}

	};
}

