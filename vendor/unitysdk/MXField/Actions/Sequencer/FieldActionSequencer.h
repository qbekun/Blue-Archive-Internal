#pragma once
#include "../../../unitysdk.h"

namespace MXField::Actions::Sequencer { class FieldActionSequencer; }
namespace MXField::Actions { class FieldActionManager; }

#define MXFIELD_ACTIONS_SEQUENCER_FIELDACTIONSEQUENCER_CREATE_OFFSET UNITYSDK_OFFSET(0xEE9830)
#define MXFIELD_ACTIONS_SEQUENCER_FIELDACTIONSEQUENCER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF7E10)

namespace MXField::Actions::Sequencer
{
	inline static constexpr unsigned int FieldActionSequencer_TypeDefinitionIndex = 11139;

	class FieldActionSequencer : public WriteCallbackInfo
	{
	public:
		::MXField::Actions::Sequencer::FieldActionSequencer* Create(::System::Object* arg)
		{
			return ((::MXField::Actions::Sequencer::FieldActionSequencer*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SEQUENCER_FIELDACTIONSEQUENCER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXField::Actions::FieldActionManager* arg, ::System::Object* arg2)
		{
			((::System::Void(*)(::MXField::Actions::FieldActionManager*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SEQUENCER_FIELDACTIONSEQUENCER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

