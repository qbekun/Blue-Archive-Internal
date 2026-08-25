#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_TITLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF560)
#define TRIINSPECTOR_TITLEATTRIBUTE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9DCF590)
#define TRIINSPECTOR_TITLEATTRIBUTE_GET_HORIZONTALLINE_OFFSET UNITYSDK_OFFSET(0x9DCF5A0)
#define TRIINSPECTOR_TITLEATTRIBUTE_SET_HORIZONTALLINE_OFFSET UNITYSDK_OFFSET(0x9DCF5B0)

namespace TriInspector
{
	inline static constexpr unsigned int TitleAttribute_TypeDefinitionIndex = 37859;

	class TitleAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Title_k__BackingField; // 0x10
		::System::Boolean _HorizontalLine_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TITLEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TITLEATTRIBUTE_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Boolean get_HorizontalLine()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TITLEATTRIBUTE_GET_HORIZONTALLINE_OFFSET))(nullptr);
		}

		::System::Void set_HorizontalLine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TITLEATTRIBUTE_SET_HORIZONTALLINE_OFFSET))(arg, nullptr);
		}

	};
}

