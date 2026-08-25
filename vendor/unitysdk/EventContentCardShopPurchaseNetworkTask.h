#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F652E0)
#define EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1F652F0)
#define EVENTCONTENTCARDSHOPPURCHASENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F65300)
#define EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F65310)
#define EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F65320)
#define EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0x1F65330)
#define EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F65340)
#define EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F65590)
#define EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F655A0)

	inline static constexpr unsigned int EventContentCardShopPurchaseNetworkTask_TypeDefinitionIndex = 2431;

	class EventContentCardShopPurchaseNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int32 _SlotNumber_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_SlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_SlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

