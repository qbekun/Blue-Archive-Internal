#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F6B530)
#define EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6B7B0)
#define EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F6B7C0)
#define EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B7D0)
#define EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6B7E0)
#define EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F6B7F0)
#define EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F6B800)

	inline static constexpr unsigned int EventContentFortuneGachaPurchaseNetworkTask_TypeDefinitionIndex = 2476;

	class EventContentFortuneGachaPurchaseNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTFORTUNEGACHAPURCHASENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

