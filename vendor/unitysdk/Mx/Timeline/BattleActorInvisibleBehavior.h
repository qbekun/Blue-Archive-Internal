#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }

#define MX_TIMELINE_BATTLEACTORINVISIBLEBEHAVIOR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE213A0)
#define MX_TIMELINE_BATTLEACTORINVISIBLEBEHAVIOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE21580)
#define MX_TIMELINE_BATTLEACTORINVISIBLEBEHAVIOR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE21590)

namespace Mx::Timeline
{
	inline static constexpr unsigned int BattleActorInvisibleBehavior_TypeDefinitionIndex = 10363;

	class BattleActorInvisibleBehavior : public Il2CppObject
	{
	public:
		Il2CppObject* actors; // 0x10

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_BATTLEACTORINVISIBLEBEHAVIOR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_BATTLEACTORINVISIBLEBEHAVIOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_BATTLEACTORINVISIBLEBEHAVIOR_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

	};
}

