#pragma once
#include "unitysdk.h"

#define SEQUENCENUMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6127F0)
#define SEQUENCENUMBER_NEXTVALUE_OFFSET UNITYSDK_OFFSET(0x613190)

	inline static constexpr unsigned int SequenceNumber_TypeDefinitionIndex = 22159;

	class SequenceNumber : public Il2CppObject
	{
	public:
		::System::Int64 value; // 0x10
		::System::Boolean exhausted; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEQUENCENUMBER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 NextValue(::System::Byte arg)
		{
			return (return (::System::Int64(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SEQUENCENUMBER_NEXTVALUE_OFFSET))(arg, nullptr);
		}

	};

