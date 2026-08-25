#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldInteractionInfo; }
namespace MXField::Core::Save { class FieldSaveRepository; }
namespace MXField::Core::Save { class FieldSaveSO; }

#define MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_ENTERFIELD_OFFSET UNITYSDK_OFFSET(0xEF6440)
#define MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION__EXECUTE_B__7_0_OFFSET UNITYSDK_OFFSET(0xEF65F0)
#define MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_CORETURNTOFIELD_OFFSET UNITYSDK_OFFSET(0xEF6B60)
#define MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_RESERVENEXTSCENE_OFFSET UNITYSDK_OFFSET(0xEF6C10)
#define MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF6C70)
#define MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEF6CB0)

namespace MXField::Actions
{
	inline static constexpr unsigned int PlayUnderCoverStageAction_TypeDefinitionIndex = 11136;

	class PlayUnderCoverStageAction : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldInteractionInfo* interactionInfo; // 0x30
		::System::Int64 undercoverStageId; // 0x38
		Il2CppObject* nextSceneId; // 0x40
		::System::Int64 eventSeasonId; // 0x50
		::System::Boolean isClientOnly; // 0x58

		::System::Void EnterField(::MXField::Core::Save::FieldSaveRepository* arg, ::MXField::Core::Save::FieldSaveSO* arg2)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveRepository*, ::MXField::Core::Save::FieldSaveSO*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_ENTERFIELD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _Execute_b__7_0(::MXField::Core::Save::FieldSaveSO* arg)
		{
			((::System::Void(*)(::MXField::Core::Save::FieldSaveSO*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION__EXECUTE_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoReturnToField(::System::Boolean arg, ::MXField::Core::Save::FieldSaveSO* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::MXField::Core::Save::FieldSaveSO*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_CORETURNTOFIELD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReserveNextScene(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_RESERVENEXTSCENE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldInteractionInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldInteractionInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYUNDERCOVERSTAGEACTION_EXECUTE_OFFSET))(nullptr);
		}

	};
}

