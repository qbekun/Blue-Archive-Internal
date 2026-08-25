#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine { class Object; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class PlayableAssetState; }
namespace UnityEngine::Playables { class PlayableAsset&; }
namespace Animancer { class PlayableAssetTransition; }

#define ANIMANCER_PLAYABLEASSETTRANSITION_GET_KEY_OFFSET UNITYSDK_OFFSET(0x4C1740)
#define ANIMANCER_PLAYABLEASSETTRANSITION_GET_MAXIMUMDURATION_OFFSET UNITYSDK_OFFSET(0x4C1750)
#define ANIMANCER_PLAYABLEASSETTRANSITION_GET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x4C17D0)
#define ANIMANCER_PLAYABLEASSETTRANSITION_SET_NORMALIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x4C17E0)
#define ANIMANCER_PLAYABLEASSETTRANSITION_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x4C17F0)
#define ANIMANCER_PLAYABLEASSETTRANSITION_APPLY_OFFSET UNITYSDK_OFFSET(0x4C1800)
#define ANIMANCER_PLAYABLEASSETTRANSITION_ANIMANCER.IANIMATIONCLIPCOLLECTION.GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4C1870)
#define ANIMANCER_PLAYABLEASSETTRANSITION_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4C1890)
#define ANIMANCER_PLAYABLEASSETTRANSITION_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x4C1960)
#define ANIMANCER_PLAYABLEASSETTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C19B0)
#define ANIMANCER_PLAYABLEASSETTRANSITION_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x4C1A00)
#define ANIMANCER_PLAYABLEASSETTRANSITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4C1A10)
#define ANIMANCER_PLAYABLEASSETTRANSITION_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x4C1AE0)
#define ANIMANCER_PLAYABLEASSETTRANSITION_GET_NORMALIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x4C1AF0)
#define ANIMANCER_PLAYABLEASSETTRANSITION_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x4C1B00)

namespace Animancer
{
	inline static constexpr unsigned int PlayableAssetTransition_TypeDefinitionIndex = 35250;

	class PlayableAssetTransition : public ::FlatData::ConstMinigameRoadPuzzleExcel
	{
	public:
		::UnityEngine::Playables::PlayableAsset* _Asset; // 0x38
		::System::Single _Speed; // 0x40
		::System::Single _NormalizedStartTime; // 0x44
		::Il2CppArray<::System::Object*>* _Bindings; // 0x48

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_GET_KEY_OFFSET))(nullptr);
		}

		::System::Single get_MaximumDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_GET_MAXIMUMDURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_MainObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_GET_MAINOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_NormalizedStartTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_SET_NORMALIZEDSTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Object[]&* get_Bindings()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_GET_BINDINGS_OFFSET))(nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void Animancer.IAnimationClipCollection.GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_ANIMANCER.IANIMATIONCLIPCOLLECTION.GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::Animancer::PlayableAssetState* CreateState()
		{
			return (return (::Animancer::PlayableAssetState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_CREATESTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableAsset&* get_Asset()
		{
			return (return (::UnityEngine::Playables::PlayableAsset&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_GET_ASSET_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::Animancer::PlayableAssetTransition* arg)
		{
			((::System::Void(*)(::Animancer::PlayableAssetTransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Single get_Speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Single get_NormalizedStartTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_GET_NORMALIZEDSTARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITION_SET_SPEED_OFFSET))(arg, nullptr);
		}

	};
}

