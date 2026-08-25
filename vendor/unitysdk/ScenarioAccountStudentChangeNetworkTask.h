#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_GET_ACCOUNTSTUDENT_OFFSET UNITYSDK_OFFSET(0x1F937F0)
#define SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_GET_ACCOUNTSTUDENTBEFORE_OFFSET UNITYSDK_OFFSET(0x1F93800)
#define SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F93810)
#define SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_SET_ACCOUNTSTUDENTBEFORE_OFFSET UNITYSDK_OFFSET(0x1F93820)
#define SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F93830)
#define SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F93840)
#define SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F938D0)
#define SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F938E0)
#define SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_SET_ACCOUNTSTUDENT_OFFSET UNITYSDK_OFFSET(0x1F939E0)

	inline static constexpr unsigned int ScenarioAccountStudentChangeNetworkTask_TypeDefinitionIndex = 2734;

	class ScenarioAccountStudentChangeNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _AccountStudent_k__BackingField; // 0x40
		::System::Int64 _AccountStudentBefore_k__BackingField; // 0x48

		::System::Int64 get_AccountStudent()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_GET_ACCOUNTSTUDENT_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountStudentBefore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_GET_ACCOUNTSTUDENTBEFORE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_AccountStudentBefore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_SET_ACCOUNTSTUDENTBEFORE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_AccountStudent(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOACCOUNTSTUDENTCHANGENETWORKTASK_SET_ACCOUNTSTUDENT_OFFSET))(arg, nullptr);
		}

	};

