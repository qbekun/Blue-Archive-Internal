#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CC0C0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CC1E0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1CC1A0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA1CC270)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA1CC2B0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA1CC2F0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA1CC380)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_GETCLIPBYNAME_OFFSET UNITYSDK_OFFSET(0xA1CC330)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_SETCLIPBYNAME_OFFSET UNITYSDK_OFFSET(0xA1CC3D0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA1CC420)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA1CC4B0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETCLIP_OFFSET UNITYSDK_OFFSET(0xA1CC460)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SETCLIP_OFFSET UNITYSDK_OFFSET(0xA1CC500)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SENDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xA1CC550)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETORIGINALCLIP_OFFSET UNITYSDK_OFFSET(0xA1CC590)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDECLIP_OFFSET UNITYSDK_OFFSET(0xA1CC5D0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_OVERRIDESCOUNT_OFFSET UNITYSDK_OFFSET(0xA1CC610)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDES_OFFSET UNITYSDK_OFFSET(0xA1CC650)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_APPLYOVERRIDES_OFFSET UNITYSDK_OFFSET(0xA1CC8C0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_CLIPS_OFFSET UNITYSDK_OFFSET(0xA1CCB30)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_CLIPS_OFFSET UNITYSDK_OFFSET(0xA1CCD30)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_PERFORMOVERRIDECLIPLISTCLEANUP_OFFSET UNITYSDK_OFFSET(0xA1CCDF0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONINVALIDATEOVERRIDECONTROLLER_OFFSET UNITYSDK_OFFSET(0xA1CCE30)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorOverrideController_TypeDefinitionIndex = 36470;

	class AnimatorOverrideController : public Il2CppObject
	{
	public:
		OnOverrideControllerDirtyCallback* OnOverrideControllerDirty; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::AnimatorOverrideController* arg, ::UnityEngine::RuntimeAnimatorController* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimatorOverrideController*, ::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::RuntimeAnimatorController* get_runtimeAnimatorController()
		{
			return (return (::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_RUNTIMEANIMATORCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_RUNTIMEANIMATORCONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_Item(::System::String* str)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AnimationClip* Internal_GetClipByName(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_GETCLIPBYNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Void Internal_SetClipByName(::System::String* str, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_SETCLIPBYNAME_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_Item(::UnityEngine::AnimationClip* arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AnimationClip* GetClip(::UnityEngine::AnimationClip* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::UnityEngine::AnimationClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETCLIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetClip(::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SETCLIP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SendNotification()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SENDNOTIFICATION_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* GetOriginalClip(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETORIGINALCLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* GetOverrideClip(::UnityEngine::AnimationClip* arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDECLIP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_overridesCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_OVERRIDESCOUNT_OFFSET))(nullptr);
		}

		::System::Void GetOverrides(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDES_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyOverrides(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_APPLYOVERRIDES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_clips()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_CLIPS_OFFSET))(nullptr);
		}

		::System::Void set_clips(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_CLIPS_OFFSET))(arg, nullptr);
		}

		::System::Void PerformOverrideClipListCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_PERFORMOVERRIDECLIPLISTCLEANUP_OFFSET))(nullptr);
		}

		::System::Void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimatorOverrideController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONINVALIDATEOVERRIDECONTROLLER_OFFSET))(arg, nullptr);
		}

	};
}

