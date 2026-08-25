#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINESHOT_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x281D530)
#define CINEMACHINESHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x281DB00)
#define CINEMACHINESHOT_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x281DB10)

	inline static constexpr unsigned int CinemachineShot_TypeDefinitionIndex = 34188;

	class CinemachineShot : public Il2CppObject
	{
	public:
		::System::String* DisplayName; // 0x18
		Il2CppObject* VirtualCamera; // 0x20

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINESHOT_GATHERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINESHOT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINESHOT_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

	};

