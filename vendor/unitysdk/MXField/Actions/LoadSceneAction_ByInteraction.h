#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldSceneInfo; }

#define MXFIELD_ACTIONS_LOADSCENEACTION_BYINTERACTION_GET_NEEDSYNC_OFFSET UNITYSDK_OFFSET(0xEF0680)
#define MXFIELD_ACTIONS_LOADSCENEACTION_BYINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF0690)
#define MXFIELD_ACTIONS_LOADSCENEACTION_BYINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF06A0)

namespace MXField::Actions
{
	inline static constexpr unsigned int LoadSceneAction_ByInteraction_TypeDefinitionIndex = 11082;

	class LoadSceneAction_ByInteraction : public Il2CppObject
	{
	public:
		::System::Boolean get_NeedSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_BYINTERACTION_GET_NEEDSYNC_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_BYINTERACTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MXField::Shared::Data::FieldSceneInfo* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_LOADSCENEACTION_BYINTERACTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

