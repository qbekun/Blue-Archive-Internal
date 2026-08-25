#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class Focusable; }

#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_UNSPECIFIED_OFFSET UNITYSDK_OFFSET(0xA317700)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_NONE_OFFSET UNITYSDK_OFFSET(0xA317750)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0xA3177A0)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3177F0)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA317810)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA317820)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA317840)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_APPLYTO_OFFSET UNITYSDK_OFFSET(0xA317850)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA317BB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusChangeDirection_TypeDefinitionIndex = 30097;

	class FocusChangeDirection : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::FocusChangeDirection* _unspecified_k__BackingField; // 0x0
		::UnityEngine::UIElements::FocusChangeDirection* _none_k__BackingField; // 0x8
		::UnityEngine::UIElements::FocusChangeDirection* _lastValue_k__BackingField; // 0x10
		::System::Int32 m_Value; // 0x10

		::UnityEngine::UIElements::FocusChangeDirection* get_unspecified()
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_UNSPECIFIED_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::FocusChangeDirection* get_none()
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_NONE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::FocusChangeDirection* get_lastValue()
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_LASTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Implicit(::UnityEngine::UIElements::FocusChangeDirection* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::FocusChangeDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ApplyTo(::UnityEngine::UIElements::FocusController* arg, ::UnityEngine::UIElements::Focusable* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusController*, ::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_APPLYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

