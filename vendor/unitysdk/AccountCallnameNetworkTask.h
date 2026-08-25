#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTCALLNAMENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F00BF0)
#define ACCOUNTCALLNAMENETWORKTASK_SET_CALLKATAKANA_OFFSET UNITYSDK_OFFSET(0x1F00F40)
#define ACCOUNTCALLNAMENETWORKTASK_GET_CALLKATAKANA_OFFSET UNITYSDK_OFFSET(0x1F00F50)
#define ACCOUNTCALLNAMENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F00F60)
#define ACCOUNTCALLNAMENETWORKTASK_SET_CALLNAME_OFFSET UNITYSDK_OFFSET(0x1F00F70)
#define ACCOUNTCALLNAMENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F00F80)
#define ACCOUNTCALLNAMENETWORKTASK_GET_CALLKOREAN_OFFSET UNITYSDK_OFFSET(0x1F00F90)
#define ACCOUNTCALLNAMENETWORKTASK_SET_CALLKOREAN_OFFSET UNITYSDK_OFFSET(0x1F00FA0)
#define ACCOUNTCALLNAMENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F00FB0)
#define ACCOUNTCALLNAMENETWORKTASK_GET_CALLNAME_OFFSET UNITYSDK_OFFSET(0x1F00FC0)
#define ACCOUNTCALLNAMENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F00FD0)

	inline static constexpr unsigned int AccountCallnameNetworkTask_TypeDefinitionIndex = 1950;

	class AccountCallnameNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _Callname_k__BackingField; // 0x40
		::System::String* _CallKatakana_k__BackingField; // 0x48
		::System::String* _CallKorean_k__BackingField; // 0x50

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_CallKatakana(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_SET_CALLKATAKANA_OFFSET))(str, nullptr);
		}

		::System::String* get_CallKatakana()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_GET_CALLKATAKANA_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_Callname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_SET_CALLNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::String* get_CallKorean()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_GET_CALLKOREAN_OFFSET))(nullptr);
		}

		::System::Void set_CallKorean(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_SET_CALLKOREAN_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Callname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_GET_CALLNAME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTCALLNAMENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

