#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTREWARDALLNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F52060)
#define CRAFTREWARDALLNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F520F0)
#define CRAFTREWARDALLNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F52430)
#define CRAFTREWARDALLNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F52440)
#define CRAFTREWARDALLNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F524D0)

	inline static constexpr unsigned int CraftRewardAllNetworkTask_TypeDefinitionIndex = 2301;

	class CraftRewardAllNetworkTask : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDALLNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDALLNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDALLNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDALLNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTREWARDALLNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

	};

