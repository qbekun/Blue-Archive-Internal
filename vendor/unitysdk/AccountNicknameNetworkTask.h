#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTNICKNAMENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F05BE0)
#define ACCOUNTNICKNAMENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F05C70)
#define ACCOUNTNICKNAMENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F05C80)
#define ACCOUNTNICKNAMENETWORKTASK_SENDNEXONEVENTFORCREATENICKNAME_OFFSET UNITYSDK_OFFSET(0x1F05F40)
#define ACCOUNTNICKNAMENETWORKTASK_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1F06030)
#define ACCOUNTNICKNAMENETWORKTASK_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x1F06040)
#define ACCOUNTNICKNAMENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F06050)
#define ACCOUNTNICKNAMENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F06060)

	inline static constexpr unsigned int AccountNicknameNetworkTask_TypeDefinitionIndex = 1971;

	class AccountNicknameNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _Nickname_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTNICKNAMENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTNICKNAMENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTNICKNAMENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void SendNexonEventForCreateNickName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTNICKNAMENETWORKTASK_SENDNEXONEVENTFORCREATENICKNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Nickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTNICKNAMENETWORKTASK_GET_NICKNAME_OFFSET))(nullptr);
		}

		::System::Void set_Nickname(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTNICKNAMENETWORKTASK_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTNICKNAMENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTNICKNAMENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

