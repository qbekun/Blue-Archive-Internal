#pragma once
#include "../../../unitysdk.h"

#define MX_VISUAL_BATTLES_DEACTIVATECHARACTERVISUALMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E600)
#define MX_VISUAL_BATTLES_DEACTIVATECHARACTERVISUALMESSAGE_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1D5E630)
#define MX_VISUAL_BATTLES_DEACTIVATECHARACTERVISUALMESSAGE_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1D5E640)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int DeactivateCharacterVisualMessage_TypeDefinitionIndex = 20238;

	class DeactivateCharacterVisualMessage : public ::TriInspector::TitleAttribute
	{
	public:
		CharacterVisual* _Actor_k__BackingField; // 0x18

		::System::Void .ctor(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_DEACTIVATECHARACTERVISUALMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Actor(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_DEACTIVATECHARACTERVISUALMESSAGE_SET_ACTOR_OFFSET))(arg, nullptr);
		}

		CharacterVisual* get_Actor()
		{
			return (return (CharacterVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_DEACTIVATECHARACTERVISUALMESSAGE_GET_ACTOR_OFFSET))(nullptr);
		}

	};
}

