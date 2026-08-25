#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTMAINSTORYCHECKNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B9F0)
#define CONQUESTMAINSTORYCHECKNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2BA00)
#define CONQUESTMAINSTORYCHECKNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2BA90)
#define CONQUESTMAINSTORYCHECKNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2BAA0)
#define CONQUESTMAINSTORYCHECKNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2BC30)
#define CONQUESTMAINSTORYCHECKNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2BC40)
#define CONQUESTMAINSTORYCHECKNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F2BC50)

	inline static constexpr unsigned int ConquestMainstoryCheckNetworkTask_TypeDefinitionIndex = 2213;

	class ConquestMainstoryCheckNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCHECKNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCHECKNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCHECKNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCHECKNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCHECKNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCHECKNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCHECKNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

