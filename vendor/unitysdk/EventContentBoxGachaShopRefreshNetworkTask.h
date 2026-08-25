#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F63F40)
#define EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F63FD0)
#define EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F63FE0)
#define EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F63FF0)
#define EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F64000)
#define EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F64010)
#define EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F642E0)

	inline static constexpr unsigned int EventContentBoxGachaShopRefreshNetworkTask_TypeDefinitionIndex = 2422;

	class EventContentBoxGachaShopRefreshNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPREFRESHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

