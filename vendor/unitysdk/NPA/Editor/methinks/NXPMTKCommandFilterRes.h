#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class NXPMTKCommandFilterRes&; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C2E5D0)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_FIND_OFFSET UNITYSDK_OFFSET(0x9C2E7D0)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x9C2BAD0)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_PARSE_OFFSET UNITYSDK_OFFSET(0x9C2B7B0)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C2E810)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2E800)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKCommandFilterRes_TypeDefinitionIndex = 26754;

	class NXPMTKCommandFilterRes : public Il2CppObject
	{
	public:
		::System::String* type; // 0x10
		::System::Int32 conditionCount; // 0x18
		Il2CppObject* conditionList; // 0x20

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean Find(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_FIND_OFFSET))(str, nullptr);
		}

		::System::Boolean IsSatisfied(::System::Int64 arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_ISSATISFIED_OFFSET))(arg, str, nullptr);
		}

		::System::Void Parse(::NPA::Editor::methinks::NXPMTKCommandFilterRes&* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::Editor::methinks::NXPMTKCommandFilterRes&*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_PARSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ParseObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERRES_.CTOR_OFFSET))(nullptr);
		}

	};
}

