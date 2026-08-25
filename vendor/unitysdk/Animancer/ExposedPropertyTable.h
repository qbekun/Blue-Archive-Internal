#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerComponent; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define ANIMANCER_EXPOSEDPROPERTYTABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x4BCB30)
#define ANIMANCER_EXPOSEDPROPERTYTABLE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x4BCB80)
#define ANIMANCER_EXPOSEDPROPERTYTABLE_RESET_OFFSET UNITYSDK_OFFSET(0x4BCC00)
#define ANIMANCER_EXPOSEDPROPERTYTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BCCD0)

namespace Animancer
{
	inline static constexpr unsigned int ExposedPropertyTable_TypeDefinitionIndex = 35203;

	class ExposedPropertyTable : public Il2CppObject
	{
	public:
		::Animancer::AnimancerComponent* _Animancer; // 0x18
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXPOSEDPROPERTYTABLE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXPOSEDPROPERTYTABLE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXPOSEDPROPERTYTABLE_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EXPOSEDPROPERTYTABLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

