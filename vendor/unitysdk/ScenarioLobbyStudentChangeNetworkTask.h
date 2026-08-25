#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIOLOBBYSTUDENTCHANGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F98770)
#define SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F98780)
#define SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_SET_LOBBYSTUDENTS_OFFSET UNITYSDK_OFFSET(0x1F98790)
#define SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F987A0)
#define SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_GET_LOBBYSTUDENTSBEFORE_OFFSET UNITYSDK_OFFSET(0x1F98830)
#define SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F98840)
#define SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_GET_LOBBYSTUDENTS_OFFSET UNITYSDK_OFFSET(0x1F98850)
#define SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_SET_LOBBYSTUDENTSBEFORE_OFFSET UNITYSDK_OFFSET(0x1F98860)
#define SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F98870)

	inline static constexpr unsigned int ScenarioLobbyStudentChangeNetworkTask_TypeDefinitionIndex = 2764;

	class ScenarioLobbyStudentChangeNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _LobbyStudents_k__BackingField; // 0x40
		Il2CppObject* _LobbyStudentsBefore_k__BackingField; // 0x48

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOBBYSTUDENTCHANGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_LobbyStudents(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_SET_LOBBYSTUDENTS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_LobbyStudentsBefore()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_GET_LOBBYSTUDENTSBEFORE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_LobbyStudents()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_GET_LOBBYSTUDENTS_OFFSET))(nullptr);
		}

		::System::Void set_LobbyStudentsBefore(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_SET_LOBBYSTUDENTSBEFORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOBBYSTUDENTCHANGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

