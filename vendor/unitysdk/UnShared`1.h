#pragma once
#include "unitysdk.h"

namespace Animancer { class AnimancerState; }
namespace Animancer { class FadeMode; }
namespace Animancer { class ITransition; }

#define UNSHARED`1_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_ASSERTASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_GET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_CLEARCACHEDEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_GET_BASETRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_ANIMANCER.IWRAPPER.GET_WRAPPEDOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_GET_SERIALIZEDEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_GET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_GET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_SET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_ANIMANCER.ITRANSITION.CREATESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_GET_HASASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_SET_ASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNSHARED`1_ONSETBASESTATE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UnShared`1_TypeDefinitionIndex = 35214;

	class UnShared`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Asset; // 0x0
		::Animancer::AnimancerState* _BaseState; // 0x0
		Sequence* _Events; // 0x0

		Il2CppObject* get_Asset()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_ASSET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void AssertAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_ASSERTASSET_OFFSET))(nullptr);
		}

		::Animancer::FadeMode* get_FadeMode()
		{
			return (return (::Animancer::FadeMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_FADEMODE_OFFSET))(nullptr);
		}

		::System::Void ClearCachedEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_CLEARCACHEDEVENTS_OFFSET))(nullptr);
		}

		::Animancer::ITransition* get_BaseTransition()
		{
			return (return (::Animancer::ITransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_BASETRANSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Animancer.IWrapper.get_WrappedObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_ANIMANCER.IWRAPPER.GET_WRAPPEDOBJECT_OFFSET))(nullptr);
		}

		Serializable&* get_SerializedEvents()
		{
			return (return (Serializable&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_SERIALIZEDEVENTS_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* get_BaseState()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_BASESTATE_OFFSET))(nullptr);
		}

		::System::Single get_FadeDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_FADEDURATION_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void set_BaseState(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_SET_BASESTATE_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Animancer.ITransition.CreateState()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_ANIMANCER.ITRANSITION.CREATESTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasAsset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_HASASSET_OFFSET))(nullptr);
		}

		::System::Void set_Asset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_SET_ASSET_OFFSET))(arg, nullptr);
		}

		Sequence* get_Events()
		{
			return (return (Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void OnSetBaseState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNSHARED`1_ONSETBASESTATE_OFFSET))(nullptr);
		}

	};

