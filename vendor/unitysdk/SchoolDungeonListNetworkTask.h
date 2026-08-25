#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SCHOOLDUNGEONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F9D4D0)
#define SCHOOLDUNGEONLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F9D650)
#define SCHOOLDUNGEONLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F9D660)
#define SCHOOLDUNGEONLISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F9D6F0)
#define SCHOOLDUNGEONLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9D700)

	inline static constexpr unsigned int SchoolDungeonListNetworkTask_TypeDefinitionIndex = 2796;

	class SchoolDungeonListNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONLISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHOOLDUNGEONLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

