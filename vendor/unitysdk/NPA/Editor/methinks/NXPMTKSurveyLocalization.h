#pragma once
#include "../../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Editor::methinks { class NXPMTKSurveyLocalization; }

#define NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C32120)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C32180)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C321B0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_GETLANGUAGECODE_OFFSET UNITYSDK_OFFSET(0x9C322F0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_GENERATELOCALESTRING_OFFSET UNITYSDK_OFFSET(0x9C32300)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_GETLANGUAGECODELIST_OFFSET UNITYSDK_OFFSET(0x9C32840)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_GETLOCALECODE_OFFSET UNITYSDK_OFFSET(0x9C32560)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_PARSE_OFFSET UNITYSDK_OFFSET(0x9C32E60)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_FIND_OFFSET UNITYSDK_OFFSET(0x9C331D0)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKSurveyLocalization_TypeDefinitionIndex = 26762;

	class NXPMTKSurveyLocalization : public Il2CppObject
	{
	public:
		::System::String* languageCode; // 0x10
		::System::String* title; // 0x18
		::System::String* description; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void ParseObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::String* GetLanguageCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_GETLANGUAGECODE_OFFSET))(nullptr);
		}

		::System::String* GenerateLocaleString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_GENERATELOCALESTRING_OFFSET))(nullptr);
		}

		Il2CppObject* GetLanguageCodeList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_GETLANGUAGECODELIST_OFFSET))(nullptr);
		}

		::System::String* GetLocaleCode(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_GETLOCALECODE_OFFSET))(str, nullptr);
		}

		::System::Void Parse(Il2CppObject&* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_PARSE_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Editor::methinks::NXPMTKSurveyLocalization* Find(Il2CppObject&* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::NPA::Editor::methinks::NXPMTKSurveyLocalization*(*)(Il2CppObject&*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYLOCALIZATION_FIND_OFFSET))(arg, str, str, nullptr);
		}

	};
}

