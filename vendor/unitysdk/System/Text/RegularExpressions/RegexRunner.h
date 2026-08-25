#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFB7A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_OFFSET UNITYSDK_OFFSET(0x9AFB7B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_STARTTIMEOUTWATCH_OFFSET UNITYSDK_OFFSET(0x9AFBBA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHECKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9AFBBD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOCHECKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9AFBEC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_GO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_FINDFIRSTCHAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_INITTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_INITMATCH_OFFSET UNITYSDK_OFFSET(0x9AFBBE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TIDYMATCH_OFFSET UNITYSDK_OFFSET(0x9AFBE60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ENSURESTORAGE_OFFSET UNITYSDK_OFFSET(0x9AFBFA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISBOUNDARY_OFFSET UNITYSDK_OFFSET(0x9AFC120)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISECMABOUNDARY_OFFSET UNITYSDK_OFFSET(0x9AFC200)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLETRACK_OFFSET UNITYSDK_OFFSET(0x9AFC080)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLESTACK_OFFSET UNITYSDK_OFFSET(0x9AFBFE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLECRAWL_OFFSET UNITYSDK_OFFSET(0x9AFC2E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWL_OFFSET UNITYSDK_OFFSET(0x9AFC380)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_POPCRAWL_OFFSET UNITYSDK_OFFSET(0x9AFC3D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWLPOS_OFFSET UNITYSDK_OFFSET(0x9AFC410)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x9AFC430)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TRANSFERCAPTURE_OFFSET UNITYSDK_OFFSET(0x9AFC4C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_UNCAPTURE_OFFSET UNITYSDK_OFFSET(0x9AFC6A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x9AFC6F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHINDEX_OFFSET UNITYSDK_OFFSET(0x9AFC640)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHLENGTH_OFFSET UNITYSDK_OFFSET(0x9AFC670)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexRunner_TypeDefinitionIndex = 29234;

	class RegexRunner : public Il2CppObject
	{
	public:
		::System::Int32 runtextbeg; // 0x10
		::System::Int32 runtextend; // 0x14
		::System::Int32 runtextstart; // 0x18
		::System::String* runtext; // 0x20
		::System::Int32 runtextpos; // 0x28
		::Il2CppArray<::System::Object*>* runtrack; // 0x30
		::System::Int32 runtrackpos; // 0x38
		::Il2CppArray<::System::Object*>* runstack; // 0x40
		::System::Int32 runstackpos; // 0x48
		::Il2CppArray<::System::Object*>* runcrawl; // 0x50
		::System::Int32 runcrawlpos; // 0x58
		::System::Int32 runtrackcount; // 0x5C
		::System::Text::RegularExpressions::Match* runmatch; // 0x60
		::System::Text::RegularExpressions::Regex* runregex; // 0x68
		::System::Int32 _timeout; // 0x70
		::System::Boolean _ignoreTimeout; // 0x74
		::System::Int32 _timeoutOccursAt; // 0x78
		::System::Int32 TimeoutCheckFrequency; // 0x0
		::System::Int32 _timeoutChecksToSkip; // 0x7C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_.CTOR_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::Match* Scan(::System::Text::RegularExpressions::Regex* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Text::RegularExpressions::Match*(*)(::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTimeoutWatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_STARTTIMEOUTWATCH_OFFSET))(nullptr);
		}

		::System::Void CheckTimeout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHECKTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void DoCheckTimeout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOCHECKTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void Go()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_GO_OFFSET))(nullptr);
		}

		::System::Boolean FindFirstChar()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_FINDFIRSTCHAR_OFFSET))(nullptr);
		}

		::System::Void InitTrackCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_INITTRACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void InitMatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_INITMATCH_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::Match* TidyMatch(::System::Boolean arg)
		{
			return (return (::System::Text::RegularExpressions::Match*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TIDYMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureStorage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ENSURESTORAGE_OFFSET))(nullptr);
		}

		::System::Boolean IsBoundary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISBOUNDARY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsECMABoundary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISECMABOUNDARY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DoubleTrack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLETRACK_OFFSET))(nullptr);
		}

		::System::Void DoubleStack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLESTACK_OFFSET))(nullptr);
		}

		::System::Void DoubleCrawl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLECRAWL_OFFSET))(nullptr);
		}

		::System::Void Crawl(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWL_OFFSET))(arg, nullptr);
		}

		::System::Int32 Popcrawl()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_POPCRAWL_OFFSET))(nullptr);
		}

		::System::Int32 Crawlpos()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWLPOS_OFFSET))(nullptr);
		}

		::System::Void Capture(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CAPTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TransferCapture(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TRANSFERCAPTURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Uncapture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_UNCAPTURE_OFFSET))(nullptr);
		}

		::System::Boolean IsMatched(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISMATCHED_OFFSET))(arg, nullptr);
		}

		::System::Int32 MatchIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 MatchLength(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHLENGTH_OFFSET))(arg, nullptr);
		}

	};
}

