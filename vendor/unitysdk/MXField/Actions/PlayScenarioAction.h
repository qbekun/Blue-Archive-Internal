#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class BGMPlayInfo; }
namespace MXField::Actions { class PlayScenarioAction; }
class ConditionalBGMInfo;

#define MXFIELD_ACTIONS_PLAYSCENARIOACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF2930)
#define MXFIELD_ACTIONS_PLAYSCENARIOACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF2940)
#define MXFIELD_ACTIONS_PLAYSCENARIOACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF2970)
#define MXFIELD_ACTIONS_PLAYSCENARIOACTION_ONSCENARIOFINISHED_OFFSET UNITYSDK_OFFSET(0xEF2A00)
#define MXFIELD_ACTIONS_PLAYSCENARIOACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xEF3340)
#define MXFIELD_ACTIONS_PLAYSCENARIOACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xEF3360)
#define MXFIELD_ACTIONS_PLAYSCENARIOACTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEF3450)
#define MXFIELD_ACTIONS_PLAYSCENARIOACTION__ONSCENARIOFINISHED_B__6_1_OFFSET UNITYSDK_OFFSET(0xEF3460)

namespace MXField::Actions
{
	inline static constexpr unsigned int PlayScenarioAction_TypeDefinitionIndex = 11108;

	class PlayScenarioAction : public Il2CppObject
	{
	public:
		::System::Int64 ScenarioGroupId; // 0x40
		::System::Boolean isPlaying; // 0x48
		::MX::Data::BGMPlayInfo* bgmPlayInfoPrev; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSCENARIOACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSCENARIOACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSCENARIOACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void OnScenarioFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSCENARIOACTION_ONSCENARIOFINISHED_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXField::Actions::PlayScenarioAction* arg)
		{
			return ((::System::Boolean(*)(::MXField::Actions::PlayScenarioAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSCENARIOACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSCENARIOACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSCENARIOACTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean _OnScenarioFinished_b__6_1(ConditionalBGMInfo* arg)
		{
			return ((::System::Boolean(*)(ConditionalBGMInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYSCENARIOACTION__ONSCENARIOFINISHED_B__6_1_OFFSET))(arg, nullptr);
		}

	};
}

