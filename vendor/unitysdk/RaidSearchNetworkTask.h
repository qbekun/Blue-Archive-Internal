#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define RAIDSEARCHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F91C10)
#define RAIDSEARCHNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F91CA0)
#define RAIDSEARCHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F91CB0)
#define RAIDSEARCHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F91CC0)
#define RAIDSEARCHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F91CD0)
#define RAIDSEARCHNETWORKTASK_SET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0x1F91EB0)
#define RAIDSEARCHNETWORKTASK_GET_SECRETCODE_OFFSET UNITYSDK_OFFSET(0x1F91EC0)

	inline static constexpr unsigned int RaidSearchNetworkTask_TypeDefinitionIndex = 2722;

	class RaidSearchNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _SecretCode_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEARCHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEARCHNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEARCHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEARCHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSEARCHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_SecretCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSEARCHNETWORKTASK_SET_SECRETCODE_OFFSET))(str, nullptr);
		}

		::System::String* get_SecretCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEARCHNETWORKTASK_GET_SECRETCODE_OFFSET))(nullptr);
		}

	};

