#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board { class NXPBoardManager; }
namespace NPA::Editor::Board { class NXPWebDialog; }
namespace NPA::Editor::Board { class NXPTodayDialog; }
namespace NPA::Editor::Board { class NXPSurveyDialog; }
namespace NPA::Editor::Board { class NXPCustomerServiceDialog; }
namespace NPA::Editor::Board { class NXPNexonCustomerServiceDialog; }
namespace NPA { class NPCSInfo; }
namespace NPA::Service { class NXPWebInfo; }
namespace UnityEngine { class Color32; }

#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C3EEB0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C4B670)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETWEBDIALOG_OFFSET UNITYSDK_OFFSET(0x9C4B6F0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWBATCHNOTICE_OFFSET UNITYSDK_OFFSET(0x9C4B700)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x9C4B850)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWFAQ_OFFSET UNITYSDK_OFFSET(0x9C4BEA0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWITEMPROBABILITY_OFFSET UNITYSDK_OFFSET(0x9C4C3C0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWNEXONCUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x9C4C650)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWNEXONCUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x9C4C6B0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSENEXONCUSTOMERCENTER_OFFSET UNITYSDK_OFFSET(0x9C3FFD0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWHELPCENTER_OFFSET UNITYSDK_OFFSET(0x9C4CCB0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSEHELPCENTER_OFFSET UNITYSDK_OFFSET(0x9C3FF80)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_OPENNCSURL_OFFSET UNITYSDK_OFFSET(0x9C4D100)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWTODAY_OFFSET UNITYSDK_OFFSET(0x9C4D670)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSETODAY_OFFSET UNITYSDK_OFFSET(0x9C3FF30)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWSURVEY_OFFSET UNITYSDK_OFFSET(0x9C4DF00)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSESURVEY_OFFSET UNITYSDK_OFFSET(0x9C4E040)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9C4E090)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9C4E140)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9C3F130)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWWEB_OFFSET UNITYSDK_OFFSET(0x9C4E200)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSEWEB_OFFSET UNITYSDK_OFFSET(0x9C3FE90)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETBATCHNOTICEURL_OFFSET UNITYSDK_OFFSET(0x9C4E480)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETTOYHEADERS_OFFSET UNITYSDK_OFFSET(0x9C4BD30)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETNEXONCUSTOMERCENTERURL_OFFSET UNITYSDK_OFFSET(0x9C4C870)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETNONMEMBERNEXONCUSTOMERCENTERURL_OFFSET UNITYSDK_OFFSET(0x9C4D240)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETNEXONCUSTOMERCENTERCOMPLETIONURL_OFFSET UNITYSDK_OFFSET(0x9C4CBE0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWUSERCONSENTPOPUP_OFFSET UNITYSDK_OFFSET(0x9C4E760)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETUSERCONSENTSTATE_OFFSET UNITYSDK_OFFSET(0x9C4E9F0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_SAVEUSERCONSENTSTATE_OFFSET UNITYSDK_OFFSET(0x9C4EB50)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C4ECC0)
#define NPA_EDITOR_BOARD_NXPBOARDMANAGER__CLOSEWEB_B__31_0_OFFSET UNITYSDK_OFFSET(0x9C4ED40)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPBoardManager_TypeDefinitionIndex = 26881;

	class NXPBoardManager : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::NXPBoardManager* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::System::String* pageServerBaseUrl; // 0x10
		::System::String* pageServerBaseUrl2; // 0x18
		::NPA::Editor::Board::NXPWebDialog* webDialog; // 0x20
		::NPA::Editor::Board::NXPTodayDialog* todayDialog; // 0x28
		::NPA::Editor::Board::NXPSurveyDialog* surveyDialog; // 0x30
		::NPA::Editor::Board::NXPCustomerServiceDialog* csDialog; // 0x38
		::NPA::Editor::Board::NXPNexonCustomerServiceDialog* ncsDialog; // 0x40

		::NPA::Editor::Board::NXPBoardManager* get_Instance()
		{
			return (return (::NPA::Editor::Board::NXPBoardManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::Board::NXPWebDialog* GetWebDialog()
		{
			return (return (::NPA::Editor::Board::NXPWebDialog*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETWEBDIALOG_OFFSET))(nullptr);
		}

		::System::Void ShowBatchNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWBATCHNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowNotice(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWNOTICE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowFAQ()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWFAQ_OFFSET))(nullptr);
		}

		::System::Void ShowItemProbability()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWITEMPROBABILITY_OFFSET))(nullptr);
		}

		::System::Void ShowNexonCustomerCenter(::NPA::NPCSInfo* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWNEXONCUSTOMERCENTER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void ShowNexonCustomerCenter(::System::String* str, ::NPA::NPCSInfo* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::NPCSInfo*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWNEXONCUSTOMERCENTER_OFFSET))(str, arg, str, arg, nullptr);
		}

		::System::Void CloseNexonCustomerCenter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSENEXONCUSTOMERCENTER_OFFSET))(nullptr);
		}

		::System::Void ShowHelpCenter(::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWHELPCENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CloseHelpCenter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSEHELPCENTER_OFFSET))(nullptr);
		}

		::System::Void OpenNcsUrl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_OPENNCSURL_OFFSET))(nullptr);
		}

		::System::Void ShowToday(::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWTODAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CloseToday()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSETODAY_OFFSET))(nullptr);
		}

		::System::Void ShowSurvey(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWSURVEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CloseSurvey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSESURVEY_OFFSET))(nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWWEB_OFFSET))(str, str, nullptr);
		}

		::System::Void ShowWeb(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWWEB_OFFSET))(str, str, str, nullptr);
		}

		::System::Void ShowWeb(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWWEB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowWeb(::NPA::Service::NXPWebInfo* arg, ::System::Boolean arg, ::UnityEngine::Color32* arg, ::System::Boolean arg, ::UnityEngine::Color32* arg, ::System::Boolean arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, ::System::Boolean, ::UnityEngine::Color32*, ::System::Boolean, ::UnityEngine::Color32*, ::System::Boolean, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWWEB_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CloseWeb()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_CLOSEWEB_OFFSET))(nullptr);
		}

		::System::String* GetBatchNoticeUrl(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETBATCHNOTICEURL_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetToyHeaders()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETTOYHEADERS_OFFSET))(nullptr);
		}

		::System::String* GetNexonCustomerCenterUrl(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETNEXONCUSTOMERCENTERURL_OFFSET))(str, nullptr);
		}

		::System::String* GetNonmemberNexonCustomerCenterUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETNONMEMBERNEXONCUSTOMERCENTERURL_OFFSET))(nullptr);
		}

		::System::String* GetNexonCustomerCenterCompletionUrl(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETNEXONCUSTOMERCENTERCOMPLETIONURL_OFFSET))(str, nullptr);
		}

		::System::Void ShowUserConsentPopup(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SHOWUSERCONSENTPOPUP_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetUserConsentState(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_GETUSERCONSENTSTATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SaveUserConsentState(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_SAVEUSERCONSENTSTATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _CloseWeb_b__31_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBOARDMANAGER__CLOSEWEB_B__31_0_OFFSET))(nullptr);
		}

	};
}

