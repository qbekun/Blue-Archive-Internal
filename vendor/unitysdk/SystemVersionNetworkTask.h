#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SYSTEMVERSIONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAA9A0)
#define SYSTEMVERSIONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAAA30)
#define SYSTEMVERSIONNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1FAAA40)
#define SYSTEMVERSIONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAAA50)
#define SYSTEMVERSIONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAAA60)

	inline static constexpr unsigned int SystemVersionNetworkTask_TypeDefinitionIndex = 2858;

	class SystemVersionNetworkTask : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEMVERSIONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEMVERSIONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEMVERSIONNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEMVERSIONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEMVERSIONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

