#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_PROPERTYTOOLTIPATTRIBUTE_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x9DCF300)
#define TRIINSPECTOR_PROPERTYTOOLTIPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF310)

namespace TriInspector
{
	inline static constexpr unsigned int PropertyTooltipAttribute_TypeDefinitionIndex = 37847;

	class PropertyTooltipAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Tooltip_k__BackingField; // 0x10

		::System::String* get_Tooltip()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYTOOLTIPATTRIBUTE_GET_TOOLTIP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYTOOLTIPATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

