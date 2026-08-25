#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTIMAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F61510)
#define EVENTIMAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F61520)
#define EVENTIMAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F61530)
#define EVENTIMAGENETWORKTASK_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1F615C0)
#define EVENTIMAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F615D0)
#define EVENTIMAGENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F617B0)
#define EVENTIMAGENETWORKTASK_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1F617C0)

	inline static constexpr unsigned int EventImageNetworkTask_TypeDefinitionIndex = 2400;

	class EventImageNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventId_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_EventId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGENETWORKTASK_SET_EVENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Int64 get_EventId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTIMAGENETWORKTASK_GET_EVENTID_OFFSET))(nullptr);
		}

	};

