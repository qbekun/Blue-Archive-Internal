#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANAPPLICANTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF166E0)
#define MX_NETWORKPROTOCOL_CLANAPPLICANTRESPONSE_GET_CLANMEMBERDBS_OFFSET UNITYSDK_OFFSET(0xF166F0)
#define MX_NETWORKPROTOCOL_CLANAPPLICANTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16700)
#define MX_NETWORKPROTOCOL_CLANAPPLICANTRESPONSE_SET_CLANMEMBERDBS_OFFSET UNITYSDK_OFFSET(0xF16710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanApplicantResponse_TypeDefinitionIndex = 11497;

	class ClanApplicantResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ClanMemberDBs_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAPPLICANTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClanMemberDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAPPLICANTRESPONSE_GET_CLANMEMBERDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAPPLICANTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClanMemberDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANAPPLICANTRESPONSE_SET_CLANMEMBERDBS_OFFSET))(arg, nullptr);
		}

	};
}

