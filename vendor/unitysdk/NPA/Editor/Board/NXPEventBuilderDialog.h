#pragma once
#include "../../../unitysdk.h"

namespace NPA::Promotion { class NXPEventBuilderInfo; }
namespace NPA::Editor::Board { class NXPEventBuilderView; }
namespace NPA::Editor::Board::JavaScriptInterface { class EventBuilderJavaScriptInterface; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA { class NPRequestTypeTag; }
namespace NPA::SimpleJSON { class JSONClass; }
namespace NPA::Promotion { class NXPToyEventBuilderResult; }

#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C51160)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9C51300)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_GETREQUESTTAG_OFFSET UNITYSDK_OFFSET(0x9C513A0)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C513B0)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_ONPAGELOADFAILED_OFFSET UNITYSDK_OFFSET(0x9C51440)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_SETCLOSEBUTTONIMAGE_OFFSET UNITYSDK_OFFSET(0x9C51B60)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_ONEXECUTENATIVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9C51D60)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9C522A0)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_EXECUTEJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x9C52350)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_INVOKEEVENTBUILDERRESULT_OFFSET UNITYSDK_OFFSET(0x9C52460)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_SHOWALERTDIALOG_OFFSET UNITYSDK_OFFSET(0x9C524C0)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG__SHOW_B__6_0_OFFSET UNITYSDK_OFFSET(0x9C526E0)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG__SHOW_B__6_1_OFFSET UNITYSDK_OFFSET(0x9C52780)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPEventBuilderDialog_TypeDefinitionIndex = 26891;

	class NXPEventBuilderDialog : public Il2CppObject
	{
	public:
		::NPA::Promotion::NXPEventBuilderInfo* _eventBuilderInfo; // 0x98
		::NPA::Editor::Board::NXPEventBuilderView* _eventBuilderView; // 0xA0
		Il2CppObject* _eventBuilderCallback; // 0xA8
		::NPA::Editor::Board::JavaScriptInterface::EventBuilderJavaScriptInterface* _eventBuilderJs; // 0xB0
		::System::Boolean _isUpdatedCloseButton; // 0xB8

		::System::Void .ctor(::NPA::Promotion::NXPEventBuilderInfo* arg, ::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPEventBuilderInfo*, ::NPA::Service::NXPWebInfo*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_SHOW_OFFSET))(nullptr);
		}

		::NPA::NPRequestTypeTag* GetRequestTag()
		{
			return (return (::NPA::NPRequestTypeTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_GETREQUESTTAG_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnPageLoadFailed(::System::Object* arg, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_ONPAGELOADFAILED_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Void SetCloseButtonImage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_SETCLOSEBUTTONIMAGE_OFFSET))(str, nullptr);
		}

		::System::Void OnExecuteNativeMethod(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_ONEXECUTENATIVEMETHOD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::NPA::SimpleJSON::JSONClass* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONClass*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_EXECUTEJAVASCRIPT_OFFSET))(str, arg, nullptr);
		}

		::System::Void ExecuteJavaScript(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_EXECUTEJAVASCRIPT_OFFSET))(str, str, nullptr);
		}

		::System::Void InvokeEventBuilderResult(::NPA::Promotion::NXPToyEventBuilderResult* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyEventBuilderResult*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_INVOKEEVENTBUILDERRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShowAlertDialog(::System::String* str, ::NPA::Promotion::NXPToyEventBuilderResult* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Promotion::NXPToyEventBuilderResult*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG_SHOWALERTDIALOG_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void _Show_b__6_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG__SHOW_B__6_0_OFFSET))(nullptr);
		}

		::System::Void _Show_b__6_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERDIALOG__SHOW_B__6_1_OFFSET))(nullptr);
		}

	};
}

