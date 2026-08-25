#pragma once
#include "unitysdk.h"

#define CONTROLBITRANGENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EA7CD0)

	inline static constexpr unsigned int ControlBitRangeNode_TypeDefinitionIndex = 28486;

	class ControlBitRangeNode : public Il2CppObject
	{
	public:
		::System::UInt16 endBitOffset; // 0x10
		::System::Int16 leftChildIndex; // 0x12
		::System::UInt16 controlStartIndex; // 0x14
		::System::Byte controlCount; // 0x16

		::System::Void .ctor(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLBITRANGENODE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

