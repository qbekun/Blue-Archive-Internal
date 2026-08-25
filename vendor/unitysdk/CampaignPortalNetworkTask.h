#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define CAMPAIGNPORTALNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F1AEC0)
#define CAMPAIGNPORTALNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1AED0)
#define CAMPAIGNPORTALNETWORKTASK_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F1AEE0)
#define CAMPAIGNPORTALNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1AEF0)
#define CAMPAIGNPORTALNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1AF00)
#define CAMPAIGNPORTALNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F1B150)
#define CAMPAIGNPORTALNETWORKTASK_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F1B160)
#define CAMPAIGNPORTALNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1B170)
#define CAMPAIGNPORTALNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F1B200)
#define CAMPAIGNPORTALNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F1B270)

	inline static constexpr unsigned int CampaignPortalNetworkTask_TypeDefinitionIndex = 2095;

	class CampaignPortalNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x48

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPORTALNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

