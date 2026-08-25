#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACADEMYGETINFONETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFE2A0)
#define ACADEMYGETINFONETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE2B0)
#define ACADEMYGETINFONETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1EFE2C0)
#define ACADEMYGETINFONETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1EFE350)
#define ACADEMYGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EFE360)

	inline static constexpr unsigned int AcademyGetInfoNetworkTask_TypeDefinitionIndex = 1942;

	class AcademyGetInfoNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYGETINFONETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYGETINFONETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYGETINFONETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYGETINFONETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

