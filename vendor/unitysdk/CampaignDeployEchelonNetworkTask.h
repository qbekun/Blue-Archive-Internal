#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define CAMPAIGNDEPLOYECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F16F50)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F16F60)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_GET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F171D0)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_GET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F171E0)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F171F0)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F17340)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_SET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F17350)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_SET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F17360)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F17370)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F17400)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F17410)
#define CAMPAIGNDEPLOYECHELONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F17420)

	inline static constexpr unsigned int CampaignDeployEchelonNetworkTask_TypeDefinitionIndex = 2069;

	class CampaignDeployEchelonNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		Il2CppObject* _DeployedEchelons_k__BackingField; // 0x48
		::System::Boolean _PositionChange_k__BackingField; // 0x50

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		Il2CppObject* get_DeployedEchelons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_GET_DEPLOYEDECHELONS_OFFSET))(nullptr);
		}

		::System::Boolean get_PositionChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_GET_POSITIONCHANGE_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_PositionChange(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_SET_POSITIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DeployedEchelons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_SET_DEPLOYEDECHELONS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

