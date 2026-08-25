#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_ONVALUECHANGEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF1F0)
#define TRIINSPECTOR_ONVALUECHANGEDATTRIBUTE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9DCF220)

namespace TriInspector
{
	inline static constexpr unsigned int OnValueChangedAttribute_TypeDefinitionIndex = 37844;

	class OnValueChangedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Method_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_ONVALUECHANGEDATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_ONVALUECHANGEDATTRIBUTE_GET_METHOD_OFFSET))(nullptr);
		}

	};
}

