#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTLOCATIONGETINFONETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F6C6B0)
#define EVENTCONTENTLOCATIONGETINFONETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C6C0)
#define EVENTCONTENTLOCATIONGETINFONETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6C6D0)
#define EVENTCONTENTLOCATIONGETINFONETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F6C6E0)
#define EVENTCONTENTLOCATIONGETINFONETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6C6F0)
#define EVENTCONTENTLOCATIONGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F6C700)
#define EVENTCONTENTLOCATIONGETINFONETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F6C940)

	inline static constexpr unsigned int EventContentLocationGetInfoNetworkTask_TypeDefinitionIndex = 2482;

	class EventContentLocationGetInfoNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFONETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFONETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFONETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFONETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFONETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTLOCATIONGETINFONETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

