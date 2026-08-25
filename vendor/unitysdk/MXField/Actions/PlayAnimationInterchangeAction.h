#pragma once
#include "../../unitysdk.h"

namespace MXField::Core { class FieldEntityController; }
namespace Animancer { class ClipTransition; }

#define MXFIELD_ACTIONS_PLAYANIMATIONINTERCHANGEACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF18D0)
#define MXFIELD_ACTIONS_PLAYANIMATIONINTERCHANGEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF1960)

namespace MXField::Actions
{
	inline static constexpr unsigned int PlayAnimationInterchangeAction_TypeDefinitionIndex = 11097;

	class PlayAnimationInterchangeAction : public Il2CppObject
	{
	public:
		::MXField::Core::FieldEntityController* entity; // 0x40
		::Animancer::ClipTransition* clip; // 0x48
		::System::Single waitTime; // 0x50

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYANIMATIONINTERCHANGEACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYANIMATIONINTERCHANGEACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

