#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANPERMITNETWORKTASK_SET_ISCLANPERMITPERMIT_OFFSET UNITYSDK_OFFSET(0x1F294D0)
#define CLANPERMITNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F294E0)
#define CLANPERMITNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F294F0)
#define CLANPERMITNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F29500)
#define CLANPERMITNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F29510)
#define CLANPERMITNETWORKTASK_SET_CLANPERMITAPPLICANTACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F295A0)
#define CLANPERMITNETWORKTASK_GET_CLANPERMITAPPLICANTACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1F295B0)
#define CLANPERMITNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F295C0)
#define CLANPERMITNETWORKTASK_GET_ISCLANPERMITPERMIT_OFFSET UNITYSDK_OFFSET(0x1F29750)

	inline static constexpr unsigned int ClanPermitNetworkTask_TypeDefinitionIndex = 2194;

	class ClanPermitNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ClanPermitApplicantAccountId_k__BackingField; // 0x40
		::System::Boolean _IsClanPermitPerMit_k__BackingField; // 0x48

		::System::Void set_IsClanPermitPerMit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANPERMITNETWORKTASK_SET_ISCLANPERMITPERMIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANPERMITNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANPERMITNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANPERMITNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANPERMITNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_ClanPermitApplicantAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANPERMITNETWORKTASK_SET_CLANPERMITAPPLICANTACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClanPermitApplicantAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANPERMITNETWORKTASK_GET_CLANPERMITAPPLICANTACCOUNTID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANPERMITNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean get_IsClanPermitPerMit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANPERMITNETWORKTASK_GET_ISCLANPERMITPERMIT_OFFSET))(nullptr);
		}

	};

