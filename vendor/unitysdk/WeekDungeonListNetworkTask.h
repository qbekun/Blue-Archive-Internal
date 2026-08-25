#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define WEEKDUNGEONLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE990)
#define WEEKDUNGEONLISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1FAE9A0)
#define WEEKDUNGEONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAE9B0)
#define WEEKDUNGEONLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAEB40)
#define WEEKDUNGEONLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAEBD0)

	inline static constexpr unsigned int WeekDungeonListNetworkTask_TypeDefinitionIndex = 2882;

	class WeekDungeonListNetworkTask : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONLISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

