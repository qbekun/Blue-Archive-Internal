#pragma once
#include "../../unitysdk.h"

#define MXFIELD_INTERACTABLE_FIELDPROP_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC3440)

namespace MXField::Interactable
{
	inline static constexpr unsigned int FieldProp_TypeDefinitionIndex = 10858;

	class FieldProp : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_INTERACTABLE_FIELDPROP_.CTOR_OFFSET))(nullptr);
		}

	};
}

