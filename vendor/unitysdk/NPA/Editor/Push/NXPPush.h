#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPPushPolicies; }
namespace NPA { class NXPToyResult; }
namespace NPA { class NXPPushPolicy; }
namespace NPA::Editor::Push { class NXPPushMenuOption; }
namespace NPA::Editor { class NPListener; }
namespace NPA::Editor::Push { class NXPPushFactory; }

#define NPA_EDITOR_PUSH_NXPPUSH_REGISTERPUSH_OFFSET UNITYSDK_OFFSET(0x9C07210)
#define NPA_EDITOR_PUSH_NXPPUSH_GETPOLICY_OFFSET UNITYSDK_OFFSET(0x9C073D0)
#define NPA_EDITOR_PUSH_NXPPUSH_SETPOLICY_OFFSET UNITYSDK_OFFSET(0x9C07510)
#define NPA_EDITOR_PUSH_NXPPUSH_VALIDATEPOLICIES_OFFSET UNITYSDK_OFFSET(0x9C07690)
#define NPA_EDITOR_PUSH_NXPPUSH_ISEMPTYORDISABLED_OFFSET UNITYSDK_OFFSET(0x9C077D0)
#define NPA_EDITOR_PUSH_NXPPUSH_ISENABLEDPOLICY_OFFSET UNITYSDK_OFFSET(0x9C077E0)
#define NPA_EDITOR_PUSH_NXPPUSH_CACHEPUSHPOLICIES_OFFSET UNITYSDK_OFFSET(0x9C077F0)
#define NPA_EDITOR_PUSH_NXPPUSH_SHOWPUSHSETTINGDIALOG_OFFSET UNITYSDK_OFFSET(0x9C07980)
#define NPA_EDITOR_PUSH_NXPPUSH_SHOWPUSHSETTINGDIALOG_OFFSET UNITYSDK_OFFSET(0x9C07BB0)
#define NPA_EDITOR_PUSH_NXPPUSH_CREATEPUSHFACTORY_OFFSET UNITYSDK_OFFSET(0x9C07B60)
#define NPA_EDITOR_PUSH_NXPPUSH_GETPUSHSERVICEVERSION_OFFSET UNITYSDK_OFFSET(0x9C07DA0)
#define NPA_EDITOR_PUSH_NXPPUSH_ONPUSHRECEIVE_OFFSET UNITYSDK_OFFSET(0x9C07DB0)
#define NPA_EDITOR_PUSH_NXPPUSH_SENDAPPLAUNCHBYPUSHLOG_OFFSET UNITYSDK_OFFSET(0x9C07DC0)
#define NPA_EDITOR_PUSH_NXPPUSH_SENDAPPLAUNCHBYDEEPLINKLOG_OFFSET UNITYSDK_OFFSET(0x9C07DD0)
#define NPA_EDITOR_PUSH_NXPPUSH_SENDAPPLAUNCHBYNXPATCHERPUSHLOG_OFFSET UNITYSDK_OFFSET(0x9C07DE0)

namespace NPA::Editor::Push
{
	inline static constexpr unsigned int NXPPush_TypeDefinitionIndex = 26557;

	class NXPPush : public Il2CppObject
	{
	public:
		::System::Int32 VERSION1; // 0x0
		::System::Int32 VERSION2; // 0x0
		::System::String* pushKey; // 0x0
		::System::String* KEY_AD_PUSH_POLICY; // 0x0
		::System::String* KEY_NIGHT_PUSH_POLICY; // 0x0
		Il2CppObject* adPushEnabled; // 0x8
		Il2CppObject* nightPushEnabled; // 0xA

		::System::Void RegisterPush(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_REGISTERPUSH_OFFSET))(str, str, nullptr);
		}

		::System::Void GetPolicy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_GETPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetPolicy(::NPA::NXPPushPolicies* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXPPushPolicies*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_SETPOLICY_OFFSET))(arg, arg, nullptr);
		}

		::NPA::NXPToyResult* ValidatePolicies(::NPA::NXPPushPolicies* arg)
		{
			return (return (::NPA::NXPToyResult*(*)(::NPA::NXPPushPolicies*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_VALIDATEPOLICIES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEmptyOrDisabled(::NPA::NXPPushPolicy* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NXPPushPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_ISEMPTYORDISABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEnabledPolicy(::NPA::NXPPushPolicy* arg)
		{
			return (return (::System::Boolean(*)(::NPA::NXPPushPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_ISENABLEDPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void CachePushPolicies(::NPA::NXPPushPolicies* arg)
		{
			((::System::Void(*)(::NPA::NXPPushPolicies*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_CACHEPUSHPOLICIES_OFFSET))(arg, nullptr);
		}

		::System::Void showPushSettingDialog(::NPA::Editor::Push::NXPPushMenuOption* arg, ::NPA::Editor::NPListener* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushMenuOption*, ::NPA::Editor::NPListener*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_SHOWPUSHSETTINGDIALOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowPushSettingDialog(::NPA::Editor::Push::NXPPushMenuOption* arg, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Editor::Push::NXPPushMenuOption*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_SHOWPUSHSETTINGDIALOG_OFFSET))(arg, arg, arg, nullptr);
		}

		::NPA::Editor::Push::NXPPushFactory* CreatePushFactory()
		{
			return (return (::NPA::Editor::Push::NXPPushFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_CREATEPUSHFACTORY_OFFSET))(nullptr);
		}

		::System::Int32 GetPushServiceVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_GETPUSHSERVICEVERSION_OFFSET))(nullptr);
		}

		::System::Void onPushReceive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_ONPUSHRECEIVE_OFFSET))(nullptr);
		}

		::System::Void sendAppLaunchByPushLog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_SENDAPPLAUNCHBYPUSHLOG_OFFSET))(nullptr);
		}

		::System::Void sendAppLaunchByDeepLinkLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_SENDAPPLAUNCHBYDEEPLINKLOG_OFFSET))(str, nullptr);
		}

		::System::Void sendAppLaunchByNxpatcherPushLog(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PUSH_NXPPUSH_SENDAPPLAUNCHBYNXPATCHERPUSHLOG_OFFSET))(arg, nullptr);
		}

	};
}

