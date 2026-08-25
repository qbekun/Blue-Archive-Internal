#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Board { class NXPSurveyDialog; }

#define NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_SURVEYJAVASCRIPTINTERFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C55D80)
#define NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_SURVEYJAVASCRIPTINTERFACE_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x9C55FA0)

namespace NPA::Editor::Board::JavaScriptInterface
{
	inline static constexpr unsigned int SurveyJavaScriptInterface_TypeDefinitionIndex = 26912;

	class SurveyJavaScriptInterface : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::NXPSurveyDialog* surveyDialog; // 0x28

		::System::Void .ctor(::NPA::Editor::Board::NXPSurveyDialog* arg)
		{
			((::System::Void(*)(::NPA::Editor::Board::NXPSurveyDialog*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_SURVEYJAVASCRIPTINTERFACE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void GetUniqueID()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_JAVASCRIPTINTERFACE_SURVEYJAVASCRIPTINTERFACE_GETUNIQUEID_OFFSET))(nullptr);
		}

	};
}

