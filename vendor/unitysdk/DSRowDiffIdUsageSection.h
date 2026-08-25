#pragma once
#include "unitysdk.h"

#define DSROWDIFFIDUSAGESECTION_PREPARE_OFFSET UNITYSDK_OFFSET(0x9721980)

	inline static constexpr unsigned int DSRowDiffIdUsageSection_TypeDefinitionIndex = 32180;

	class DSRowDiffIdUsageSection : public Il2CppObject
	{
	public:
		::System::Data::DataSet* _targetDS; // 0x10

		::System::Void Prepare(::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + DSROWDIFFIDUSAGESECTION_PREPARE_OFFSET))(arg, nullptr);
		}

	};

