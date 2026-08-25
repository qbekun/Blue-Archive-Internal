#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define RESETABLECONTENTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1FA9D50)
#define RESETABLECONTENTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA9D60)
#define RESETABLECONTENTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA9DF0)
#define RESETABLECONTENTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9F90)
#define RESETABLECONTENTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA9FA0)

	inline static constexpr unsigned int ResetableContentNetworkTask_TypeDefinitionIndex = 2853;

	class ResetableContentNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RESETABLECONTENTNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESETABLECONTENTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RESETABLECONTENTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESETABLECONTENTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RESETABLECONTENTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

