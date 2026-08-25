#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Plate::View { class NXPUserInfoView; }
namespace NPA::Editor { class NXToyLocaleManager; }
namespace NPA { class NPLoginType; }
namespace NPA::Service { class NXPGetExposureLoginHistoryResult; }
namespace NPA { class NXPToyResult; }

#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DC62E0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DC6470)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9DC65C0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_UPDATELOGINHISTORYEXPOSUREANDDELETESTATUS_OFFSET UNITYSDK_OFFSET(0x9DC65E0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SHOWDELETEHISTORYALERT_OFFSET UNITYSDK_OFFSET(0x9DC66D0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SHOWHELPALERT_OFFSET UNITYSDK_OFFSET(0x9DC67E0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SHOWEXPOSURETOGGLEALERT_OFFSET UNITYSDK_OFFSET(0x9DC69D0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_CHANGELOGINHISTORYSTATE_OFFSET UNITYSDK_OFFSET(0x9DC6B90)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_DELETELOGINHISTORY_OFFSET UNITYSDK_OFFSET(0x9DC6CE0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_COPYCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x9DC6DD0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9DC6F30)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG__SETCALLBACK_B__5_0_OFFSET UNITYSDK_OFFSET(0x9DC6FB0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG__SETCALLBACK_B__5_1_OFFSET UNITYSDK_OFFSET(0x9DC6FF0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG__SETCALLBACK_B__5_2_OFFSET UNITYSDK_OFFSET(0x9DC7070)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG__UPDATELOGINHISTORYEXPOSUREANDDELETESTATUS_B__7_0_OFFSET UNITYSDK_OFFSET(0x9DC71D0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG__SHOWDELETEHISTORYALERT_B__8_0_OFFSET UNITYSDK_OFFSET(0x9DC72D0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG__DELETELOGINHISTORY_B__12_0_OFFSET UNITYSDK_OFFSET(0x9DC72E0)
#define NPA_EDITOR_PLATE_NXPUSERINFODIALOG__COPYCLIPBOARD_B__13_0_OFFSET UNITYSDK_OFFSET(0x9DC73E0)

namespace NPA::Editor::Plate
{
	inline static constexpr unsigned int NXPUserInfoDialog_TypeDefinitionIndex = 26454;

	class NXPUserInfoDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Plate::View::NXPUserInfoView* userInfoView; // 0x30
		::System::Action* backPressCallback; // 0x38
		Il2CppObject* closeCallback; // 0x40
		::NPA::Editor::NXToyLocaleManager* localeManager; // 0x48

		::System::Void .ctor(::System::String* str, ::NPA::NPLoginType* arg, ::System::String* str, ::System::String* str, ::System::Action* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::NPLoginType*, ::System::String*, ::System::String*, ::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_.CTOR_OFFSET))(str, arg, str, str, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SHOW_OFFSET))(nullptr);
		}

		::System::Void UpdateLoginHistoryExposureAndDeleteStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_UPDATELOGINHISTORYEXPOSUREANDDELETESTATUS_OFFSET))(nullptr);
		}

		::System::Void ShowDeleteHistoryAlert()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SHOWDELETEHISTORYALERT_OFFSET))(nullptr);
		}

		::System::Void ShowHelpAlert()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SHOWHELPALERT_OFFSET))(nullptr);
		}

		::System::Void ShowExposureToggleAlert(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_SHOWEXPOSURETOGGLEALERT_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeLoginHistoryState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_CHANGELOGINHISTORYSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteLoginHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_DELETELOGINHISTORY_OFFSET))(nullptr);
		}

		::System::Void CopyClipBoard(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_COPYCLIPBOARD_OFFSET))(str, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__5_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG__SETCALLBACK_B__5_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__5_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG__SETCALLBACK_B__5_1_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__5_2(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG__SETCALLBACK_B__5_2_OFFSET))(str, arg, nullptr);
		}

		::System::Void _UpdateLoginHistoryExposureAndDeleteStatus_b__7_0(::NPA::Service::NXPGetExposureLoginHistoryResult* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPGetExposureLoginHistoryResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG__UPDATELOGINHISTORYEXPOSUREANDDELETESTATUS_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowDeleteHistoryAlert_b__8_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG__SHOWDELETEHISTORYALERT_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::Void _DeleteLoginHistory_b__12_0(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG__DELETELOGINHISTORY_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CopyClipBoard_b__13_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_NXPUSERINFODIALOG__COPYCLIPBOARD_B__13_0_OFFSET))(nullptr);
		}

	};
}

