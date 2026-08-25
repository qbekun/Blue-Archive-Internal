#pragma once
#include "../../../../unitysdk.h"

#define MX_CORE_IO_CSV_CSVIGNOREATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10394F0)

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int CsvIgnoreAttribute_TypeDefinitionIndex = 12844;

	class CsvIgnoreAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CSVIGNOREATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

