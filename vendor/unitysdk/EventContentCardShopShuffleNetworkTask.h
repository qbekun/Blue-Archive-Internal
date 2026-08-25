#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F65910)
#define EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F65920)
#define EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F65930)
#define EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F65940)
#define EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F65950)
#define EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F65AF0)
#define EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F65B00)

	inline static constexpr unsigned int EventContentCardShopShuffleNetworkTask_TypeDefinitionIndex = 2434;

	class EventContentCardShopShuffleNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPSHUFFLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

