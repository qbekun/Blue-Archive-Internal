#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIODEPLOYECHELONNETWORKTASK_GET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F960D0)
#define SCENARIODEPLOYECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F960E0)
#define SCENARIODEPLOYECHELONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F960F0)
#define SCENARIODEPLOYECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F96100)
#define SCENARIODEPLOYECHELONNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F96250)
#define SCENARIODEPLOYECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F96260)
#define SCENARIODEPLOYECHELONNETWORKTASK_GET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F96270)
#define SCENARIODEPLOYECHELONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F96280)
#define SCENARIODEPLOYECHELONNETWORKTASK_SET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F96310)
#define SCENARIODEPLOYECHELONNETWORKTASK_SET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F96320)
#define SCENARIODEPLOYECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F96330)
#define SCENARIODEPLOYECHELONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F965A0)

	inline static constexpr unsigned int ScenarioDeployEchelonNetworkTask_TypeDefinitionIndex = 2749;

	class ScenarioDeployEchelonNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		Il2CppObject* _DeployedEchelons_k__BackingField; // 0x48
		::System::Boolean _PositionChange_k__BackingField; // 0x50

		::System::Boolean get_PositionChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_GET_POSITIONCHANGE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DeployedEchelons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_GET_DEPLOYEDECHELONS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_DeployedEchelons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_SET_DEPLOYEDECHELONS_OFFSET))(arg, nullptr);
		}

		::System::Void set_PositionChange(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_SET_POSITIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIODEPLOYECHELONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

