#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MINIGAMESTAGELISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F840F0)
#define MINIGAMESTAGELISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F84280)
#define MINIGAMESTAGELISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F84310)
#define MINIGAMESTAGELISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F84320)
#define MINIGAMESTAGELISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F84330)
#define MINIGAMESTAGELISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F84340)
#define MINIGAMESTAGELISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F84350)

	inline static constexpr unsigned int MiniGameStageListNetworkTask_TypeDefinitionIndex = 2632;

	class MiniGameStageListNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESTAGELISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESTAGELISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESTAGELISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESTAGELISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESTAGELISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESTAGELISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESTAGELISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};

