#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F64CE0)
#define EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F64CF0)
#define EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F64D00)
#define EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F64F50)
#define EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F64F60)
#define EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F64F70)
#define EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F64F80)

	inline static constexpr unsigned int EventContentCardShopPurchaseAllNetworkTask_TypeDefinitionIndex = 2428;

	class EventContentCardShopPurchaseAllNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPPURCHASEALLNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

