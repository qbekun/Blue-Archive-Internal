#pragma once
#include "unitysdk.h"

#define STREAMTOKENREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9182640)
#define STREAMTOKENREADER_READ_OFFSET UNITYSDK_OFFSET(0x9182B80)
#define STREAMTOKENREADER_GET_NUMCHARENCOUNTERED_OFFSET UNITYSDK_OFFSET(0x9182BD0)

	inline static constexpr unsigned int StreamTokenReader_TypeDefinitionIndex = 24288;

	class StreamTokenReader : public Il2CppObject
	{
	public:
		::System::IO::StreamReader* _in; // 0x10
		::System::Int32 _numCharRead; // 0x18

		::System::Void .ctor(::System::IO::StreamReader* arg)
		{
			((::System::Void(*)(::System::IO::StreamReader*, ::PVOID))((::PBYTE)hIl2Cpp + STREAMTOKENREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STREAMTOKENREADER_READ_OFFSET))(nullptr);
		}

		::System::Int32 get_NumCharEncountered()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STREAMTOKENREADER_GET_NUMCHARENCOUNTERED_OFFSET))(nullptr);
		}

	};

