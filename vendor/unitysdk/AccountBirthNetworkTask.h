#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTBIRTHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC76500)
#define ACCOUNTBIRTHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xC76870)
#define ACCOUNTBIRTHNETWORKTASK_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xC76900)
#define ACCOUNTBIRTHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xC76910)
#define ACCOUNTBIRTHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC76920)
#define ACCOUNTBIRTHNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xC76930)
#define ACCOUNTBIRTHNETWORKTASK_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0xC76940)

	inline static constexpr unsigned int AccountBirthNetworkTask_TypeDefinitionIndex = 9027;

	class AccountBirthNetworkTask : public Il2CppObject
	{
	public:
		::System::DateTime* _birthDay_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBIRTHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBIRTHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::DateTime* get_birthDay()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBIRTHNETWORKTASK_GET_BIRTHDAY_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBIRTHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBIRTHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBIRTHNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void set_birthDay(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTBIRTHNETWORKTASK_SET_BIRTHDAY_OFFSET))(arg, nullptr);
		}

	};

