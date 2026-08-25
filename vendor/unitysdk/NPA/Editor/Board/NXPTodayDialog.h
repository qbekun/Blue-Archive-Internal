#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board { class NXPTodayView; }
namespace NPA::Editor { class NXPToyPrefs; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA { class NPRequestTypeTag; }
namespace NPA { class NXPToyResult; }

#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C56530)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_GETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9C56A10)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_GETREQUESTTAG_OFFSET UNITYSDK_OFFSET(0x9C56A40)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_ONLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9C56A50)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C56D10)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_SETSCHEMEACTION_OFFSET UNITYSDK_OFFSET(0x9C56740)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_GETSCHEMEACTION_OFFSET UNITYSDK_OFFSET(0x9C56E60)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_ONCLOSEFORCOMMUNITYPOPUP_OFFSET UNITYSDK_OFFSET(0x9C56ED0)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_UPDATEDONOTSHOWTODAYSTATUS_OFFSET UNITYSDK_OFFSET(0x9C56EF0)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C56FD0)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG__SETCALLBACK_B__11_0_OFFSET UNITYSDK_OFFSET(0x9C56FF0)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG__SETCALLBACK_B__11_1_OFFSET UNITYSDK_OFFSET(0x9C57080)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG__GETSCHEMEACTION_B__13_0_OFFSET UNITYSDK_OFFSET(0x9C57120)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG__GETSCHEMEACTION_B__13_2_OFFSET UNITYSDK_OFFSET(0x9C57630)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG__GETSCHEMEACTION_B__13_3_OFFSET UNITYSDK_OFFSET(0x9C577B0)
#define NPA_EDITOR_BOARD_NXPTODAYDIALOG__GETSCHEMEACTION_B__13_4_OFFSET UNITYSDK_OFFSET(0x9C577D0)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPTodayDialog_TypeDefinitionIndex = 26898;

	class NXPTodayDialog : public Il2CppObject
	{
	public:
		::System::String* SCHEME_COMMUNITY; // 0x98
		::System::String* SCHEME_BROWSER; // 0xA0
		::System::Int32 groupCode; // 0xA8
		::System::Boolean useDoNotShowToday; // 0xAC
		Il2CppObject* todayCallback; // 0xB0
		::NPA::Editor::Board::NXPTodayView* todayView; // 0xB8
		::NPA::Editor::NXPToyPrefs* commonPrefCtl; // 0xC0

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, ::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, ::System::Int32, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* GetScreenName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_GETSCREENNAME_OFFSET))(nullptr);
		}

		::NPA::NPRequestTypeTag* GetRequestTag()
		{
			return (return (::NPA::NPRequestTypeTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_GETREQUESTTAG_OFFSET))(nullptr);
		}

		::System::Void OnLoadProgressChanged(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_ONLOADPROGRESSCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void SetSchemeAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_SETSCHEMEACTION_OFFSET))(nullptr);
		}

		Il2CppObject* GetSchemeAction()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_GETSCHEMEACTION_OFFSET))(nullptr);
		}

		::System::Void OnCloseForCommunityPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_ONCLOSEFORCOMMUNITYPOPUP_OFFSET))(nullptr);
		}

		::System::Void UpdateDoNotShowTodayStatus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_UPDATEDONOTSHOWTODAYSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__11_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG__SETCALLBACK_B__11_0_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__11_1(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG__SETCALLBACK_B__11_1_OFFSET))(str, arg, nullptr);
		}

		::System::Void _GetSchemeAction_b__13_0(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG__GETSCHEMEACTION_B__13_0_OFFSET))(str, str, nullptr);
		}

		::System::Void _GetSchemeAction_b__13_2(::NPA::NXPToyResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG__GETSCHEMEACTION_B__13_2_OFFSET))(arg, nullptr);
		}

		::System::Void _GetSchemeAction_b__13_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG__GETSCHEMEACTION_B__13_3_OFFSET))(nullptr);
		}

		::System::Void _GetSchemeAction_b__13_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYDIALOG__GETSCHEMEACTION_B__13_4_OFFSET))(nullptr);
		}

	};
}

