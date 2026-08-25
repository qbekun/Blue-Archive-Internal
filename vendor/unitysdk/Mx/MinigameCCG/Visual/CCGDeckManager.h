#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::AddressableAssets { class AssetReference; }
namespace MX::Audio { class AudioPlayer; }
namespace MX::Audio { class AnimationAudioEvent; }
namespace UnityEngine { class Vector3; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_PLAYONESHOTSHUFFLEAUDIO_OFFSET UNITYSDK_OFFSET(0x1E8ADE0)
#define MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_GET_RETURNPOSITION_OFFSET UNITYSDK_OFFSET(0x1E8AF00)
#define MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_RETURNCARD_OFFSET UNITYSDK_OFFSET(0x1E8AF40)
#define MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_PLAYONESHOTMOVETOGRAVEYARDAUDIO_OFFSET UNITYSDK_OFFSET(0x1E8B0D0)
#define MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_GET_HANDCARDASSETKEY_OFFSET UNITYSDK_OFFSET(0x1E8B080)
#define MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_GETCARD_OFFSET UNITYSDK_OFFSET(0x1E8B100)
#define MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_PLAYDECKREFRESHDIRECTING_OFFSET UNITYSDK_OFFSET(0x1E8B2F0)
#define MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B470)
#define MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_PLAYONESHOTDRAWAUDIO_OFFSET UNITYSDK_OFFSET(0x1E8B480)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGDeckManager_TypeDefinitionIndex = 21174;

	class CCGDeckManager : public Il2CppObject
	{
	public:
		CCGVisualCard* prefab; // 0x18
		::UnityEngine::ParticleSystem* deckRefreshEffect; // 0x20
		::UnityEngine::AddressableAssets::AssetReference* cardAsset; // 0x28
		::MX::Audio::AudioPlayer* deckAudioPlayer; // 0x30
		::MX::Audio::AudioPlayer* graveyardAudioPlayer; // 0x38
		::MX::Audio::AnimationAudioEvent* drawAudioEvent; // 0x40
		::MX::Audio::AnimationAudioEvent* shuffleAudioEvent; // 0x48
		::MX::Audio::AnimationAudioEvent* moveGraveyardAudioEvent; // 0x50

		::System::Void PlayOneShotShuffleAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_PLAYONESHOTSHUFFLEAUDIO_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_ReturnPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_GET_RETURNPOSITION_OFFSET))(nullptr);
		}

		::System::Void ReturnCard(CCGVisualCard* arg)
		{
			((::System::Void(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_RETURNCARD_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOneShotMoveToGraveyardAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_PLAYONESHOTMOVETOGRAVEYARDAUDIO_OFFSET))(nullptr);
		}

		::System::String* get_HandCardAssetKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_GET_HANDCARDASSETKEY_OFFSET))(nullptr);
		}

		CCGVisualCard* GetCard()
		{
			return (return (CCGVisualCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_GETCARD_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayDeckRefreshDirecting()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_PLAYDECKREFRESHDIRECTING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayOneShotDrawAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGDECKMANAGER_PLAYONESHOTDRAWAUDIO_OFFSET))(nullptr);
		}

	};
}

