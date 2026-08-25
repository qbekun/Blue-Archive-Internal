#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MANAGEMENTDATACONTENTLOCKNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET UNITYSDK_OFFSET(0xC78D00)
#define MANAGEMENTDATACONTENTLOCKNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC78D10)
#define MANAGEMENTDATACONTENTLOCKNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xC78D20)
#define MANAGEMENTDATACONTENTLOCKNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xC78D30)
#define MANAGEMENTDATACONTENTLOCKNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC78DC0)

	inline static constexpr unsigned int ManagementDataContentLockNetworkTask_TypeDefinitionIndex = 9042;

	class ManagementDataContentLockNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* DataResultCallback; // 0x40

		::System::Boolean _ProcessSession_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATACONTENTLOCKNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATACONTENTLOCKNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATACONTENTLOCKNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATACONTENTLOCKNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATACONTENTLOCKNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

