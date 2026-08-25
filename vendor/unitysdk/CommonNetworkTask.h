#pragma once
#include "unitysdk.h"

class ICommonNetworkTaskInfo;
namespace MX::NetworkProtocol { class Protocol; }

#define COMMONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2B0E0)
#define COMMONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2B190)
#define COMMONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2B1A0)
#define COMMONNETWORKTASK_INITCOMMON_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMMONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B230)
#define COMMONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F2B240)

	inline static constexpr unsigned int CommonNetworkTask_TypeDefinitionIndex = 2209;

	class CommonNetworkTask : public Il2CppObject
	{
	public:
		ICommonNetworkTaskInfo* taskInfo; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + COMMONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void InitCommon(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMMONNETWORKTASK_INITCOMMON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

