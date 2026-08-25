#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class GradientMode; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_GRADIENT_INIT_OFFSET UNITYSDK_OFFSET(0xA2205F0)
#define UNITYENGINE_GRADIENT_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA220630)
#define UNITYENGINE_GRADIENT_INTERNAL_EQUALS_OFFSET UNITYSDK_OFFSET(0xA220670)
#define UNITYENGINE_GRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2206B0)
#define UNITYENGINE_GRADIENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA2206F0)
#define UNITYENGINE_GRADIENT_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA2207D0)
#define UNITYENGINE_GRADIENT_GET_COLORKEYS_OFFSET UNITYSDK_OFFSET(0xA220880)
#define UNITYENGINE_GRADIENT_SET_COLORKEYS_OFFSET UNITYSDK_OFFSET(0xA2208C0)
#define UNITYENGINE_GRADIENT_GET_ALPHAKEYS_OFFSET UNITYSDK_OFFSET(0xA220900)
#define UNITYENGINE_GRADIENT_SET_ALPHAKEYS_OFFSET UNITYSDK_OFFSET(0xA220940)
#define UNITYENGINE_GRADIENT_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA220980)
#define UNITYENGINE_GRADIENT_SET_MODE_OFFSET UNITYSDK_OFFSET(0xA2209C0)
#define UNITYENGINE_GRADIENT_SETKEYS_OFFSET UNITYSDK_OFFSET(0xA220A00)
#define UNITYENGINE_GRADIENT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA220A50)
#define UNITYENGINE_GRADIENT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA220B80)
#define UNITYENGINE_GRADIENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA220C30)
#define UNITYENGINE_GRADIENT_EVALUATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA220830)

namespace UnityEngine
{
	inline static constexpr unsigned int Gradient_TypeDefinitionIndex = 31096;

	class Gradient : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Int32 Init()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_INIT_OFFSET))(nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_CLEANUP_OFFSET))(nullptr);
		}

		::System::Boolean Internal_Equals(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_INTERNAL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_FINALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* Evaluate(::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EVALUATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_colorKeys()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GET_COLORKEYS_OFFSET))(nullptr);
		}

		::System::Void set_colorKeys(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SET_COLORKEYS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_alphaKeys()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GET_ALPHAKEYS_OFFSET))(nullptr);
		}

		::System::Void set_alphaKeys(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SET_ALPHAKEYS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GradientMode* get_mode()
		{
			return (return (::UnityEngine::GradientMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GET_MODE_OFFSET))(nullptr);
		}

		::System::Void set_mode(::UnityEngine::GradientMode* arg)
		{
			((::System::Void(*)(::UnityEngine::GradientMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SET_MODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetKeys(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_SETKEYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Gradient* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Gradient*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void Evaluate_Injected(::System::Single arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENT_EVALUATE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

