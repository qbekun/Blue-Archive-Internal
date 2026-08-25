#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTCARDSHOPLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F64670)
#define EVENTCONTENTCARDSHOPLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F64910)
#define EVENTCONTENTCARDSHOPLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F649A0)
#define EVENTCONTENTCARDSHOPLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F649B0)
#define EVENTCONTENTCARDSHOPLISTNETWORKTASK_GET_UIEVENTCARDSHOPNAME_OFFSET UNITYSDK_OFFSET(0x1F649C0)
#define EVENTCONTENTCARDSHOPLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F649D0)
#define EVENTCONTENTCARDSHOPLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F649E0)
#define EVENTCONTENTCARDSHOPLISTNETWORKTASK_SET_UIEVENTCARDSHOPNAME_OFFSET UNITYSDK_OFFSET(0x1F649F0)
#define EVENTCONTENTCARDSHOPLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F64A00)

	inline static constexpr unsigned int EventContentCardShopListNetworkTask_TypeDefinitionIndex = 2425;

	class EventContentCardShopListNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::String* _UIEventCardShopName_k__BackingField; // 0x48

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::String* get_UIEventCardShopName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTNETWORKTASK_GET_UIEVENTCARDSHOPNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_UIEventCardShopName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTNETWORKTASK_SET_UIEVENTCARDSHOPNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCARDSHOPLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

