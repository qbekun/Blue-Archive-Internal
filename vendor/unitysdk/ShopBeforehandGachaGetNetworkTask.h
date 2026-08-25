#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SHOPBEFOREHANDGACHAGETNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9ED90)
#define SHOPBEFOREHANDGACHAGETNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F9EDA0)
#define SHOPBEFOREHANDGACHAGETNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F9EDB0)
#define SHOPBEFOREHANDGACHAGETNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F9EE40)
#define SHOPBEFOREHANDGACHAGETNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F9EE50)

	inline static constexpr unsigned int ShopBeforehandGachaGetNetworkTask_TypeDefinitionIndex = 2803;

	class ShopBeforehandGachaGetNetworkTask : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAGETNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAGETNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAGETNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAGETNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAGETNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

