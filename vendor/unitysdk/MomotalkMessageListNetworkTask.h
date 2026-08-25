#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MOMOTALKMESSAGELISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F87250)
#define MOMOTALKMESSAGELISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F87260)
#define MOMOTALKMESSAGELISTNETWORKTASK_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1F87270)
#define MOMOTALKMESSAGELISTNETWORKTASK_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1F87280)
#define MOMOTALKMESSAGELISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F87290)
#define MOMOTALKMESSAGELISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F87430)
#define MOMOTALKMESSAGELISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F87440)

	inline static constexpr unsigned int MomotalkMessageListNetworkTask_TypeDefinitionIndex = 2650;

	class MomotalkMessageListNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKMESSAGELISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKMESSAGELISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKMESSAGELISTNETWORKTASK_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKMESSAGELISTNETWORKTASK_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKMESSAGELISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKMESSAGELISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKMESSAGELISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

