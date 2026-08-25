#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_INLINEPROPERTYATTRIBUTE_GET_LABELWIDTH_OFFSET UNITYSDK_OFFSET(0x9DCF090)
#define TRIINSPECTOR_INLINEPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF0A0)
#define TRIINSPECTOR_INLINEPROPERTYATTRIBUTE_SET_LABELWIDTH_OFFSET UNITYSDK_OFFSET(0x9DCF0B0)

namespace TriInspector
{
	inline static constexpr unsigned int InlinePropertyAttribute_TypeDefinitionIndex = 37840;

	class InlinePropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Single _LabelWidth_k__BackingField; // 0x10

		::System::Single get_LabelWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INLINEPROPERTYATTRIBUTE_GET_LABELWIDTH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INLINEPROPERTYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_LabelWidth(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INLINEPROPERTYATTRIBUTE_SET_LABELWIDTH_OFFSET))(arg, nullptr);
		}

	};
}

