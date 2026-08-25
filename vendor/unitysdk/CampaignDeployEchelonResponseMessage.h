#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_GET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F16ED0)
#define CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_GET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F16EE0)
#define CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F16EF0)
#define CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_SET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F16F30)
#define CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_SET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F16F40)

	inline static constexpr unsigned int CampaignDeployEchelonResponseMessage_TypeDefinitionIndex = 2067;

	class CampaignDeployEchelonResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _DeployedEchelons_k__BackingField; // 0x20
		::System::Boolean _PositionChange_k__BackingField; // 0x28

		Il2CppObject* get_DeployedEchelons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_GET_DEPLOYEDECHELONS_OFFSET))(nullptr);
		}

		::System::Boolean get_PositionChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_GET_POSITIONCHANGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_DeployedEchelons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_SET_DEPLOYEDECHELONS_OFFSET))(arg, nullptr);
		}

		::System::Void set_PositionChange(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNDEPLOYECHELONRESPONSEMESSAGE_SET_POSITIONCHANGE_OFFSET))(arg, nullptr);
		}

	};

