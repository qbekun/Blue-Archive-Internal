#pragma once
#include "unitysdk.h"

#define FORMATLITERALS_GET_START_OFFSET UNITYSDK_OFFSET(0x928AE40)
#define FORMATLITERALS_GET_DAYHOURSEP_OFFSET UNITYSDK_OFFSET(0x928AE70)
#define FORMATLITERALS_GET_HOURMINUTESEP_OFFSET UNITYSDK_OFFSET(0x928AEA0)
#define FORMATLITERALS_GET_MINUTESECONDSEP_OFFSET UNITYSDK_OFFSET(0x928AED0)
#define FORMATLITERALS_GET_SECONDFRACTIONSEP_OFFSET UNITYSDK_OFFSET(0x928AF00)
#define FORMATLITERALS_GET_END_OFFSET UNITYSDK_OFFSET(0x928AF30)
#define FORMATLITERALS_INITINVARIANT_OFFSET UNITYSDK_OFFSET(0x928B020)
#define FORMATLITERALS_INIT_OFFSET UNITYSDK_OFFSET(0x928A960)

	inline static constexpr unsigned int FormatLiterals_TypeDefinitionIndex = 24974;

	class FormatLiterals : public Il2CppObject
	{
	public:
		::System::String* AppCompatLiteral; // 0x10
		::System::Int32 dd; // 0x18
		::System::Int32 hh; // 0x1C
		::System::Int32 mm; // 0x20
		::System::Int32 ss; // 0x24
		::System::Int32 ff; // 0x28
		::Il2CppArray<::System::Object*>* _literals; // 0x30

		::System::String* get_Start()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATLITERALS_GET_START_OFFSET))(nullptr);
		}

		::System::String* get_DayHourSep()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATLITERALS_GET_DAYHOURSEP_OFFSET))(nullptr);
		}

		::System::String* get_HourMinuteSep()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATLITERALS_GET_HOURMINUTESEP_OFFSET))(nullptr);
		}

		::System::String* get_MinuteSecondSep()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATLITERALS_GET_MINUTESECONDSEP_OFFSET))(nullptr);
		}

		::System::String* get_SecondFractionSep()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATLITERALS_GET_SECONDFRACTIONSEP_OFFSET))(nullptr);
		}

		::System::String* get_End()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATLITERALS_GET_END_OFFSET))(nullptr);
		}

		FormatLiterals* InitInvariant(::System::Boolean arg)
		{
			return (return (FormatLiterals*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FORMATLITERALS_INITINVARIANT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FORMATLITERALS_INIT_OFFSET))(arg, arg, nullptr);
		}

	};

