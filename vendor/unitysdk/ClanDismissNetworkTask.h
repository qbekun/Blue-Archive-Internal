#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CLANDISMISSNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F26FD0)
#define CLANDISMISSNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F26FE0)
#define CLANDISMISSNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F26FF0)
#define CLANDISMISSNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F27080)
#define CLANDISMISSNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F27180)

	inline static constexpr unsigned int ClanDismissNetworkTask_TypeDefinitionIndex = 2178;

	class ClanDismissNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANDISMISSNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANDISMISSNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANDISMISSNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CLANDISMISSNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANDISMISSNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

	};

