#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACADEMYATTENDSCHEDULENETWORKTASK_SET_SELECTEDSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1EFD8E0)
#define ACADEMYATTENDSCHEDULENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EFD8F0)
#define ACADEMYATTENDSCHEDULENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EFDF30)
#define ACADEMYATTENDSCHEDULENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFDF40)
#define ACADEMYATTENDSCHEDULENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1EFDF50)
#define ACADEMYATTENDSCHEDULENETWORKTASK_GET_SELECTEDSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x1EFDF60)
#define ACADEMYATTENDSCHEDULENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1EFDF70)
#define ACADEMYATTENDSCHEDULENETWORKTASK_SET_SELECTEDZONEID_OFFSET UNITYSDK_OFFSET(0x1EFE000)
#define ACADEMYATTENDSCHEDULENETWORKTASK_GET_SELECTEDZONEID_OFFSET UNITYSDK_OFFSET(0x1EFE010)

	inline static constexpr unsigned int AcademyAttendScheduleNetworkTask_TypeDefinitionIndex = 1939;

	class AcademyAttendScheduleNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _SelectedScheduleId_k__BackingField; // 0x40
		::System::Int64 _SelectedZoneId_k__BackingField; // 0x48

		::System::Void set_SelectedScheduleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYATTENDSCHEDULENETWORKTASK_SET_SELECTEDSCHEDULEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYATTENDSCHEDULENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYATTENDSCHEDULENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYATTENDSCHEDULENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYATTENDSCHEDULENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectedScheduleId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYATTENDSCHEDULENETWORKTASK_GET_SELECTEDSCHEDULEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYATTENDSCHEDULENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_SelectedZoneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYATTENDSCHEDULENETWORKTASK_SET_SELECTEDZONEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SelectedZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYATTENDSCHEDULENETWORKTASK_GET_SELECTEDZONEID_OFFSET))(nullptr);
		}

	};

