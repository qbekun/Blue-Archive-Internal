#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class CommandFilterOperatorType; }
namespace NPA::Editor::methinks { class CommandFilterValueType; }
namespace NPA::Editor::methinks { class NXPMTKCommandFilterCondition; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_NEW_OFFSET UNITYSDK_OFFSET(0x9C2DB60)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_PARSE_OFFSET UNITYSDK_OFFSET(0x9C2DBD0)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9C2DC40)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C2E010)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_ISSATISFIEDFILTERCONDITION_OFFSET UNITYSDK_OFFSET(0x9C2E090)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x9C2E530)
#define NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2DBC0)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKCommandFilterCondition_TypeDefinitionIndex = 26753;

	class NXPMTKCommandFilterCondition : public Il2CppObject
	{
	public:
		::NPA::Editor::methinks::CommandFilterOperatorType* operatorType; // 0x10
		::NPA::Editor::methinks::CommandFilterValueType* valueType; // 0x14
		::System::String* key; // 0x18
		::System::String* value; // 0x20

		::NPA::Editor::methinks::NXPMTKCommandFilterCondition* New()
		{
			return (return (::NPA::Editor::methinks::NXPMTKCommandFilterCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_NEW_OFFSET))(nullptr);
		}

		::NPA::Editor::methinks::NXPMTKCommandFilterCondition* Parse(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::NPA::Editor::methinks::NXPMTKCommandFilterCondition*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void ParseObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfiedFilterCondition(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_ISSATISFIEDFILTERCONDITION_OFFSET))(str, nullptr);
		}

		::System::Boolean IsSatisfied(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::System::Boolean(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_ISSATISFIED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKCOMMANDFILTERCONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

