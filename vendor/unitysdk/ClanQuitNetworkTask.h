#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANQUITNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F299E0)
#define CLANQUITNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F299F0)
#define CLANQUITNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F29A00)
#define CLANQUITNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F29B00)
#define CLANQUITNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F29B10)

	inline static constexpr unsigned int ClanQuitNetworkTask_TypeDefinitionIndex = 2196;

	class ClanQuitNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANQUITNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANQUITNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANQUITNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANQUITNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANQUITNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

