#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }

#define TIMELINE_SAMPLES_ANNOTATIONMARKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA9420)

namespace Timeline::Samples
{
	inline static constexpr unsigned int AnnotationMarker_TypeDefinitionIndex = 38105;

	class AnnotationMarker : public Il2CppObject
	{
	public:
		::System::String* title; // 0x28
		::UnityEngine::Color* color; // 0x30
		::System::Boolean showLineOverlay; // 0x40
		::System::Boolean showTitleOverlay; // 0x41
		::System::String* description; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINE_SAMPLES_ANNOTATIONMARKER_.CTOR_OFFSET))(nullptr);
		}

	};
}

