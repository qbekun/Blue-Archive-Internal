#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTINVALIDATETOKENNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F02850)
#define ACCOUNTINVALIDATETOKENNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F029D0)
#define ACCOUNTINVALIDATETOKENNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F029E0)
#define ACCOUNTINVALIDATETOKENNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F02A70)
#define ACCOUNTINVALIDATETOKENNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F02A80)

	inline static constexpr unsigned int AccountInvalidateTokenNetworkTask_TypeDefinitionIndex = 1961;

	class AccountInvalidateTokenNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINVALIDATETOKENNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINVALIDATETOKENNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINVALIDATETOKENNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINVALIDATETOKENNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTINVALIDATETOKENNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

