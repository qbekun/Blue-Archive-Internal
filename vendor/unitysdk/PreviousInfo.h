#pragma once
#include "unitysdk.h"

#define PREVIOUSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x912C790)

	inline static constexpr unsigned int PreviousInfo_TypeDefinitionIndex = 23610;

	class PreviousInfo : public Il2CppObject
	{
	public:
		::System::Int32 Code; // 0x10
		::System::Object** SortKey; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PREVIOUSINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

