#pragma once
#include "unitysdk.h"

#define STAYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1348630)

	inline static constexpr unsigned int StayData_TypeDefinitionIndex = 14306;

	class StayData : public Il2CppObject
	{
	public:
		::System::Int32 EntityID; // 0x10
		::System::Single Duration; // 0x14
		::System::Boolean CheckEntityID; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STAYDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};

