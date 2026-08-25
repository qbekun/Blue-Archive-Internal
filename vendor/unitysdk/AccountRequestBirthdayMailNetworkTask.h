#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_SET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1F079D0)
#define ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F079E0)
#define ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F07A70)
#define ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F07B40)
#define ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F07B50)
#define ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F07B60)
#define ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x1F07B70)

	inline static constexpr unsigned int AccountRequestBirthdayMailNetworkTask_TypeDefinitionIndex = 1981;

	class AccountRequestBirthdayMailNetworkTask : public Il2CppObject
	{
	public:
		::System::DateTime* _Birthday_k__BackingField; // 0x40

		::System::Void set_Birthday(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_SET_BIRTHDAY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_Birthday()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREQUESTBIRTHDAYMAILNETWORKTASK_GET_BIRTHDAY_OFFSET))(nullptr);
		}

	};

