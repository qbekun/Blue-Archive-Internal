#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTCOMPLETEPROCESSALLNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F39930)
#define CRAFTCOMPLETEPROCESSALLNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F399A0)
#define CRAFTCOMPLETEPROCESSALLNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F39A30)
#define CRAFTCOMPLETEPROCESSALLNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F39A40)
#define CRAFTCOMPLETEPROCESSALLNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F39EF0)

	inline static constexpr unsigned int CraftCompleteProcessAllNetworkTask_TypeDefinitionIndex = 2292;

	class CraftCompleteProcessAllNetworkTask : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSALLNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSALLNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSALLNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSALLNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTCOMPLETEPROCESSALLNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

