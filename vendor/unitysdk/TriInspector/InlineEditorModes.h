#pragma once
#include "../unitysdk.h"

namespace TriInspector { class InlineEditorModes; }

namespace TriInspector
{
	inline static constexpr unsigned int InlineEditorModes_TypeDefinitionIndex = 37862;

	class InlineEditorModes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TriInspector::InlineEditorModes* GUIOnly; // 0x0
		::TriInspector::InlineEditorModes* Header; // 0x0
		::TriInspector::InlineEditorModes* Preview; // 0x0
		::TriInspector::InlineEditorModes* GUIAndPreview; // 0x0
		::TriInspector::InlineEditorModes* GUIAndHeader; // 0x0
		::TriInspector::InlineEditorModes* FullEditor; // 0x0

	};
}

