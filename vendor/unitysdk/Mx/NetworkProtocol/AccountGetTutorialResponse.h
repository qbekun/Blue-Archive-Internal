#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F7C0)
#define MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALRESPONSE_SET_TUTORIALIDS_OFFSET UNITYSDK_OFFSET(0xF0F7D0)
#define MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F7E0)
#define MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALRESPONSE_GET_TUTORIALIDS_OFFSET UNITYSDK_OFFSET(0xF0F7F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountGetTutorialResponse_TypeDefinitionIndex = 11244;

	class AccountGetTutorialResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _TutorialIds_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_TutorialIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALRESPONSE_SET_TUTORIALIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_TutorialIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTGETTUTORIALRESPONSE_GET_TUTORIALIDS_OFFSET))(nullptr);
		}

	};
}

