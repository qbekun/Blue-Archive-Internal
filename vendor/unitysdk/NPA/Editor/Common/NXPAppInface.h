#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPToySystemInfo; }
namespace NPA::Editor { class NXPToySession; }
namespace NPA::Editor::Games { class GameIdentifiers; }
namespace NPA { class NPCountry; }
namespace NPA { class NPLocale; }

#define NPA_EDITOR_COMMON_NXPAPPINFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C43D60)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_SETSERVICEKEY_OFFSET UNITYSDK_OFFSET(0x9C44810)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_SETPACKAGENAME_OFFSET UNITYSDK_OFFSET(0x9C450B0)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGESESSION_OFFSET UNITYSDK_OFFSET(0x9C45190)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_ONUPDATESESSION_OFFSET UNITYSDK_OFFSET(0x9C45270)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C45280)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMENXCMDSERVERID_OFFSET UNITYSDK_OFFSET(0x9C45310)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMECHARACTERID_OFFSET UNITYSDK_OFFSET(0x9C45410)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMECHANNELID_OFFSET UNITYSDK_OFFSET(0x9C45510)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMEWORLDID_OFFSET UNITYSDK_OFFSET(0x9C45610)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_SETCOUNTRY_OFFSET UNITYSDK_OFFSET(0x9C45710)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_SETLOCALE_OFFSET UNITYSDK_OFFSET(0x9C457B0)
#define NPA_EDITOR_COMMON_NXPAPPINFACE_GETMARKETTYPE_OFFSET UNITYSDK_OFFSET(0x9C45850)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPAppInface_TypeDefinitionIndex = 26840;

	class NXPAppInface : public Il2CppObject
	{
	public:
		::System::Void .ctor(::NPA::Editor::Common::NXPToySystemInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::NXPToySystemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetServiceKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_SETSERVICEKEY_OFFSET))(str, nullptr);
		}

		::System::Void SetPackageName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_SETPACKAGENAME_OFFSET))(str, nullptr);
		}

		::System::Void OnChangeSession(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdateSession(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_ONUPDATESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameToken(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameNXCMDServerID(::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMENXCMDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameCharacterID(::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMECHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameChannelID(::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMECHANNELID_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeGameWorldID(::NPA::Editor::Games::GameIdentifiers* arg)
		{
			((::System::Void(*)(::NPA::Editor::Games::GameIdentifiers*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_ONCHANGEGAMEWORLDID_OFFSET))(arg, nullptr);
		}

		::System::Void SetCountry(::NPA::NPCountry* arg)
		{
			((::System::Void(*)(::NPA::NPCountry*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_SETCOUNTRY_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocale(::NPA::NPLocale* arg)
		{
			((::System::Void(*)(::NPA::NPLocale*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_SETLOCALE_OFFSET))(arg, nullptr);
		}

		::System::String* GetMarketType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPINFACE_GETMARKETTYPE_OFFSET))(nullptr);
		}

	};
}

