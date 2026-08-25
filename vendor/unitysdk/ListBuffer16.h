#pragma once
#include "unitysdk.h"

#define LISTBUFFER16_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F7F70)
#define LISTBUFFER16_ENCODETO_OFFSET UNITYSDK_OFFSET(0x5F7FD0)

	inline static constexpr unsigned int ListBuffer16_TypeDefinitionIndex = 22088;

	class ListBuffer16 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTBUFFER16_.CTOR_OFFSET))(nullptr);
		}

		::System::Void EncodeTo(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + LISTBUFFER16_ENCODETO_OFFSET))(arg, nullptr);
		}

	};

