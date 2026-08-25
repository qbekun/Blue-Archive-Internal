#pragma once
#include "unitysdk.h"

#define POINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDF2020)

	inline static constexpr unsigned int POINT_TypeDefinitionIndex = 10165;

	class POINT : public Il2CppObject
	{
	public:
		::System::Int32 X; // 0x10
		::System::Int32 Y; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + POINT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

