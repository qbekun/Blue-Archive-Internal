#pragma once
#include "unitysdk.h"

#define MAXIMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DBA0)

	inline static constexpr unsigned int Maxima_TypeDefinitionIndex = 34390;

	class Maxima : public Il2CppObject
	{
	public:
		::System::Int64 X; // 0x10
		Maxima* Next; // 0x18
		Maxima* Prev; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAXIMA_.CTOR_OFFSET))(nullptr);
		}

	};

