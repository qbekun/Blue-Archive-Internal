#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_SRCATEGORYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7CCD0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int SRCategoryAttribute_TypeDefinitionIndex = 29536;

	class SRCategoryAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SRCATEGORYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

