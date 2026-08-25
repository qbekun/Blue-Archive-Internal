#pragma once
#include "../../unitysdk.h"

#define ANTLR_RUNTIME_CHARSTREAMSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C21A0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int CharStreamState_TypeDefinitionIndex = 37378;

	class CharStreamState : public Il2CppObject
	{
	public:
		::System::Int32 p; // 0x10
		::System::Int32 line; // 0x14
		::System::Int32 charPositionInLine; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_CHARSTREAMSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

