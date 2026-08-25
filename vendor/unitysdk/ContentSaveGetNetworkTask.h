#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CONTENTSAVEGETNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F37690)
#define CONTENTSAVEGETNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F376A0)
#define CONTENTSAVEGETNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F376B0)
#define CONTENTSAVEGETNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F37D20)
#define CONTENTSAVEGETNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F37DB0)

	inline static constexpr unsigned int ContentSaveGetNetworkTask_TypeDefinitionIndex = 2279;

	class ContentSaveGetNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEGETNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEGETNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEGETNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEGETNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSAVEGETNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

