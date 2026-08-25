#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ServerNotificationFlag; }
namespace MX::NetworkProtocol { class Protocol; }

#define TOASTLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAD6D0)
#define TOASTLISTNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET UNITYSDK_OFFSET(0x1FAD760)
#define TOASTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAD770)
#define TOASTLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD970)
#define TOASTLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAD980)
#define TOASTLISTNETWORKTASK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD990)

	inline static constexpr unsigned int ToastListNetworkTask_TypeDefinitionIndex = 2875;

	class ToastListNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ServerNotificationFlag* flagsToExclude; // 0x0

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTLISTNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TOASTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOASTLISTNETWORKTASK_.CCTOR_OFFSET))(nullptr);
		}

	};

