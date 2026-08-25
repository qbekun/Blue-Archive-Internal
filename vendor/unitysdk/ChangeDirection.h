#pragma once
#include "unitysdk.h"

#define CHANGEDIRECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA400750)

	inline static constexpr unsigned int ChangeDirection_TypeDefinitionIndex = 30559;

	class ChangeDirection : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEDIRECTION_.CTOR_OFFSET))(arg, nullptr);
		}

	};

