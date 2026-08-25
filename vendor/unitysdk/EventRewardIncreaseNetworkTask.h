#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTREWARDINCREASENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F61FB0)
#define EVENTREWARDINCREASENETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F61FC0)
#define EVENTREWARDINCREASENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F61FD0)
#define EVENTREWARDINCREASENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F621E0)
#define EVENTREWARDINCREASENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F621F0)

	inline static constexpr unsigned int EventRewardIncreaseNetworkTask_TypeDefinitionIndex = 2407;

	class EventRewardIncreaseNetworkTask : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTREWARDINCREASENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTREWARDINCREASENETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTREWARDINCREASENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTREWARDINCREASENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTREWARDINCREASENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

