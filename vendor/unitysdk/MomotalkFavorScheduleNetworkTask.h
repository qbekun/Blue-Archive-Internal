#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MOMOTALKFAVORSCHEDULENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F86560)
#define MOMOTALKFAVORSCHEDULENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F86570)
#define MOMOTALKFAVORSCHEDULENETWORKTASK_SET_SELECTEDSCENARIOID_OFFSET UNITYSDK_OFFSET(0x1F86E40)
#define MOMOTALKFAVORSCHEDULENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F86E50)
#define MOMOTALKFAVORSCHEDULENETWORKTASK_GET_SELECTEDSCENARIOID_OFFSET UNITYSDK_OFFSET(0x1F86EE0)
#define MOMOTALKFAVORSCHEDULENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F86EF0)
#define MOMOTALKFAVORSCHEDULENETWORKTASK_GET_SELECTEDSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1F86F00)
#define MOMOTALKFAVORSCHEDULENETWORKTASK_SET_SELECTEDSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1F86F10)
#define MOMOTALKFAVORSCHEDULENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F86F20)

	inline static constexpr unsigned int MomotalkFavorScheduleNetworkTask_TypeDefinitionIndex = 2648;

	class MomotalkFavorScheduleNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _SelectedScheduleId_k__BackingField; // 0x40
		::System::Int64 _SelectedScenarioId_k__BackingField; // 0x48

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKFAVORSCHEDULENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKFAVORSCHEDULENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_SelectedScenarioId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKFAVORSCHEDULENETWORKTASK_SET_SELECTEDSCENARIOID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKFAVORSCHEDULENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectedScenarioId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKFAVORSCHEDULENETWORKTASK_GET_SELECTEDSCENARIOID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKFAVORSCHEDULENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectedScheduleId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKFAVORSCHEDULENETWORKTASK_GET_SELECTEDSCHEDULEID_OFFSET))(nullptr);
		}

		::System::Void set_SelectedScheduleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKFAVORSCHEDULENETWORKTASK_SET_SELECTEDSCHEDULEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKFAVORSCHEDULENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

