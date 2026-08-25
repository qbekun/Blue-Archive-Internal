#pragma once
#include "../../unitysdk.h"

namespace FlatData { class FieldInteractionType; }
namespace MXField::Shared::Data { class FieldInteractionInfo; }

#define MXFIELD_ACTIONS_INTERACTIONFINISHEDCONTAINSTAGEACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEEEAD0)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDCONTAINSTAGEACTION___N__0_OFFSET UNITYSDK_OFFSET(0xEEEB60)
#define MXFIELD_ACTIONS_INTERACTIONFINISHEDCONTAINSTAGEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEEBD0)

namespace MXField::Actions
{
	inline static constexpr unsigned int InteractionFinishedContainStageAction_TypeDefinitionIndex = 11073;

	class InteractionFinishedContainStageAction : public Il2CppObject
	{
	public:
		::FlatData::FieldInteractionType* stageInteractionType; // 0x50

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDCONTAINSTAGEACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDCONTAINSTAGEACTION___N__0_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldInteractionType* arg, ::MXField::Shared::Data::FieldInteractionInfo* arg2)
		{
			((::System::Void(*)(::FlatData::FieldInteractionType*, ::MXField::Shared::Data::FieldInteractionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_INTERACTIONFINISHEDCONTAINSTAGEACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

