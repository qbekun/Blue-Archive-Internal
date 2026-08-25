#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DISPLAYASSTRINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE920)

namespace TriInspector
{
	inline static constexpr unsigned int DisplayAsStringAttribute_TypeDefinitionIndex = 37819;

	class DisplayAsStringAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISPLAYASSTRINGATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

