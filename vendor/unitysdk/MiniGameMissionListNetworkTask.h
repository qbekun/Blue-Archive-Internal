#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MINIGAMEMISSIONLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F82660)
#define MINIGAMEMISSIONLISTNETWORKTASK_GET_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1F82670)
#define MINIGAMEMISSIONLISTNETWORKTASK_SET_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0x1F82680)
#define MINIGAMEMISSIONLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F82690)
#define MINIGAMEMISSIONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F826A0)
#define MINIGAMEMISSIONLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F82840)
#define MINIGAMEMISSIONLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F82850)
#define MINIGAMEMISSIONLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F828E0)
#define MINIGAMEMISSIONLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F828F0)

	inline static constexpr unsigned int MiniGameMissionListNetworkTask_TypeDefinitionIndex = 2621;

	class MiniGameMissionListNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Boolean _ShowToast_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowToast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONLISTNETWORKTASK_GET_SHOWTOAST_OFFSET))(nullptr);
		}

		::System::Void set_ShowToast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONLISTNETWORKTASK_SET_SHOWTOAST_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEMISSIONLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

