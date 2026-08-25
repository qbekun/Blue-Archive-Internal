#pragma once
#include "unitysdk.h"

#define VECTOR3FIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB34E0)

	inline static constexpr unsigned int Vector3Field_TypeDefinitionIndex = 33970;

	class Vector3Field : public CharmedCommand
	{
	public:
		::System::Single incStep; // 0x60
		::System::Single incStepMult; // 0x64
		::System::Int32 decimals; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VECTOR3FIELD_.CTOR_OFFSET))(nullptr);
		}

	};

