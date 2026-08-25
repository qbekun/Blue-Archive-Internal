#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_LABELWIDTHATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF100)
#define TRIINSPECTOR_LABELWIDTHATTRIBUTE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x9DCF130)

namespace TriInspector
{
	inline static constexpr unsigned int LabelWidthAttribute_TypeDefinitionIndex = 37842;

	class LabelWidthAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Single _Width_k__BackingField; // 0x10

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LABELWIDTHATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_Width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_LABELWIDTHATTRIBUTE_GET_WIDTH_OFFSET))(nullptr);
		}

	};
}

