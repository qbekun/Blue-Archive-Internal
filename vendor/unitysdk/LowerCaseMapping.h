#pragma once
#include "unitysdk.h"

#define LOWERCASEMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AEDE70)

	inline static constexpr unsigned int LowerCaseMapping_TypeDefinitionIndex = 29220;

	class LowerCaseMapping : public Il2CppObject
	{
	public:
		::System::Char ChMin; // 0x10
		::System::Char ChMax; // 0x12
		::System::Int32 LcOp; // 0x14
		::System::Int32 Data; // 0x18

		::System::Void .ctor(::System::Char arg, ::System::Char arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOWERCASEMAPPING_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

