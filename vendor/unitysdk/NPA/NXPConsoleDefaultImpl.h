#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyControllerType; }
namespace NPA { class INXPToyControllerEventHandler; }
namespace NPA { class NXPConsoleSystemMessageType; }
namespace NPA { class NXPConsoleCommerceDialogMode; }
namespace NPA { class NXPConsoleVirtualKeyboardOption; }

#define NPA_NXPCONSOLEDEFAULTIMPL_GETLASTACTIVECONTROLLERTYPE_OFFSET UNITYSDK_OFFSET(0x9BC5CC0)
#define NPA_NXPCONSOLEDEFAULTIMPL_SETCONTROLLEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9BC5CD0)
#define NPA_NXPCONSOLEDEFAULTIMPL_GETGAMELANGUAGE_OFFSET UNITYSDK_OFFSET(0x9BC5CE0)
#define NPA_NXPCONSOLEDEFAULTIMPL_STARTSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x9BC5D20)
#define NPA_NXPCONSOLEDEFAULTIMPL_STOPSTOREPOLICY_OFFSET UNITYSDK_OFFSET(0x9BC5D30)
#define NPA_NXPCONSOLEDEFAULTIMPL_GETAUTHINFOFORWEBAPI_OFFSET UNITYSDK_OFFSET(0x9BC5D40)
#define NPA_NXPCONSOLEDEFAULTIMPL_LAUNCHURL_OFFSET UNITYSDK_OFFSET(0x9BC5DE0)
#define NPA_NXPCONSOLEDEFAULTIMPL_SHOWPLATFORMSYSTEMMESSAGE_OFFSET UNITYSDK_OFFSET(0x9BC5DF0)
#define NPA_NXPCONSOLEDEFAULTIMPL_GETUSERDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9BC5E00)
#define NPA_NXPCONSOLEDEFAULTIMPL_GETUSERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9BC5E40)
#define NPA_NXPCONSOLEDEFAULTIMPL_REQUIRESVIRTUALKEYBOARD_OFFSET UNITYSDK_OFFSET(0x9BC5E80)
#define NPA_NXPCONSOLEDEFAULTIMPL_SETCOMMERCEDIALOGMODE_OFFSET UNITYSDK_OFFSET(0x9BC5E90)
#define NPA_NXPCONSOLEDEFAULTIMPL_SHOWVIRTUALKEYOBARD_OFFSET UNITYSDK_OFFSET(0x9BC5EA0)
#define NPA_NXPCONSOLEDEFAULTIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC5F40)

namespace NPA
{
	inline static constexpr unsigned int NXPConsoleDefaultImpl_TypeDefinitionIndex = 25596;

	class NXPConsoleDefaultImpl : public Il2CppObject
	{
	public:
		::NPA::NXPToyControllerType* GetLastActiveControllerType()
		{
			return (return (::NPA::NXPToyControllerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_GETLASTACTIVECONTROLLERTYPE_OFFSET))(nullptr);
		}

		::System::Void SetControllerEventHandler(::NPA::INXPToyControllerEventHandler* arg)
		{
			((::System::Void(*)(::NPA::INXPToyControllerEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_SETCONTROLLEREVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::String* GetGameLanguage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_GETGAMELANGUAGE_OFFSET))(nullptr);
		}

		::System::Void StartStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_STARTSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void StopStorePolicy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_STOPSTOREPOLICY_OFFSET))(nullptr);
		}

		::System::Void GetAuthInfoForWebAPI(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_GETAUTHINFOFORWEBAPI_OFFSET))(arg, nullptr);
		}

		::System::Void LaunchURL(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_LAUNCHURL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean ShowPlatformSystemMessage(::NPA::NXPConsoleSystemMessageType* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NXPConsoleSystemMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_SHOWPLATFORMSYSTEMMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* GetUserDisplayName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_GETUSERDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetUserIdentifier(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_GETUSERIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean RequiresVirtualKeyboard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_REQUIRESVIRTUALKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void SetCommerceDialogMode(::NPA::NXPConsoleCommerceDialogMode* arg)
		{
			((::System::Void(*)(::NPA::NXPConsoleCommerceDialogMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_SETCOMMERCEDIALOGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowVirtualKeyobard(::NPA::NXPConsoleVirtualKeyboardOption* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPConsoleVirtualKeyboardOption*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_SHOWVIRTUALKEYOBARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPCONSOLEDEFAULTIMPL_.CTOR_OFFSET))(nullptr);
		}

	};
}

