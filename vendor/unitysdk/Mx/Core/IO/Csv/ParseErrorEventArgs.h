#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::IO::Csv { class MalformedCsvException; }
namespace MX::Core::IO::Csv { class ParseErrorAction; }

#define MX_CORE_IO_CSV_PARSEERROREVENTARGS_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x103F6E0)
#define MX_CORE_IO_CSV_PARSEERROREVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x103BEE0)
#define MX_CORE_IO_CSV_PARSEERROREVENTARGS_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x103F6F0)
#define MX_CORE_IO_CSV_PARSEERROREVENTARGS_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x103F700)

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int ParseErrorEventArgs_TypeDefinitionIndex = 12848;

	class ParseErrorEventArgs : public Il2CppObject
	{
	public:
		::MX::Core::IO::Csv::MalformedCsvException* _error; // 0x10
		::MX::Core::IO::Csv::ParseErrorAction* _action; // 0x18

		::MX::Core::IO::Csv::MalformedCsvException* get_Error()
		{
			return ((::MX::Core::IO::Csv::MalformedCsvException*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_PARSEERROREVENTARGS_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Core::IO::Csv::MalformedCsvException* arg, ::MX::Core::IO::Csv::ParseErrorAction* arg2)
		{
			((::System::Void(*)(::MX::Core::IO::Csv::MalformedCsvException*, ::MX::Core::IO::Csv::ParseErrorAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_PARSEERROREVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Action(::MX::Core::IO::Csv::ParseErrorAction* arg)
		{
			((::System::Void(*)(::MX::Core::IO::Csv::ParseErrorAction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_PARSEERROREVENTARGS_SET_ACTION_OFFSET))(arg, nullptr);
		}

		::MX::Core::IO::Csv::ParseErrorAction* get_Action()
		{
			return ((::MX::Core::IO::Csv::ParseErrorAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_PARSEERROREVENTARGS_GET_ACTION_OFFSET))(nullptr);
		}

	};
}

