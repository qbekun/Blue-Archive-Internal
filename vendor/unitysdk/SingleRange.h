#pragma once
#include "unitysdk.h"

#define SINGLERANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AE3230)

	inline static constexpr unsigned int SingleRange_TypeDefinitionIndex = 29222;

	class SingleRange : public Il2CppObject
	{
	public:
		::System::Char First; // 0x10
		::System::Char Last; // 0x12

		::System::Void .ctor(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SINGLERANGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

