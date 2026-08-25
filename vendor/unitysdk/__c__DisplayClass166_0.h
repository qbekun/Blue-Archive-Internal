#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace UnityEngine::Playables { class PlayableAsset; }

#define <>C__DISPLAYCLASS166_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1200990)
#define <>C__DISPLAYCLASS166_0__LOADCUTINTIMELINEINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x12009A0)

	inline static constexpr unsigned int <>c__DisplayClass166_0_TypeDefinitionIndex = 937;

	class <>c__DisplayClass166_0 : public Il2CppObject
	{
	public:
		CharacterVisual* __4__this; // 0x10
		::System::Int32 index; // 0x18
		Il2CppObject* cb; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS166_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadCutinTimelineIndex_b__0(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS166_0__LOADCUTINTIMELINEINDEX_B__0_OFFSET))(arg, nullptr);
		}

	};

