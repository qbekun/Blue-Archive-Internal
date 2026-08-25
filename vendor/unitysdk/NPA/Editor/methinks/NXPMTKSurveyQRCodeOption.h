#pragma once
#include "../../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Editor::methinks { class NXPMTKSurveyQRCodeOption&; }

#define NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C35AC0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C35B80)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_PARSE_OFFSET UNITYSDK_OFFSET(0x9C2B960)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C35AE0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_GENERATEOPTIONSTRING_OFFSET UNITYSDK_OFFSET(0x9C2B1A0)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKSurveyQRCodeOption_TypeDefinitionIndex = 26770;

	class NXPMTKSurveyQRCodeOption : public Il2CppObject
	{
	public:
		::System::String* defaultLanguage; // 0x10
		::System::Int32 useShortCut; // 0x18
		::System::String* logoImagePath; // 0x20
		::System::String* backgroundImagePath; // 0x28
		Il2CppObject* localizationDictionary; // 0x30
		::System::String* backgroundColor; // 0x38
		::System::Int32 logoSizePercent; // 0x40
		::System::Int32 errorCorrectionLevel; // 0x44

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ParseObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Parse(::NPA::Editor::methinks::NXPMTKSurveyQRCodeOption&* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::methinks::NXPMTKSurveyQRCodeOption&*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_PARSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_INITIALIZE_OFFSET))(nullptr);
		}

		::System::String* GenerateOptionString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYQRCODEOPTION_GENERATEOPTIONSTRING_OFFSET))(str, nullptr);
		}

	};
}

