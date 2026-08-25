#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F66F70)
#define EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F66F80)
#define EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F66F90)
#define EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F671B0)
#define EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F671C0)
#define EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F671D0)
#define EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F67260)

	inline static constexpr unsigned int EventContentCollectionForMissionNetworkTask_TypeDefinitionIndex = 2446;

	class EventContentCollectionForMissionNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCOLLECTIONFORMISSIONNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};

