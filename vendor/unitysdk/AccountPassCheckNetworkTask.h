#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTPASSCHECKNETWORKTASK_GET_DEVID_OFFSET UNITYSDK_OFFSET(0x1F06310)
#define ACCOUNTPASSCHECKNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F06320)
#define ACCOUNTPASSCHECKNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F06330)
#define ACCOUNTPASSCHECKNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F063C0)
#define ACCOUNTPASSCHECKNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F068C0)
#define ACCOUNTPASSCHECKNETWORKTASK_SET_DEVID_OFFSET UNITYSDK_OFFSET(0x1F068D0)
#define ACCOUNTPASSCHECKNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F068E0)

	inline static constexpr unsigned int AccountPassCheckNetworkTask_TypeDefinitionIndex = 1976;

	class AccountPassCheckNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _DevId_k__BackingField; // 0x40

		::System::String* get_DevId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTPASSCHECKNETWORKTASK_GET_DEVID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTPASSCHECKNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTPASSCHECKNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTPASSCHECKNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTPASSCHECKNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DevId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTPASSCHECKNETWORKTASK_SET_DEVID_OFFSET))(str, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTPASSCHECKNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

