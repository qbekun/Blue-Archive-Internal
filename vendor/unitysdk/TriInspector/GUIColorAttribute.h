#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }

#define TRIINSPECTOR_GUICOLORATTRIBUTE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x9DCEBB0)
#define TRIINSPECTOR_GUICOLORATTRIBUTE_GET_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x9DCEBC0)
#define TRIINSPECTOR_GUICOLORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEBD0)
#define TRIINSPECTOR_GUICOLORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEC40)
#define TRIINSPECTOR_GUICOLORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCECB0)

namespace TriInspector
{
	inline static constexpr unsigned int GUIColorAttribute_TypeDefinitionIndex = 37830;

	class GUIColorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::UnityEngine::Color* _Color_k__BackingField; // 0x10
		::System::String* _GetColor_k__BackingField; // 0x20

		::UnityEngine::Color* get_Color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_GUICOLORATTRIBUTE_GET_COLOR_OFFSET))(nullptr);
		}

		::System::String* get_GetColor()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_GUICOLORATTRIBUTE_GET_GETCOLOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_GUICOLORATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_GUICOLORATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_GUICOLORATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

