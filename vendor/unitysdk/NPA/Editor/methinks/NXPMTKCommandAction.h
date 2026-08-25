#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class CommandActionType; }
namespace NPA::Editor::methinks { class NXPMTKCommandActionOption; }
namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::Editor::methinks { class NXPMTKCommandAction&; }

#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2C870)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9C2C890)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_GENERATEOPTIONSTRING_OFFSET UNITYSDK_OFFSET(0x9C2B080)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C2C980)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C2C9F0)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_PARSE_OFFSET UNITYSDK_OFFSET(0x9C2B880)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKCommandAction_TypeDefinitionIndex = 26749;

	class NXPMTKCommandAction : public Il2CppObject
	{
	public:
		::NPA::Editor::methinks::CommandActionType* type; // 0x10
		::NPA::Editor::methinks::NXPMTKCommandActionOption* option; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::methinks::CommandActionType* get_Type()
		{
			return (return (::NPA::Editor::methinks::CommandActionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* GenerateOptionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_GENERATEOPTIONSTRING_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ParseObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Parse(::NPA::Editor::methinks::NXPMTKCommandAction&* arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::Editor::methinks::NXPMTKCommandAction&*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDACTION_PARSE_OFFSET))(arg, arg, nullptr);
		}

	};
}

