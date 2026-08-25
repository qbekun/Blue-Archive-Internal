#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MANAGEMENTDATABANNERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xC78500)
#define MANAGEMENTDATABANNERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xC78590)
#define MANAGEMENTDATABANNERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC785A0)
#define MANAGEMENTDATABANNERNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET UNITYSDK_OFFSET(0xC785B0)
#define MANAGEMENTDATABANNERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC785C0)

	inline static constexpr unsigned int ManagementDataBannerNetworkTask_TypeDefinitionIndex = 9039;

	class ManagementDataBannerNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* DataResultCallback; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATABANNERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATABANNERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATABANNERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATABANNERNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATABANNERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

