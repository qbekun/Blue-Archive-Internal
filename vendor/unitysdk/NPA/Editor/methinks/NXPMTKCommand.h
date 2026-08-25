#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class NXPMTKCommandAction; }
namespace NPA::Editor::methinks { class NXPMTKCommandFilterRes; }
namespace NPA::Editor::methinks { class NXPMTKSurveyQRCodeOption; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_METHINKS_NXPMTKCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2AB30)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMAND_GENERATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C2AB70)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMAND_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C2B660)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMAND_DISABLE_OFFSET UNITYSDK_OFFSET(0x9C2BA40)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMAND_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x9C2BA50)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMAND_PARSE_OFFSET UNITYSDK_OFFSET(0x9C2BEA0)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMAND_SEARCH_OFFSET UNITYSDK_OFFSET(0x9C2C5A0)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKCommand_TypeDefinitionIndex = 26747;

	class NXPMTKCommand : public Il2CppObject
	{
	public:
		::System::Boolean enable; // 0x10
		::System::String* commandId; // 0x18
		::System::Boolean isOneTimeTrigger; // 0x20
		::System::String* authToken; // 0x28
		::System::Int32 surveyOptionType; // 0x30
		::NPA::Editor::methinks::NXPMTKCommandAction* commandAction; // 0x38
		::NPA::Editor::methinks::NXPMTKCommandFilterRes* commandFilterRes; // 0x40
		::NPA::Editor::methinks::NXPMTKSurveyQRCodeOption* surveyQRCodeOption; // 0x48

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMAND_.CTOR_OFFSET))(str, nullptr);
		}

		Il2CppObject* GenerateMessage(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMAND_GENERATEMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void ParseObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMAND_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMAND_DISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* IsSatisfied(::System::Int64 arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMAND_ISSATISFIED_OFFSET))(arg, str, str, nullptr);
		}

		::System::Boolean Parse(Il2CppObject&* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMAND_PARSE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Search(Il2CppObject&* arg, ::System::Int64 arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMAND_SEARCH_OFFSET))(arg, arg, str, str, nullptr);
		}

	};
}

