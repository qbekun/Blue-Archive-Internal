#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_LABELTEXTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF0C0)
#define TRIINSPECTOR_LABELTEXTATTRIBUTE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9DCF0F0)

namespace TriInspector
{
	inline static constexpr unsigned int LabelTextAttribute_TypeDefinitionIndex = 37841;

	class LabelTextAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LABELTEXTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LABELTEXTATTRIBUTE_GET_TEXT_OFFSET))(nullptr);
		}

	};
}

