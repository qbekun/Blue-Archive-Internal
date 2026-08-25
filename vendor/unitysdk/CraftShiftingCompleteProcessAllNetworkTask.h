#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F55150)
#define CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F55490)
#define CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F55520)
#define CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F55530)
#define CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F55540)

	inline static constexpr unsigned int CraftShiftingCompleteProcessAllNetworkTask_TypeDefinitionIndex = 2320;

	class CraftShiftingCompleteProcessAllNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTSHIFTINGCOMPLETEPROCESSALLNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

