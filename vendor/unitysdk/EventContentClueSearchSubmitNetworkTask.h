#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F66910)
#define EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F66920)
#define EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F66930)
#define EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F66940)
#define EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F66950)
#define EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F66960)
#define EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F66C00)
#define EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F66C10)
#define EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F66CA0)

	inline static constexpr unsigned int EventContentClueSearchSubmitNetworkTask_TypeDefinitionIndex = 2442;

	class EventContentClueSearchSubmitNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _SlotId_k__BackingField; // 0x48

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHSUBMITNETWORKTASK_GET_SLOTID_OFFSET))(nullptr);
		}

	};

