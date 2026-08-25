#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board::JavaScriptInterface { class CartJavaScriptInterface; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA::Promotion { class NXPToyCloseResult; }

#define NPA_EDITOR_BOARD_NXPCARTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C50780)
#define NPA_EDITOR_BOARD_NXPCARTDIALOG_ONEXECUTENATIVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9C50870)
#define NPA_EDITOR_BOARD_NXPCARTDIALOG_DISMISSWEBVIEW_OFFSET UNITYSDK_OFFSET(0x9C50BE0)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPCartDialog_TypeDefinitionIndex = 26884;

	class NXPCartDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::JavaScriptInterface::CartJavaScriptInterface* cartJs; // 0x98

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCARTDIALOG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnExecuteNativeMethod(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCARTDIALOG_ONEXECUTENATIVEMETHOD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void DismissWebView(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCARTDIALOG_DISMISSWEBVIEW_OFFSET))(arg, nullptr);
		}

	};
}

