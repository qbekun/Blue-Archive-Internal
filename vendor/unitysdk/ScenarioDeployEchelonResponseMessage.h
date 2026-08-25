#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SCENARIODEPLOYECHELONRESPONSEMESSAGE_SET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F96050)
#define SCENARIODEPLOYECHELONRESPONSEMESSAGE_SET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F96060)
#define SCENARIODEPLOYECHELONRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F96070)
#define SCENARIODEPLOYECHELONRESPONSEMESSAGE_GET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F960B0)
#define SCENARIODEPLOYECHELONRESPONSEMESSAGE_GET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F960C0)

	inline static constexpr unsigned int ScenarioDeployEchelonResponseMessage_TypeDefinitionIndex = 2747;

	class ScenarioDeployEchelonResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _DeployedEchelons_k__BackingField; // 0x20
		::System::Boolean _PositionChange_k__BackingField; // 0x28

		::System::Void set_PositionChange(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONRESPONSEMESSAGE_SET_POSITIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DeployedEchelons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONRESPONSEMESSAGE_SET_DEPLOYEDECHELONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_DeployedEchelons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONRESPONSEMESSAGE_GET_DEPLOYEDECHELONS_OFFSET))(nullptr);
		}

		::System::Boolean get_PositionChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONRESPONSEMESSAGE_GET_POSITIONCHANGE_OFFSET))(nullptr);
		}

	};

