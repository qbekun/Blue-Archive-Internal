#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;
namespace UnityEngine { class ParticleSystem; }
class RoadPuzzleTileRewardData;

#define ROADPUZZLEREWARDVISUAL_SETTILEPOSITION_OFFSET UNITYSDK_OFFSET(0x2086A10)
#define ROADPUZZLEREWARDVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0x2086AD0)
#define ROADPUZZLEREWARDVISUAL_PLAYREWARDEFFECT_OFFSET UNITYSDK_OFFSET(0x2086B60)
#define ROADPUZZLEREWARDVISUAL_DESELECT_OFFSET UNITYSDK_OFFSET(0x2086BD0)
#define ROADPUZZLEREWARDVISUAL_SETINFO_OFFSET UNITYSDK_OFFSET(0x2086C60)
#define ROADPUZZLEREWARDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2086D90)

	inline static constexpr unsigned int RoadPuzzleRewardVisual_TypeDefinitionIndex = 3443;

	class RoadPuzzleRewardVisual : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* itemObject; // 0x18
		UITexture* itemTexture; // 0x20
		UILabel* itemAmount; // 0x28
		::UnityEngine::ParticleSystem* rewardFX; // 0x30
		RoadPuzzleTileRewardData* Data; // 0x38

		::System::Void SetTilePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEREWARDVISUAL_SETTILEPOSITION_OFFSET))(nullptr);
		}

		::System::Void Select()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEREWARDVISUAL_SELECT_OFFSET))(nullptr);
		}

		::System::Void PlayRewardEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEREWARDVISUAL_PLAYREWARDEFFECT_OFFSET))(nullptr);
		}

		::System::Void Deselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEREWARDVISUAL_DESELECT_OFFSET))(nullptr);
		}

		::System::Void SetInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEREWARDVISUAL_SETINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEREWARDVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

