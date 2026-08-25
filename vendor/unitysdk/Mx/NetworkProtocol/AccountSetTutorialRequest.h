#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALREQUEST_SET_TUTORIALIDS_OFFSET UNITYSDK_OFFSET(0xF0F800)
#define MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F810)
#define MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALREQUEST_GET_TUTORIALIDS_OFFSET UNITYSDK_OFFSET(0xF0F820)
#define MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F830)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountSetTutorialRequest_TypeDefinitionIndex = 11245;

	class AccountSetTutorialRequest : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _TutorialIds_k__BackingField; // 0x40

		::System::Void set_TutorialIds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALREQUEST_SET_TUTORIALIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TutorialIds()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALREQUEST_GET_TUTORIALIDS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETTUTORIALREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

