#pragma once
#include "unitysdk.h"

#define SCANBEAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DB90)

	inline static constexpr unsigned int Scanbeam_TypeDefinitionIndex = 34389;

	class Scanbeam : public Il2CppObject
	{
	public:
		::System::Int64 Y; // 0x10
		Scanbeam* Next; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCANBEAM_.CTOR_OFFSET))(nullptr);
		}

	};

