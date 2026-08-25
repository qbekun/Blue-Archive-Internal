#pragma once
#include "unitysdk.h"

namespace FlatData { class ClanSocialGrade; }
namespace MX::NetworkProtocol { class Protocol; }

#define CLANCONFERNETWORKTASK_GET_CLANCONFERMEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F26410)
#define CLANCONFERNETWORKTASK_GET_CLANCONFERCONFERINGGRADE_OFFSET UNITYSDK_OFFSET(0x1F26420)
#define CLANCONFERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F26430)
#define CLANCONFERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F266B0)
#define CLANCONFERNETWORKTASK_SET_CLANCONFERCONFERINGGRADE_OFFSET UNITYSDK_OFFSET(0x1F266C0)
#define CLANCONFERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F266D0)
#define CLANCONFERNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F26760)
#define CLANCONFERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F26770)
#define CLANCONFERNETWORKTASK_SET_CLANCONFERMEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F26780)

	inline static constexpr unsigned int ClanConferNetworkTask_TypeDefinitionIndex = 2172;

	class ClanConferNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ClanConferMemberAccountId_k__BackingField; // 0x40
		::FlatData::ClanSocialGrade* _ClanConferConferingGrade_k__BackingField; // 0x48

		::System::Int64 get_ClanConferMemberAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERNETWORKTASK_GET_CLANCONFERMEMBERACCOUNTID_OFFSET))(nullptr);
		}

		::FlatData::ClanSocialGrade* get_ClanConferConferingGrade()
		{
			return ((::FlatData::ClanSocialGrade*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERNETWORKTASK_GET_CLANCONFERCONFERINGGRADE_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ClanConferConferingGrade(::FlatData::ClanSocialGrade* arg)
		{
			((::System::Void(*)(::FlatData::ClanSocialGrade*, ::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERNETWORKTASK_SET_CLANCONFERCONFERINGGRADE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_ClanConferMemberAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANCONFERNETWORKTASK_SET_CLANCONFERMEMBERACCOUNTID_OFFSET))(arg, nullptr);
		}

	};

