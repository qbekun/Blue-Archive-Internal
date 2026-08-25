#pragma once
#include "unitysdk.h"

#define ITOKENREADER_READ_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ITokenReader_TypeDefinitionIndex = 24287;

	class ITokenReader : public Il2CppObject
	{
	public:
		::System::Int32 Read()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ITOKENREADER_READ_OFFSET))(nullptr);
		}

	};

