#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountBanByNexonDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTAUTHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1EFE850)
#define ACCOUNTAUTHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE8E0)
#define ACCOUNTAUTHNETWORKTASK_CHECKACCOUNTBANPLAYERFORNEXON_OFFSET UNITYSDK_OFFSET(0x1EFE8F0)
#define ACCOUNTAUTHNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1EFE990)
#define ACCOUNTAUTHNETWORKTASK__CHECKACCOUNTBANPLAYERFORNEXON_B__3_0_OFFSET UNITYSDK_OFFSET(0x1EFE9A0)
#define ACCOUNTAUTHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1EFEFE0)
#define ACCOUNTAUTHNETWORKTASK_ISBANCHECK_OFFSET UNITYSDK_OFFSET(0x1EFE9B0)
#define ACCOUNTAUTHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F00130)

	inline static constexpr unsigned int AccountAuthNetworkTask_TypeDefinitionIndex = 1947;

	class AccountAuthNetworkTask : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTAUTHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTAUTHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckAccountBanPlayerForNexon(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTAUTHNETWORKTASK_CHECKACCOUNTBANPLAYERFORNEXON_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTAUTHNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean _CheckAccountBanPlayerForNexon_b__3_0(::MX::GameLogic::DBModel::AccountBanByNexonDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AccountBanByNexonDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTAUTHNETWORKTASK__CHECKACCOUNTBANPLAYERFORNEXON_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTAUTHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean IsBanCheck(::MX::GameLogic::DBModel::AccountBanByNexonDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::AccountBanByNexonDB*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTAUTHNETWORKTASK_ISBANCHECK_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTAUTHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

