#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DRAWWITHUNITYATTRIBUTE_GET_WITHUITOOLKIT_OFFSET UNITYSDK_OFFSET(0x9DCE940)
#define TRIINSPECTOR_DRAWWITHUNITYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE950)
#define TRIINSPECTOR_DRAWWITHUNITYATTRIBUTE_SET_WITHUITOOLKIT_OFFSET UNITYSDK_OFFSET(0x9DCE960)

namespace TriInspector
{
	inline static constexpr unsigned int DrawWithUnityAttribute_TypeDefinitionIndex = 37821;

	class DrawWithUnityAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _WithUiToolkit_k__BackingField; // 0x10

		::System::Boolean get_WithUiToolkit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DRAWWITHUNITYATTRIBUTE_GET_WITHUITOOLKIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DRAWWITHUNITYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WithUiToolkit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DRAWWITHUNITYATTRIBUTE_SET_WITHUITOOLKIT_OFFSET))(arg, nullptr);
		}

	};
}

