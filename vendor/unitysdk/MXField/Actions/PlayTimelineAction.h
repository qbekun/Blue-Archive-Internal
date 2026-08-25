#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class PlayTimelineAction; }

#define MXFIELD_ACTIONS_PLAYTIMELINEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF3FE0)
#define MXFIELD_ACTIONS_PLAYTIMELINEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF3FF0)
#define MXFIELD_ACTIONS_PLAYTIMELINEACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF4020)
#define MXFIELD_ACTIONS_PLAYTIMELINEACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xEF40B0)
#define MXFIELD_ACTIONS_PLAYTIMELINEACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xEF40E0)
#define MXFIELD_ACTIONS_PLAYTIMELINEACTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEF41E0)

namespace MXField::Actions
{
	inline static constexpr unsigned int PlayTimelineAction_TypeDefinitionIndex = 11114;

	class PlayTimelineAction : public Il2CppObject
	{
	public:
		::System::Boolean fadeOutIn; // 0x40
		::System::String* timelinePath; // 0x48
		::System::Int64 timelineId; // 0x50
		::System::Single outDuration; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYTIMELINEACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYTIMELINEACTION_.CTOR_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYTIMELINEACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXField::Actions::PlayTimelineAction* arg)
		{
			return ((::System::Boolean(*)(::MXField::Actions::PlayTimelineAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYTIMELINEACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYTIMELINEACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYTIMELINEACTION_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

