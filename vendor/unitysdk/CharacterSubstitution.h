#pragma once
#include "unitysdk.h"

#define CHARACTERSUBSTITUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17E800)

	inline static constexpr unsigned int CharacterSubstitution_TypeDefinitionIndex = 33742;

	class CharacterSubstitution : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::System::UInt32 unicode; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERSUBSTITUTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

