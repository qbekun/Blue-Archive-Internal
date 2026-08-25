#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIOENTERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F976E0)
#define SCENARIOENTERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F97770)
#define SCENARIOENTERNETWORKTASK_GET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1F97870)
#define SCENARIOENTERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F97880)
#define SCENARIOENTERNETWORKTASK_SET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1F97890)
#define SCENARIOENTERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F978A0)
#define SCENARIOENTERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F978B0)

	inline static constexpr unsigned int ScenarioEnterNetworkTask_TypeDefinitionIndex = 2757;

	class ScenarioEnterNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ScenarioModeId_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_ScenarioModeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERNETWORKTASK_GET_SCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioModeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERNETWORKTASK_SET_SCENARIOMODEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

