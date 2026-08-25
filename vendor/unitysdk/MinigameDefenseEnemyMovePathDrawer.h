#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class LineRenderer; }

#define MINIGAMEDEFENSEENEMYMOVEPATHDRAWER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA58060)
#define MINIGAMEDEFENSEENEMYMOVEPATHDRAWER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA58260)
#define MINIGAMEDEFENSEENEMYMOVEPATHDRAWER_PLAYPATHANDFADEOUT_OFFSET UNITYSDK_OFFSET(0xA582F0)
#define MINIGAMEDEFENSEENEMYMOVEPATHDRAWER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA58380)

	inline static constexpr unsigned int MinigameDefenseEnemyMovePathDrawer_TypeDefinitionIndex = 495;

	class MinigameDefenseEnemyMovePathDrawer : public Il2CppObject
	{
	public:
		Il2CppObject* pathPoints; // 0x18
		::UnityEngine::GameObject* lineRendererPrefab; // 0x20
		::UnityEngine::Material* materialForFormation; // 0x28
		::UnityEngine::Material* materialForInGame; // 0x30
		::System::Single uiFormationPathDrawTime; // 0x38
		::System::Single uiFormationFadeOutDuration; // 0x3C
		::System::Single inGamePathDrawTime; // 0x40
		::System::Single inGameFadeOutDuration; // 0x44
		::UnityEngine::LineRenderer* lineRenderer; // 0x48
		::System::Single pathDrawTime; // 0x50
		::System::Single fadeOutDuration; // 0x54

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEENEMYMOVEPATHDRAWER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEENEMYMOVEPATHDRAWER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayPathAndFadeOut()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEENEMYMOVEPATHDRAWER_PLAYPATHANDFADEOUT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSEENEMYMOVEPATHDRAWER_ONENABLE_OFFSET))(nullptr);
		}

	};

