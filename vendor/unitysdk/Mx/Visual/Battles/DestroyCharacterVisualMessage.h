#pragma once
#include "../../../unitysdk.h"

#define MX_VISUAL_BATTLES_DESTROYCHARACTERVISUALMESSAGE_GET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1D5E650)
#define MX_VISUAL_BATTLES_DESTROYCHARACTERVISUALMESSAGE_SET_ACTOR_OFFSET UNITYSDK_OFFSET(0x1D5E660)
#define MX_VISUAL_BATTLES_DESTROYCHARACTERVISUALMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E670)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int DestroyCharacterVisualMessage_TypeDefinitionIndex = 20239;

	class DestroyCharacterVisualMessage : public ::TriInspector::TitleAttribute
	{
	public:
		CharacterVisual* _Actor_k__BackingField; // 0x18

		CharacterVisual* get_Actor()
		{
			return (return (CharacterVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_DESTROYCHARACTERVISUALMESSAGE_GET_ACTOR_OFFSET))(nullptr);
		}

		::System::Void set_Actor(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_DESTROYCHARACTERVISUALMESSAGE_SET_ACTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_DESTROYCHARACTERVISUALMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

