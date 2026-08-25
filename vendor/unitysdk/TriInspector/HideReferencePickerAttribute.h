#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_HIDEREFERENCEPICKERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEF20)

namespace TriInspector
{
	inline static constexpr unsigned int HideReferencePickerAttribute_TypeDefinitionIndex = 37836;

	class HideReferencePickerAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEREFERENCEPICKERATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

