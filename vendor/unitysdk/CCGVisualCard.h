#pragma once
#include "unitysdk.h"

namespace TMPro { class TMP_Text; }
namespace UnityEngine::AddressableAssets { class AssetReference; }
namespace MX::Audio { class AnimationAudioEvent; }
namespace MX::MinigameCCG { class CCGCard; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace MX::MinigameCCG { class EventCardSnapShot; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class ICCGCardData; }

#define CCGVISUALCARD_GET_ISPENDINGSTATE_OFFSET UNITYSDK_OFFSET(0x26E7470)
#define CCGVISUALCARD_SET_ISPENDINGSTATE_OFFSET UNITYSDK_OFFSET(0x26E7480)
#define CCGVISUALCARD_TRYUSEENTITY_OFFSET UNITYSDK_OFFSET(0x26E7490)
#define CCGVISUALCARD_GET_CARD_OFFSET UNITYSDK_OFFSET(0x26E74E0)
#define CCGVISUALCARD_GET_COST_OFFSET UNITYSDK_OFFSET(0x26E74F0)
#define CCGVISUALCARD_GET_HANDCARDSPAWN_OFFSET UNITYSDK_OFFSET(0x26E7500)
#define CCGVISUALCARD_GET_HANDCARDSPAWNKEY_OFFSET UNITYSDK_OFFSET(0x26E7510)
#define CCGVISUALCARD_GET_CARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x26E7560)
#define CCGVISUALCARD_GET_CARDAVAILABLEKEY_OFFSET UNITYSDK_OFFSET(0x26E7570)
#define CCGVISUALCARD_GET_CARDDESTROY_OFFSET UNITYSDK_OFFSET(0x26E75C0)
#define CCGVISUALCARD_GET_CARDDESTROYKEY_OFFSET UNITYSDK_OFFSET(0x26E75D0)
#define CCGVISUALCARD_ACTIVECOSTLABEL_OFFSET UNITYSDK_OFFSET(0x26E7620)
#define CCGVISUALCARD_GETDESTROYEFFECT_OFFSET UNITYSDK_OFFSET(0x26E7680)
#define CCGVISUALCARD_PLAYONESHOTSELECTAUDIO_OFFSET UNITYSDK_OFFSET(0x26E7740)
#define CCGVISUALCARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26E7770)
#define CCGVISUALCARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26E7B50)
#define CCGVISUALCARD_REFRESH_OFFSET UNITYSDK_OFFSET(0x26E78E0)
#define CCGVISUALCARD_ONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x26E7D90)
#define CCGVISUALCARD_OPENHANDBOARD_OFFSET UNITYSDK_OFFSET(0x26E7E10)
#define CCGVISUALCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E8060)

	inline static constexpr unsigned int CCGVisualCard_TypeDefinitionIndex = 400;

	class CCGVisualCard : public Il2CppObject
	{
	public:
		::TMPro::TMP_Text* cost; // 0x68
		::UnityEngine::AddressableAssets::AssetReference* handCardSpawn; // 0x70
		::UnityEngine::AddressableAssets::AssetReference* cardAvailable; // 0x78
		::UnityEngine::AddressableAssets::AssetReference* cardDestroy; // 0x80
		::MX::Audio::AnimationAudioEvent* selectAudioEvent; // 0x88
		::MX::MinigameCCG::CCGCard* card; // 0x90
		::System::Boolean _IsPendingState_k__BackingField; // 0x98
		::System::Int32 curCost; // 0x9C

		::System::Boolean get_IsPendingState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GET_ISPENDINGSTATE_OFFSET))(nullptr);
		}

		::System::Void set_IsPendingState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_SET_ISPENDINGSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryUseEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_TRYUSEENTITY_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGCard* get_Card()
		{
			return ((::MX::MinigameCCG::CCGCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GET_CARD_OFFSET))(nullptr);
		}

		::System::Int32 get_Cost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GET_COST_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* get_HandCardSpawn()
		{
			return ((::UnityEngine::AddressableAssets::AssetReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GET_HANDCARDSPAWN_OFFSET))(nullptr);
		}

		::System::String* get_HandCardSpawnKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GET_HANDCARDSPAWNKEY_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* get_CardAvailable()
		{
			return ((::UnityEngine::AddressableAssets::AssetReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GET_CARDAVAILABLE_OFFSET))(nullptr);
		}

		::System::String* get_CardAvailableKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GET_CARDAVAILABLEKEY_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::AssetReference* get_CardDestroy()
		{
			return ((::UnityEngine::AddressableAssets::AssetReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GET_CARDDESTROY_OFFSET))(nullptr);
		}

		::System::String* get_CardDestroyKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GET_CARDDESTROYKEY_OFFSET))(nullptr);
		}

		::System::Void ActiveCostLabel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_ACTIVECOSTLABEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystem* GetDestroyEffect(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_GETDESTROYEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOneShotSelectAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_PLAYONESHOTSELECTAUDIO_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::EventCardSnapShot* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::EventCardSnapShot*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh(::MX::MinigameCCG::ICCGCardData* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::MinigameCCG::ICCGCardData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_ONCLICKEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OpenHandBoard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_OPENHANDBOARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALCARD_.CTOR_OFFSET))(nullptr);
		}

	};

