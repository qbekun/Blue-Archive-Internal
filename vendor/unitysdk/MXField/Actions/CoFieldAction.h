#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class FieldActionPlayer; }
namespace MXField::Actions::Sequencer { class FieldActionSequencer; }
namespace MXField::Actions { class FieldAction; }

#define MXFIELD_ACTIONS_COFIELDACTION_SET_SEQUENCER_OFFSET UNITYSDK_OFFSET(0xEE8ED0)
#define MXFIELD_ACTIONS_COFIELDACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEE8EE0)
#define MXFIELD_ACTIONS_COFIELDACTION_CUESUBACTION_OFFSET UNITYSDK_OFFSET(0xEE9150)
#define MXFIELD_ACTIONS_COFIELDACTION_SET_SUBACTIONPLAYER_OFFSET UNITYSDK_OFFSET(0xEE9380)
#define MXFIELD_ACTIONS_COFIELDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE8600)
#define MXFIELD_ACTIONS_COFIELDACTION_GET_SEQUENCER_OFFSET UNITYSDK_OFFSET(0xEE9390)
#define MXFIELD_ACTIONS_COFIELDACTION_DOACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xEE93A0)
#define MXFIELD_ACTIONS_COFIELDACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_ACTIONS_COFIELDACTION_GET_SUBACTIONPLAYER_OFFSET UNITYSDK_OFFSET(0xEE9430)

namespace MXField::Actions
{
	inline static constexpr unsigned int CoFieldAction_TypeDefinitionIndex = 11036;

	class CoFieldAction : public Il2CppObject
	{
	public:
		::MXField::Actions::FieldActionPlayer* _SubActionPlayer_k__BackingField; // 0x30
		::MXField::Actions::Sequencer::FieldActionSequencer* _Sequencer_k__BackingField; // 0x38

		::System::Void set_Sequencer(::MXField::Actions::Sequencer::FieldActionSequencer* arg)
		{
			((::System::Void(*)(::MXField::Actions::Sequencer::FieldActionSequencer*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COFIELDACTION_SET_SEQUENCER_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COFIELDACTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void CueSubAction(::MXField::Actions::FieldAction* arg)
		{
			((::System::Void(*)(::MXField::Actions::FieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COFIELDACTION_CUESUBACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_SubActionPlayer(::MXField::Actions::FieldActionPlayer* arg)
		{
			((::System::Void(*)(::MXField::Actions::FieldActionPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COFIELDACTION_SET_SUBACTIONPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COFIELDACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Actions::Sequencer::FieldActionSequencer* get_Sequencer()
		{
			return ((::MXField::Actions::Sequencer::FieldActionSequencer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COFIELDACTION_GET_SEQUENCER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DoActionInternal()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COFIELDACTION_DOACTIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COFIELDACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::MXField::Actions::FieldActionPlayer* get_SubActionPlayer()
		{
			return ((::MXField::Actions::FieldActionPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COFIELDACTION_GET_SUBACTIONPLAYER_OFFSET))(nullptr);
		}

	};
}

