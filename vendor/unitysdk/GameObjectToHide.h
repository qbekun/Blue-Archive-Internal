#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define GAMEOBJECTTOHIDE_COHIDE_OFFSET UNITYSDK_OFFSET(0x15A8520)

	inline static constexpr unsigned int GameObjectToHide_TypeDefinitionIndex = 1098;

	class GameObjectToHide : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* ObjectToHide; // 0x10
		::System::Single HideDelaySecond; // 0x18

		::System::Collections::IEnumerator* CoHide()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEOBJECTTOHIDE_COHIDE_OFFSET))(nullptr);
		}

	};

