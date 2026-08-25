#pragma once
#include "unitysdk.h"

#define DATEMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A5060)

	inline static constexpr unsigned int DateMapping_TypeDefinitionIndex = 25000;

	class DateMapping : public Il2CppObject
	{
	public:
		::System::Int32 HijriMonthsLengthFlags; // 0x10
		::System::DateTime* GregorianDate; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DATEMAPPING_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

