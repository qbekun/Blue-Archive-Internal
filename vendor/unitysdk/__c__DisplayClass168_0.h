#pragma once
#include "unitysdk.h"

class CharacterVisual;
namespace UnityEngine::Playables { class PlayableAsset; }

#define <>C__DISPLAYCLASS168_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x12009F0)
#define <>C__DISPLAYCLASS168_0__LOADCUTINTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x1200A00)

	inline static constexpr unsigned int <>c__DisplayClass168_0_TypeDefinitionIndex = 938;

	class <>c__DisplayClass168_0 : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		CharacterVisual* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS168_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadCutinTimeline_b__0(::UnityEngine::Playables::PlayableAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS168_0__LOADCUTINTIMELINE_B__0_OFFSET))(arg, nullptr);
		}

	};

