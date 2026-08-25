#pragma once
#include "unitysdk.h"

class Oc9f989cd0ec86a7994f7db906d6d9dfd4f8c9be285f80227c388947f1bd955b5;
class Type;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define TIMELINEBATTLEVOICECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204A670)
#define TIMELINEBATTLEVOICECONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x204A680)

	inline static constexpr unsigned int TimeLineBattleVoiceController_TypeDefinitionIndex = 3291;

	class TimeLineBattleVoiceController : public Il2CppObject
	{
	public:
		::System::Boolean IsInit; // 0x18
		Oc9f989cd0ec86a7994f7db906d6d9dfd4f8c9be285f80227c388947f1bd955b5* CharacterType; // 0x1C
		Type* SequenceType; // 0x20
		::System::Boolean IsPlay; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEBATTLEVOICECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEBATTLEVOICECONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

