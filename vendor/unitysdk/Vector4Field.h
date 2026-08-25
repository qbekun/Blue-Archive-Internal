#pragma once
#include "unitysdk.h"

#define VECTOR4FIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB3530)

	inline static constexpr unsigned int Vector4Field_TypeDefinitionIndex = 33971;

	class Vector4Field : public <>c__DisplayClass15_0
	{
	public:
		::System::Single incStep; // 0x60
		::System::Single incStepMult; // 0x64
		::System::Int32 decimals; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VECTOR4FIELD_.CTOR_OFFSET))(nullptr);
		}

	};

