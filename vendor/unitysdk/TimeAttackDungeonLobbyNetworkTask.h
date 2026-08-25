#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define TIMEATTACKDUNGEONLOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FACAB0)
#define TIMEATTACKDUNGEONLOBBYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FACCF0)
#define TIMEATTACKDUNGEONLOBBYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FACD00)
#define TIMEATTACKDUNGEONLOBBYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FACD10)
#define TIMEATTACKDUNGEONLOBBYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1FACDA0)

	inline static constexpr unsigned int TimeAttackDungeonLobbyNetworkTask_TypeDefinitionIndex = 2870;

	class TimeAttackDungeonLobbyNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONLOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONLOBBYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONLOBBYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONLOBBYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONLOBBYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

	};

