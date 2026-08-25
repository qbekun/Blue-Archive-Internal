#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class AttendanceRewardRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define ATTENDANCEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0DE20)
#define ATTENDANCEREWARDNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET UNITYSDK_OFFSET(0x1F0E110)
#define ATTENDANCEREWARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0E120)
#define ATTENDANCEREWARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0E130)
#define ATTENDANCEREWARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0E140)

	inline static constexpr unsigned int AttendanceRewardNetworkTask_TypeDefinitionIndex = 2017;

	class AttendanceRewardNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::AttendanceRewardRequest* Req; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEREWARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEREWARDNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEREWARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEREWARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEREWARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

