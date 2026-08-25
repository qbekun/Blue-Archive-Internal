#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F66300)
#define EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F66310)
#define EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F665B0)
#define EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F665C0)
#define EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F665D0)
#define EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F66660)
#define EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F66670)

	inline static constexpr unsigned int EventContentClueSearchRoundCompleteNetworkTask_TypeDefinitionIndex = 2439;

	class EventContentClueSearchRoundCompleteNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

