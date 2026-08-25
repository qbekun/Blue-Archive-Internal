#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_DROPDOWNMENUSEPARATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA314A00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DropdownMenuSeparator_TypeDefinitionIndex = 30086;

	class DropdownMenuSeparator : public Il2CppObject
	{
	public:
		::System::String* _subMenuPath_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DROPDOWNMENUSEPARATOR_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

