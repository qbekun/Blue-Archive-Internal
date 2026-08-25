#pragma once
#include "unitysdk.h"

#define VECTOR2FIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB3490)

	inline static constexpr unsigned int Vector2Field_TypeDefinitionIndex = 33969;

	class Vector2Field : public ::MX::Logic::Actions::BaseMoveAction
	{
	public:
		::System::Single incStep; // 0x60
		::System::Single incStepMult; // 0x64
		::System::Int32 decimals; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VECTOR2FIELD_.CTOR_OFFSET))(nullptr);
		}

	};

