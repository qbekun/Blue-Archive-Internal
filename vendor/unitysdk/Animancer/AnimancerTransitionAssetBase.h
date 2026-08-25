#pragma once
#include "../unitysdk.h"

namespace Animancer { class FadeMode; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class ITransition; }

#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x4BE340)
#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GETANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x4BE400)
#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x4BE430)
#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4BE460)
#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0x4BE520)
#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x4BE5E0)
#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_ANIMANCER.IWRAPPER.GET_WRAPPEDOBJECT_OFFSET UNITYSDK_OFFSET(0x4BE6A0)
#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GETTRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_APPLY_OFFSET UNITYSDK_OFFSET(0x4BE6C0)
#define ANIMANCER_ANIMANCERTRANSITIONASSETBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BE780)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerTransitionAssetBase_TypeDefinitionIndex = 35216;

	class AnimancerTransitionAssetBase : public Il2CppObject
	{
	public:
		::Animancer::FadeMode* get_FadeMode()
		{
			return (return (::Animancer::FadeMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GET_FADEMODE_OFFSET))(nullptr);
		}

		::System::Void GetAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GETANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GET_ISVALID_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* CreateState()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_CREATESTATE_OFFSET))(nullptr);
		}

		::System::Single get_FadeDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GET_FADEDURATION_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GET_KEY_OFFSET))(nullptr);
		}

		::System::Object* Animancer.IWrapper.get_WrappedObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_ANIMANCER.IWRAPPER.GET_WRAPPEDOBJECT_OFFSET))(nullptr);
		}

		::Animancer::ITransition* GetTransition()
		{
			return (return (::Animancer::ITransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_GETTRANSITION_OFFSET))(nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSETBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

