#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANLOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F27DD0)
#define CLANLOBBYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F28020)
#define CLANLOBBYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F28030)
#define CLANLOBBYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F28040)
#define CLANLOBBYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F28050)

	inline static constexpr unsigned int ClanLobbyNetworkTask_TypeDefinitionIndex = 2184;

	class ClanLobbyNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANLOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANLOBBYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANLOBBYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANLOBBYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANLOBBYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

