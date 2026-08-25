#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ARENAOPPONENTLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0C740)
#define ARENAOPPONENTLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C750)
#define ARENAOPPONENTLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0C760)
#define ARENAOPPONENTLISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F0C7F0)
#define ARENAOPPONENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0C800)

	inline static constexpr unsigned int ArenaOpponentListNetworkTask_TypeDefinitionIndex = 2006;

	class ArenaOpponentListNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTLISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAOPPONENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

