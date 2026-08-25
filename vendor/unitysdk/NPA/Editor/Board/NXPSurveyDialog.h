#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board::JavaScriptInterface { class SurveyJavaScriptInterface; }
namespace NPA::Service { class NXPWebInfo; }

#define NPA_EDITOR_BOARD_NXPSURVEYDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C55C90)
#define NPA_EDITOR_BOARD_NXPSURVEYDIALOG_ONEXECUTENATIVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9C55F30)
#define NPA_EDITOR_BOARD_NXPSURVEYDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C56510)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPSurveyDialog_TypeDefinitionIndex = 26896;

	class NXPSurveyDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::JavaScriptInterface::SurveyJavaScriptInterface* surveyJS; // 0x98

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPSURVEYDIALOG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnExecuteNativeMethod(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPSURVEYDIALOG_ONEXECUTENATIVEMETHOD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPSURVEYDIALOG_CLOSE_OFFSET))(nullptr);
		}

	};
}

