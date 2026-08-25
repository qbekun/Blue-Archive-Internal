#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_GET_SKILLCUTINOPTION_OFFSET UNITYSDK_OFFSET(0xF0FD00)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FD10)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_SET_SYNCPROTOCOLS_OFFSET UNITYSDK_OFFSET(0xF0FD20)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_GET_SYNCPROTOCOLS_OFFSET UNITYSDK_OFFSET(0xF0FD30)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_SET_SKILLCUTINOPTION_OFFSET UNITYSDK_OFFSET(0xF0FD40)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FD50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountLoginSyncRequest_TypeDefinitionIndex = 11261;

	class AccountLoginSyncRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _SyncProtocols_k__BackingField; // 0x40
		::System::String* _SkillCutInOption_k__BackingField; // 0x48

		::System::String* get_SkillCutInOption()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_GET_SKILLCUTINOPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SyncProtocols(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_SET_SYNCPROTOCOLS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SyncProtocols()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_GET_SYNCPROTOCOLS_OFFSET))(nullptr);
		}

		::System::Void set_SkillCutInOption(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_SET_SKILLCUTINOPTION_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

