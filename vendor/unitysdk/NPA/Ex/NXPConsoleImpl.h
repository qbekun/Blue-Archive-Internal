#pragma once
#include "../../unitysdk.h"

namespace NPA { class NXPToyControllerType; }
namespace NPA { class INXPToyControllerEventHandler; }
namespace NPA { class NXPConsoleCommerceDialogMode; }
namespace NPA { class NXPConsoleSystemMessageType; }
namespace NPA { class NXPConsoleVirtualKeyboardOption; }

#define NPA_EX_NXPCONSOLEIMPL_GETLASTACTIVECONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x9D1EC90)
#define NPA_EX_NXPCONSOLEIMPL_SETCONTROLLEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9D1ED90)
#define NPA_EX_NXPCONSOLEIMPL_GETGAMELANGUAGE_OFFSET UNITYSDK_OFFSET(0x9D1EEA0)
#define NPA_EX_NXPCONSOLEIMPL_STARTSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x9D1EFB0)
#define NPA_EX_NXPCONSOLEIMPL_STOPSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x9D1F0B0)
#define NPA_EX_NXPCONSOLEIMPL_SETCOMMERCEDIALOGMODE_OFFSET UNITYSDK_OFFSET(0x9D1F1B0)
#define NPA_EX_NXPCONSOLEIMPL_GETAUTHINFOFORWEBAPI_OFFSET UNITYSDK_OFFSET(0x9D1F2B0)
#define NPA_EX_NXPCONSOLEIMPL_LAUNCHURL_OFFSET UNITYSDK_OFFSET(0x9D1F4B0)
#define NPA_EX_NXPCONSOLEIMPL_SHOWPLATFORMSYSTEMMESSAGE_OFFSET UNITYSDK_OFFSET(0x9D1F5D0)
#define NPA_EX_NXPCONSOLEIMPL_GETUSERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9D1F6E0)
#define NPA_EX_NXPCONSOLEIMPL_GETUSERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9D1F810)
#define NPA_EX_NXPCONSOLEIMPL_REQUIRESVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x9D1F940)
#define NPA_EX_NXPCONSOLEIMPL_SHOWVIRTUALKEYOBARD_OFFSET UNITYSDK_OFFSET(0x9D1FA40)
#define NPA_EX_NXPCONSOLEIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1FCD0)

namespace NPA::Ex
{
	inline static constexpr unsigned int NXPConsoleImpl_TypeDefinitionIndex = 25993;

	class NXPConsoleImpl : public Il2CppObject
	{
	public:
		::NPA::NXPToyControllerType* GetLastActiveControllerType()
		{
			return (return (::NPA::NXPToyControllerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_GETLASTACTIVECONTROLLERTYPE_OFFSET))(nullptr);
		}

		::System::Void SetControllerEventHandler(::NPA::INXPToyControllerEventHandler* arg)
		{
			((::System::Void(*)(::NPA::INXPToyControllerEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_SETCONTROLLEREVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::String* GetGameLanguage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_GETGAMELANGUAGE_OFFSET))(nullptr);
		}

		::System::Void StartStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_STARTSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void StopStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_STOPSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void SetCommerceDialogMode(::NPA::NXPConsoleCommerceDialogMode* arg)
		{
			((::System::Void(*)(::NPA::NXPConsoleCommerceDialogMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_SETCOMMERCEDIALOGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void GetAuthInfoForWebAPI(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_GETAUTHINFOFORWEBAPI_OFFSET))(arg, nullptr);
		}

		::System::Void LaunchURL(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_LAUNCHURL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean ShowPlatformSystemMessage(::NPA::NXPConsoleSystemMessageType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NXPConsoleSystemMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_SHOWPLATFORMSYSTEMMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* GetUserDisplayName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_GETUSERDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetUserIdentifier(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_GETUSERIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean RequiresVirtualKeyboard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_REQUIRESVIRTUALKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void ShowVirtualKeyobard(::NPA::NXPConsoleVirtualKeyboardOption* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPConsoleVirtualKeyboardOption*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_SHOWVIRTUALKEYOBARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_NXPCONSOLEIMPL_.CTOR_OFFSET))(nullptr);
		}

	};
}

