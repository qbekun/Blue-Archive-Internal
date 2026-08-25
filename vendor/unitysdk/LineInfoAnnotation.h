#pragma once
#include "unitysdk.h"

#define LINEINFOANNOTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95156D0)

	inline static constexpr unsigned int LineInfoAnnotation_TypeDefinitionIndex = 32042;

	class LineInfoAnnotation : public Il2CppObject
	{
	public:
		::System::Int32 LineNumber; // 0x10
		::System::Int32 LinePosition; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LINEINFOANNOTATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

