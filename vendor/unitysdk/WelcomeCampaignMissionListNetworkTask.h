#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAEE50)
#define WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAEE60)
#define WELCOMECAMPAIGNMISSIONLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1FAEFF0)
#define WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1FAF000)
#define WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1FAF010)
#define WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_GET_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1FAF020)
#define WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAF030)
#define WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAF0C0)
#define WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_SET_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1FAF0D0)

	inline static constexpr unsigned int WelcomeCampaignMissionListNetworkTask_TypeDefinitionIndex = 2884;

	class WelcomeCampaignMissionListNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40
		::System::Boolean _ShowToast_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_GET_SHOWTOAST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_ShowToast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONLISTNETWORKTASK_SET_SHOWTOAST_OFFSET))(arg, nullptr);
		}

	};

