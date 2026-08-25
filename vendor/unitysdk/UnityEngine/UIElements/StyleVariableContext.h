#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleVariableContext; }
namespace UnityEngine::UIElements { class StyleVariable; }
namespace UnityEngine::UIElements { class StyleVariable&; }

#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0xA41E0B0)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_ADDINITIALRANGE_OFFSET UNITYSDK_OFFSET(0xA41E380)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0xA41E460)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41E4F0)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41E5C0)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_TRYFINDVARIABLE_OFFSET UNITYSDK_OFFSET(0xA41E6B0)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_GETVARIABLEHASH_OFFSET UNITYSDK_OFFSET(0xA41E7B0)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA41E7C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleVariableContext_TypeDefinitionIndex = 30658;

	class StyleVariableContext : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleVariableContext* none; // 0x0
		::System::Int32 m_VariableHash; // 0x10
		Il2CppObject* m_Variables; // 0x18
		Il2CppObject* m_SortedHash; // 0x20

		::System::Void Add(::UnityEngine::UIElements::StyleVariable* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleVariable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddInitialRange(::UnityEngine::UIElements::StyleVariableContext* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleVariableContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_ADDINITIALRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleVariableContext* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleVariableContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryFindVariable(::System::String* str, ::UnityEngine::UIElements::StyleVariable&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::UIElements::StyleVariable&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_TRYFINDVARIABLE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetVariableHash()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_GETVARIABLEHASH_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLECONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

