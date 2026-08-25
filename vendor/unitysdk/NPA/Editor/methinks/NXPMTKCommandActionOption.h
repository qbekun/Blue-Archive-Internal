#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class NXPMTKSurveyScreenOption; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Editor::methinks { class NXPMTKCommandActionOption&; }

#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C2CC20)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_CONVERTSTRINGOFFSETDURATION_OFFSET UNITYSDK_OFFSET(0x9C2C8A0)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_CONVERTSTRINGSURVEYSCREENOPTION_OFFSET UNITYSDK_OFFSET(0x9C2C930)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C2C9C0)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_PARSE_OFFSET UNITYSDK_OFFSET(0x9C2CB50)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2DB50)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKCommandActionOption_TypeDefinitionIndex = 26750;

	class NXPMTKCommandActionOption : public Il2CppObject
	{
	public:
		::System::Int64 offset; // 0x10
		::System::Int64 duration; // 0x18
		::System::String* surveyPackId; // 0x20
		::System::Boolean forceRecording; // 0x28
		::NPA::Editor::methinks::NXPMTKSurveyScreenOption* surveyScreenOption; // 0x30

		::System::Void ParseObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::String* ConvertStringOffsetDuration()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_CONVERTSTRINGOFFSETDURATION_OFFSET))(nullptr);
		}

		::System::String* ConvertStringSurveyScreenOption()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_CONVERTSTRINGSURVEYSCREENOPTION_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Parse(::NPA::Editor::methinks::NXPMTKCommandActionOption&* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::Editor::methinks::NXPMTKCommandActionOption&*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_PARSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTIONOPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

