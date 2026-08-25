#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class Playable; }

#define MXTIMELINE_CUSTOMTRACKBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE03910)
#define MXTIMELINE_CUSTOMTRACKBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE03930)
#define MXTIMELINE_CUSTOMTRACKBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02850)

namespace MXTimeline
{
	inline static constexpr unsigned int CustomTrackBehaviour_TypeDefinitionIndex = 10240;

	class CustomTrackBehaviour : public Il2CppObject
	{
	public:
		::System::Single totalWeight; // 0x10
		::System::Single progress; // 0x14
		::UnityEngine::GameObject* owner; // 0x18
		::System::Boolean autoDeActivate; // 0x20

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACKBEHAVIOUR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACKBEHAVIOUR_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACKBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

