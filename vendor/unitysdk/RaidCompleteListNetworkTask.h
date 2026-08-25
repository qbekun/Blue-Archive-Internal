#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define RAIDCOMPLETELISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8B950)
#define RAIDCOMPLETELISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8B960)
#define RAIDCOMPLETELISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F8BC00)
#define RAIDCOMPLETELISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8BC10)
#define RAIDCOMPLETELISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BCA0)

	inline static constexpr unsigned int RaidCompleteListNetworkTask_TypeDefinitionIndex = 2679;

	class RaidCompleteListNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCOMPLETELISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDCOMPLETELISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCOMPLETELISTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCOMPLETELISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDCOMPLETELISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

