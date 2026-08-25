#pragma once
#include "../unitysdk.h"

namespace TriInspector { class InlineEditorModes; }

#define TRIINSPECTOR_INLINEEDITORATTRIBUTE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x9DCF000)
#define TRIINSPECTOR_INLINEEDITORATTRIBUTE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x9DCF010)
#define TRIINSPECTOR_INLINEEDITORATTRIBUTE_GET_PREVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0x9DCF020)
#define TRIINSPECTOR_INLINEEDITORATTRIBUTE_SET_PREVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0x9DCF030)
#define TRIINSPECTOR_INLINEEDITORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF040)
#define TRIINSPECTOR_INLINEEDITORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF060)

namespace TriInspector
{
	inline static constexpr unsigned int InlineEditorAttribute_TypeDefinitionIndex = 37839;

	class InlineEditorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::TriInspector::InlineEditorModes* _Mode_k__BackingField; // 0x10
		::System::Single _PreviewHeight_k__BackingField; // 0x14

		::TriInspector::InlineEditorModes* get_Mode()
		{
			return (return (::TriInspector::InlineEditorModes*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INLINEEDITORATTRIBUTE_GET_MODE_OFFSET))(nullptr);
		}

		::System::Void set_Mode(::TriInspector::InlineEditorModes* arg)
		{
			((::System::Void(*)(::TriInspector::InlineEditorModes*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INLINEEDITORATTRIBUTE_SET_MODE_OFFSET))(arg, nullptr);
		}

		::System::Single get_PreviewHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INLINEEDITORATTRIBUTE_GET_PREVIEWHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_PreviewHeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INLINEEDITORATTRIBUTE_SET_PREVIEWHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INLINEEDITORATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::TriInspector::InlineEditorModes* arg)
		{
			((::System::Void(*)(::TriInspector::InlineEditorModes*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INLINEEDITORATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

