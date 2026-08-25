#pragma once
#include "unitysdk.h"

#define TIMESPANTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9294CE0)
#define TIMESPANTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x92905F0)
#define TIMESPANTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9294910)
#define TIMESPANTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9294D00)
#define TIMESPANTOKEN_ISINVALIDFRACTION_OFFSET UNITYSDK_OFFSET(0x928B4C0)

	inline static constexpr unsigned int TimeSpanToken_TypeDefinitionIndex = 24979;

	class TimeSpanToken : public Il2CppObject
	{
	public:
		TTT* _ttt; // 0x10
		::System::Int32 _num; // 0x14
		::System::Int32 _zeroes; // 0x18
		Il2CppObject* _sep; // 0x20

		::System::Void .ctor(TTT* arg)
		{
			((::System::Void(*)(TTT*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKEN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKEN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKEN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(TTT* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(TTT*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKEN_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsInvalidFraction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESPANTOKEN_ISINVALIDFRACTION_OFFSET))(nullptr);
		}

	};

