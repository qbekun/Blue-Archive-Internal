#pragma once
#include "../../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Editor::methinks { class NXPMTKSurveyScreenOption&; }

#define NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C35DB0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C35DE0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C2DB30)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_GENERATEOPTIONSTRING_OFFSET UNITYSDK_OFFSET(0x9C2CEB0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_PARSE_OFFSET UNITYSDK_OFFSET(0x9C2CDC0)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKSurveyScreenOption_TypeDefinitionIndex = 26771;

	class NXPMTKSurveyScreenOption : public Il2CppObject
	{
	public:
		::System::Boolean isShowTitleBar; // 0x10
		::System::Boolean isFullScreen; // 0x11
		::System::Boolean isShowCloseButton; // 0x12
		::System::Boolean isCloseInputEnabled; // 0x13
		::System::Int32 centerOffsetX; // 0x14
		::System::Int32 centerOffsetY; // 0x18
		::System::Int32 localSpaceWidth; // 0x1C
		::System::Int32 localSpaceHeight; // 0x20
		::System::Int32 backdropColorRed; // 0x24
		::System::Int32 backdropColorGreen; // 0x28
		::System::Int32 backdropColorBlue; // 0x2C
		::System::Int32 backdropColorAlpha; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ParseObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_INITIALIZE_OFFSET))(nullptr);
		}

		::System::String* GenerateOptionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_GENERATEOPTIONSTRING_OFFSET))(nullptr);
		}

		::System::Void Parse(::NPA::Editor::methinks::NXPMTKSurveyScreenOption&* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::Editor::methinks::NXPMTKSurveyScreenOption&*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYSCREENOPTION_PARSE_OFFSET))(arg, arg, nullptr);
		}

	};
}

