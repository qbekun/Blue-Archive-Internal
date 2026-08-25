#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATASETCLEAREVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9743840)
#define SYSTEM_DATA_DATASETCLEAREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9743950)

namespace System::Data
{
	inline static constexpr unsigned int DataSetClearEventhandler_TypeDefinitionIndex = 32221;

	class DataSetClearEventhandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASETCLEAREVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATASETCLEAREVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

