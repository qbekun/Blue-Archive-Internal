#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define NETWORKTIMESYNCTASK__PROCESSSESSION_B__1_1_OFFSET UNITYSDK_OFFSET(0x1F87DF0)
#define NETWORKTIMESYNCTASK__PROCESSSESSION_B__1_0_OFFSET UNITYSDK_OFFSET(0x1F87E00)
#define NETWORKTIMESYNCTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F87E20)
#define NETWORKTIMESYNCTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F88040)
#define NETWORKTIMESYNCTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F880D0)
#define NETWORKTIMESYNCTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F880E0)

	inline static constexpr unsigned int NetworkTimeSyncTask_TypeDefinitionIndex = 2656;

	class NetworkTimeSyncTask : public Il2CppObject
	{
	public:
		::System::Single reqTime; // 0x40

		::System::Boolean _ProcessSession_b__1_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NETWORKTIMESYNCTASK__PROCESSSESSION_B__1_1_OFFSET))(nullptr);
		}

		::System::Void _ProcessSession_b__1_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NETWORKTIMESYNCTASK__PROCESSSESSION_B__1_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NETWORKTIMESYNCTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NETWORKTIMESYNCTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NETWORKTIMESYNCTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NETWORKTIMESYNCTASK_.CTOR_OFFSET))(nullptr);
		}

	};

