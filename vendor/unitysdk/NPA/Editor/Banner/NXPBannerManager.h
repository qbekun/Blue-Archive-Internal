#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXPToyPrefs; }
namespace NPA::Editor::Banner { class NXPBannerGroup; }
namespace NPA::Editor::Banner { class NXPBannerManager; }
namespace NPA::Promotion { class NXPToyBanner; }
namespace NPA::SimpleJSON { class JSONClass; }
namespace NPA::Promotion { class NXPToyCloseResult; }

#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C64EC0)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_GETBANNER_OFFSET UNITYSDK_OFFSET(0x9C650F0)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_SHOWBANNER_OFFSET UNITYSDK_OFFSET(0x9C65230)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_CLOSEBANNER_OFFSET UNITYSDK_OFFSET(0x9C65410)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_SHOWBANNERLIST_OFFSET UNITYSDK_OFFSET(0x9C654B0)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_SETDONTSHOWBANNER_OFFSET UNITYSDK_OFFSET(0x9C65EE0)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_ONCLICKBANNER_OFFSET UNITYSDK_OFFSET(0x9C65FB0)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_INCRBANNERCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x9C66680)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_SENDDEFAULTBANNERNXLOG_OFFSET UNITYSDK_OFFSET(0x9C66740)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_SENDCLICKBANNERNXLOG_OFFSET UNITYSDK_OFFSET(0x9C66990)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_SENDCLOSEBANNERNXLOG_OFFSET UNITYSDK_OFFSET(0x9C66540)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_GENERATEBANNERNXLOGDEFAULTSET_OFFSET UNITYSDK_OFFSET(0x9C66780)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_SENDBANNERNXLOG_OFFSET UNITYSDK_OFFSET(0x9C668E0)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_ISDONTSHOWBANNER_OFFSET UNITYSDK_OFFSET(0x9C65D30)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C650E0)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C66A80)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER__ONCLICKBANNER_B__15_0_OFFSET UNITYSDK_OFFSET(0x9C66B00)
#define NPA_EDITOR_BANNER_NXPBANNERMANAGER__ONCLICKBANNER_B__15_3_OFFSET UNITYSDK_OFFSET(0x9C66B10)

namespace NPA::Editor::Banner
{
	inline static constexpr unsigned int NXPBannerManager_TypeDefinitionIndex = 26925;

	class NXPBannerManager : public Il2CppObject
	{
	public:
		::System::String* BANNER_GROUPCODE_BANNER; // 0x0
		::System::String* BANNER_GROUPCODE_ENDING_BANNER; // 0x0
		::System::String* BANNER_PREF_NAME; // 0x0
		::System::String* BANNER_PREF_7DAYS; // 0x0
		::NPA::Editor::NXPToyPrefs* commonPrefCtl; // 0x10
		::NPA::Editor::Banner::NXPBannerGroup* currentBannerGroup; // 0x18
		::System::Boolean isWebViewShowing; // 0x20
		::NPA::Editor::Banner::NXPBannerManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8

		::NPA::Editor::Banner::NXPBannerManager* GetInstance()
		{
			return (return (::NPA::Editor::Banner::NXPBannerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_GETINSTANCE_OFFSET))(nullptr);
		}

		::System::Void GetBanner(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_GETBANNER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowBanner(::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_SHOWBANNER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CloseBanner()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_CLOSEBANNER_OFFSET))(nullptr);
		}

		::System::Void ShowBannerList(::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_SHOWBANNERLIST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetDontShowBanner(::System::Int32 arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_SETDONTSHOWBANNER_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void OnClickBanner(::System::Int32 arg, ::NPA::Promotion::NXPToyBanner* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Promotion::NXPToyBanner*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_ONCLICKBANNER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void IncrBannerClickCount(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_INCRBANNERCLICKCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendDefaultBannerNXLog(::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_SENDDEFAULTBANNERNXLOG_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void SendClickBannerNXLog(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_SENDCLICKBANNERNXLOG_OFFSET))(arg, arg, str, str, str, nullptr);
		}

		::System::Void SendCloseBannerNXLog(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_SENDCLOSEBANNERNXLOG_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONClass* GenerateBannerNXLogDefaultSet(::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONClass*(*)(::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_GENERATEBANNERNXLOGDEFAULTSET_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void SendBannerNXLog(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_SENDBANNERNXLOG_OFFSET))(str, nullptr);
		}

		::System::Boolean IsDontShowBanner(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_ISDONTSHOWBANNER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickBanner_b__15_0(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER__ONCLICKBANNER_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickBanner_b__15_3(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPBANNERMANAGER__ONCLICKBANNER_B__15_3_OFFSET))(arg, nullptr);
		}

	};
}

