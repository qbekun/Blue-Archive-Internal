#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyControllerType; }
namespace NPA { class INXPToyControllerEventHandler; }
namespace NPA { class NXPConsoleVirtualKeyboardOption; }

#define NPA_INXPCONSOLEMISC_GETLASTACTIVECONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEMISC_SETCONTROLLEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEMISC_GETGAMELANGUAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEMISC_GETAUTHINFOFORWEBAPI_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEMISC_LAUNCHURL_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEMISC_REQUIRESVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_INXPCONSOLEMISC_SHOWVIRTUALKEYOBARD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int INXPConsoleMisc_TypeDefinitionIndex = 25593;

	class INXPConsoleMisc : public Il2CppObject
	{
	public:
		::NPA::NXPToyControllerType* GetLastActiveControllerType()
		{
			return (return (::NPA::NXPToyControllerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEMISC_GETLASTACTIVECONTROLLERTYPE_OFFSET))(nullptr);
		}

		::System::Void SetControllerEventHandler(::NPA::INXPToyControllerEventHandler* arg)
		{
			((::System::Void(*)(::NPA::INXPToyControllerEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEMISC_SETCONTROLLEREVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::String* GetGameLanguage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEMISC_GETGAMELANGUAGE_OFFSET))(nullptr);
		}

		::System::Void GetAuthInfoForWebAPI(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEMISC_GETAUTHINFOFORWEBAPI_OFFSET))(arg, nullptr);
		}

		::System::Void LaunchURL(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEMISC_LAUNCHURL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean RequiresVirtualKeyboard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEMISC_REQUIRESVIRTUALKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void ShowVirtualKeyobard(::NPA::NXPConsoleVirtualKeyboardOption* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPConsoleVirtualKeyboardOption*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INXPCONSOLEMISC_SHOWVIRTUALKEYOBARD_OFFSET))(arg, arg, nullptr);
		}

	};
}

