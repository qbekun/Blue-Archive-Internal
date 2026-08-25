#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_VALIDATEINPUTATTRIBUTE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9DCF5C0)
#define TRIINSPECTOR_VALIDATEINPUTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF5D0)

namespace TriInspector
{
	inline static constexpr unsigned int ValidateInputAttribute_TypeDefinitionIndex = 37860;

	class ValidateInputAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Method_k__BackingField; // 0x10

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_VALIDATEINPUTATTRIBUTE_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_VALIDATEINPUTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

