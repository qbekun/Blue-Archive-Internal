#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTLOGINSYNCNETWORKTASK__PROCESSSESSION_B__2_0_OFFSET UNITYSDK_OFFSET(0x1F03BB0)
#define ACCOUNTLOGINSYNCNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F03BC0)
#define ACCOUNTLOGINSYNCNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F03C50)
#define ACCOUNTLOGINSYNCNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F03300)
#define ACCOUNTLOGINSYNCNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F05820)
#define ACCOUNTLOGINSYNCNETWORKTASK_GET_SYNCPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int AccountLoginSyncNetworkTask_TypeDefinitionIndex = 1968;

	class AccountLoginSyncNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _ProcessSession_b__2_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLOGINSYNCNETWORKTASK__PROCESSSESSION_B__2_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLOGINSYNCNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLOGINSYNCNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLOGINSYNCNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLOGINSYNCNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_SyncProtocols()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLOGINSYNCNETWORKTASK_GET_SYNCPROTOCOLS_OFFSET))(nullptr);
		}

	};

