#pragma once
#include "../unitysdk.h"

namespace UnityEngineInternal { class TypeInferenceRules; }

#define UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DF9F0)
#define UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DFA70)
#define UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1DFAA0)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int TypeInferenceRuleAttribute_TypeDefinitionIndex = 30847;

	class TypeInferenceRuleAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _rule; // 0x10

		::System::Void .ctor(::UnityEngineInternal::TypeInferenceRules* arg)
		{
			((::System::Void(*)(::UnityEngineInternal::TypeInferenceRules*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_TYPEINFERENCERULEATTRIBUTE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

