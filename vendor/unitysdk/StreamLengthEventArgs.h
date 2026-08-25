#pragma once
#include "unitysdk.h"

#define STREAMLENGTHEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E7BE0)

	inline static constexpr unsigned int StreamLengthEventArgs_TypeDefinitionIndex = 37216;

	class StreamLengthEventArgs : public Il2CppObject
	{
	public:
		::System::Int64 _Length_k__BackingField; // 0x10

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STREAMLENGTHEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};

