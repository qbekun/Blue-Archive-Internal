#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_TABATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF510)
#define TRIINSPECTOR_TABATTRIBUTE_GET_TABNAME_OFFSET UNITYSDK_OFFSET(0x9DCF540)

namespace TriInspector
{
	inline static constexpr unsigned int TabAttribute_TypeDefinitionIndex = 37857;

	class TabAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _TabName_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TABATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_TabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TABATTRIBUTE_GET_TABNAME_OFFSET))(nullptr);
		}

	};
}

