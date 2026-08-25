#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define TTSGETKANANETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xC48CA0)
#define TTSGETKANANETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xC48CB0)
#define TTSGETKANANETWORKTASK_GET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xC48CC0)
#define TTSGETKANANETWORKTASK_SET_CALLNAME_OFFSET UNITYSDK_OFFSET(0xC48CD0)
#define TTSGETKANANETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xC48CE0)
#define TTSGETKANANETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC48D70)
#define TTSGETKANANETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC48D80)

	inline static constexpr unsigned int TTSGetKanaNetworkTask_TypeDefinitionIndex = 8928;

	class TTSGetKanaNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _Callname_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANANETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANANETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::String* get_Callname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANANETWORKTASK_GET_CALLNAME_OFFSET))(nullptr);
		}

		::System::Void set_Callname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANANETWORKTASK_SET_CALLNAME_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANANETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANANETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TTSGETKANANETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

