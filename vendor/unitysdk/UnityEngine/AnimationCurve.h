#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Keyframe; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class WrapMode; }
namespace UnityEngine { class Keyframe&; }

#define UNITYENGINE_ANIMATIONCURVE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0xA1E1FA0)
#define UNITYENGINE_ANIMATIONCURVE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1E1FE0)
#define UNITYENGINE_ANIMATIONCURVE_INTERNAL_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1E2020)
#define UNITYENGINE_ANIMATIONCURVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA1E2060)
#define UNITYENGINE_ANIMATIONCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA1E2150)
#define UNITYENGINE_ANIMATIONCURVE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0xA1E21A0)
#define UNITYENGINE_ANIMATIONCURVE_SET_KEYS_OFFSET UNITYSDK_OFFSET(0xA1E2220)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_OFFSET UNITYSDK_OFFSET(0xA1E22A0)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_OFFSET UNITYSDK_OFFSET(0xA1E2300)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1E2350)
#define UNITYENGINE_ANIMATIONCURVE_MOVEKEY_OFFSET UNITYSDK_OFFSET(0xA1E23D0)
#define UNITYENGINE_ANIMATIONCURVE_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0xA1E2470)
#define UNITYENGINE_ANIMATIONCURVE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA1E24B0)
#define UNITYENGINE_ANIMATIONCURVE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA1E25A0)
#define UNITYENGINE_ANIMATIONCURVE_SETKEYS_OFFSET UNITYSDK_OFFSET(0xA1E2260)
#define UNITYENGINE_ANIMATIONCURVE_GETKEY_OFFSET UNITYSDK_OFFSET(0xA1E2530)
#define UNITYENGINE_ANIMATIONCURVE_GETKEYS_OFFSET UNITYSDK_OFFSET(0xA1E21E0)
#define UNITYENGINE_ANIMATIONCURVE_SMOOTHTANGENTS_OFFSET UNITYSDK_OFFSET(0xA1E2630)
#define UNITYENGINE_ANIMATIONCURVE_CONSTANT_OFFSET UNITYSDK_OFFSET(0xA1E2680)
#define UNITYENGINE_ANIMATIONCURVE_LINEAR_OFFSET UNITYSDK_OFFSET(0xA1E26A0)
#define UNITYENGINE_ANIMATIONCURVE_EASEINOUT_OFFSET UNITYSDK_OFFSET(0xA1E28A0)
#define UNITYENGINE_ANIMATIONCURVE_GET_PREWRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1E2A20)
#define UNITYENGINE_ANIMATIONCURVE_SET_PREWRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1E2A60)
#define UNITYENGINE_ANIMATIONCURVE_GET_POSTWRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1E2AA0)
#define UNITYENGINE_ANIMATIONCURVE_SET_POSTWRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1E2AE0)
#define UNITYENGINE_ANIMATIONCURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E2850)
#define UNITYENGINE_ANIMATIONCURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E2B20)
#define UNITYENGINE_ANIMATIONCURVE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1E2B60)
#define UNITYENGINE_ANIMATIONCURVE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1E2C90)
#define UNITYENGINE_ANIMATIONCURVE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA1E2D40)
#define UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E2390)
#define UNITYENGINE_ANIMATIONCURVE_MOVEKEY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E2420)
#define UNITYENGINE_ANIMATIONCURVE_GETKEY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E25E0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationCurve_TypeDefinitionIndex = 30943;

	class AnimationCurve : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void Internal_Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_INTERNAL_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Int32 Internal_Create(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Internal_Equals(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_INTERNAL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Single Evaluate(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EVALUATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_keys()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Void set_keys(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SET_KEYS_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddKey(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddKey(::UnityEngine::Keyframe* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Keyframe*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddKey_Internal(::UnityEngine::Keyframe* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Keyframe*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 MoveKey(::System::Int32 arg, ::UnityEngine::Keyframe* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::Keyframe*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_MOVEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveKey(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_REMOVEKEY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Keyframe* get_Item(::System::Int32 arg)
		{
			return (return (::UnityEngine::Keyframe*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void SetKeys(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SETKEYS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Keyframe* GetKey(::System::Int32 arg)
		{
			return (return (::UnityEngine::Keyframe*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETKEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetKeys()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETKEYS_OFFSET))(nullptr);
		}

		::System::Void SmoothTangents(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SMOOTHTANGENTS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AnimationCurve* Constant(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_CONSTANT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::AnimationCurve* Linear(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_LINEAR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::AnimationCurve* EaseInOut(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EASEINOUT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::WrapMode* get_preWrapMode()
		{
			return (return (::UnityEngine::WrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_PREWRAPMODE_OFFSET))(nullptr);
		}

		::System::Void set_preWrapMode(::UnityEngine::WrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::WrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SET_PREWRAPMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::WrapMode* get_postWrapMode()
		{
			return (return (::UnityEngine::WrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GET_POSTWRAPMODE_OFFSET))(nullptr);
		}

		::System::Void set_postWrapMode(::UnityEngine::WrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::WrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_SET_POSTWRAPMODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::AnimationCurve* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 AddKey_Internal_Injected(::UnityEngine::Keyframe&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Keyframe&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_ADDKEY_INTERNAL_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 MoveKey_Injected(::System::Int32 arg, ::UnityEngine::Keyframe&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::Keyframe&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_MOVEKEY_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetKey_Injected(::System::Int32 arg, ::UnityEngine::Keyframe&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Keyframe&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCURVE_GETKEY_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

