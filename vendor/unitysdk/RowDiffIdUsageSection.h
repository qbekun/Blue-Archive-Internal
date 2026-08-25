#pragma once
#include "unitysdk.h"

#define ROWDIFFIDUSAGESECTION_PREPARE_OFFSET UNITYSDK_OFFSET(0x9725AE0)

	inline static constexpr unsigned int RowDiffIdUsageSection_TypeDefinitionIndex = 32179;

	class RowDiffIdUsageSection : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _targetTable; // 0x10

		::System::Void Prepare(::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + ROWDIFFIDUSAGESECTION_PREPARE_OFFSET))(arg, nullptr);
		}

	};

