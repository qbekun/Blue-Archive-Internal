#pragma once
#include "unitysdk.h"

#define TIMESPANRAWINFO_GET_POSITIVEINVARIANT_OFFSET UNITYSDK_OFFSET(0x9294D20)
#define TIMESPANRAWINFO_GET_NEGATIVEINVARIANT_OFFSET UNITYSDK_OFFSET(0x9294D90)
#define TIMESPANRAWINFO_GET_POSITIVELOCALIZED_OFFSET UNITYSDK_OFFSET(0x9290490)
#define TIMESPANRAWINFO_GET_NEGATIVELOCALIZED_OFFSET UNITYSDK_OFFSET(0x9290540)
#define TIMESPANRAWINFO_FULLAPPCOMPATMATCH_OFFSET UNITYSDK_OFFSET(0x9291230)
#define TIMESPANRAWINFO_PARTIALAPPCOMPATMATCH_OFFSET UNITYSDK_OFFSET(0x92922A0)
#define TIMESPANRAWINFO_FULLMATCH_OFFSET UNITYSDK_OFFSET(0x928FDC0)
#define TIMESPANRAWINFO_FULLDMATCH_OFFSET UNITYSDK_OFFSET(0x9292C40)
#define TIMESPANRAWINFO_FULLHMMATCH_OFFSET UNITYSDK_OFFSET(0x92927D0)
#define TIMESPANRAWINFO_FULLDHMMATCH_OFFSET UNITYSDK_OFFSET(0x9291D60)
#define TIMESPANRAWINFO_FULLHMSMATCH_OFFSET UNITYSDK_OFFSET(0x9291820)
#define TIMESPANRAWINFO_FULLDHMSMATCH_OFFSET UNITYSDK_OFFSET(0x9290C20)
#define TIMESPANRAWINFO_FULLHMSFMATCH_OFFSET UNITYSDK_OFFSET(0x9290610)
#define TIMESPANRAWINFO_INIT_OFFSET UNITYSDK_OFFSET(0x928BB30)
#define TIMESPANRAWINFO_PROCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x928BDD0)
#define TIMESPANRAWINFO_ADDSEP_OFFSET UNITYSDK_OFFSET(0x9294E00)
#define TIMESPANRAWINFO_ADDNUM_OFFSET UNITYSDK_OFFSET(0x9294F10)

	inline static constexpr unsigned int TimeSpanRawInfo_TypeDefinitionIndex = 24981;

	class TimeSpanRawInfo : public Il2CppObject
	{
	public:
		TTT* _lastSeenTTT; // 0x10
		::System::Int32 _tokenCount; // 0x14
		::System::Int32 _sepCount; // 0x18
		::System::Int32 _numCount; // 0x1C
		FormatLiterals* _posLoc; // 0x20
		FormatLiterals* _negLoc; // 0x48
		::System::Boolean _posLocInit; // 0x70
		::System::Boolean _negLocInit; // 0x71
		::System::String* _fullPosPattern; // 0x78
		::System::String* _fullNegPattern; // 0x80
		TimeSpanToken* _numbers0; // 0x88
		TimeSpanToken* _numbers1; // 0xA8
		TimeSpanToken* _numbers2; // 0xC8
		TimeSpanToken* _numbers3; // 0xE8
		TimeSpanToken* _numbers4; // 0x108
		Il2CppObject* _literals0; // 0x128
		Il2CppObject* _literals1; // 0x138
		Il2CppObject* _literals2; // 0x148
		Il2CppObject* _literals3; // 0x158
		Il2CppObject* _literals4; // 0x168
		Il2CppObject* _literals5; // 0x178

		FormatLiterals* get_PositiveInvariant()
		{
			return (return (FormatLiterals*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_GET_POSITIVEINVARIANT_OFFSET))(nullptr);
		}

		FormatLiterals* get_NegativeInvariant()
		{
			return (return (FormatLiterals*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_GET_NEGATIVEINVARIANT_OFFSET))(nullptr);
		}

		FormatLiterals* get_PositiveLocalized()
		{
			return (return (FormatLiterals*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_GET_POSITIVELOCALIZED_OFFSET))(nullptr);
		}

		FormatLiterals* get_NegativeLocalized()
		{
			return (return (FormatLiterals*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_GET_NEGATIVELOCALIZED_OFFSET))(nullptr);
		}

		::System::Boolean FullAppCompatMatch(FormatLiterals* arg)
		{
			return (return (::System::Boolean(*)(FormatLiterals*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_FULLAPPCOMPATMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean PartialAppCompatMatch(FormatLiterals* arg)
		{
			return (return (::System::Boolean(*)(FormatLiterals*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_PARTIALAPPCOMPATMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean FullMatch(FormatLiterals* arg)
		{
			return (return (::System::Boolean(*)(FormatLiterals*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_FULLMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean FullDMatch(FormatLiterals* arg)
		{
			return (return (::System::Boolean(*)(FormatLiterals*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_FULLDMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean FullHMMatch(FormatLiterals* arg)
		{
			return (return (::System::Boolean(*)(FormatLiterals*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_FULLHMMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean FullDHMMatch(FormatLiterals* arg)
		{
			return (return (::System::Boolean(*)(FormatLiterals*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_FULLDHMMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean FullHMSMatch(FormatLiterals* arg)
		{
			return (return (::System::Boolean(*)(FormatLiterals*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_FULLHMSMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean FullDHMSMatch(FormatLiterals* arg)
		{
			return (return (::System::Boolean(*)(FormatLiterals*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_FULLDHMSMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean FullHMSFMatch(FormatLiterals* arg)
		{
			return (return (::System::Boolean(*)(FormatLiterals*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_FULLHMSFMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Globalization::DateTimeFormatInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::DateTimeFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_INIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ProcessToken(TimeSpanToken&* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanToken&*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_PROCESSTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddSep(Il2CppObject* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_ADDSEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddNum(TimeSpanToken* arg, TimeSpanResult&* arg)
		{
			return (return (::System::Boolean(*)(TimeSpanToken*, TimeSpanResult&*, ::PVOID))((::PBYTE)hIl2Cpp + TIMESPANRAWINFO_ADDNUM_OFFSET))(arg, arg, nullptr);
		}

	};

