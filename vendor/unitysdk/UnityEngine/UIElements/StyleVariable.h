#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }

#define UNITYENGINE_UIELEMENTS_STYLEVARIABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41DFE0)
#define UNITYENGINE_UIELEMENTS_STYLEVARIABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA41E030)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleVariable_TypeDefinitionIndex = 30657;

	class StyleVariable : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::UIElements::StyleSheet* sheet; // 0x18
		::Il2CppArray<::System::Object*>* handles; // 0x20

		::System::Void .ctor(::System::String* str, ::UnityEngine::UIElements::StyleSheet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UIElements::StyleSheet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVARIABLE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

