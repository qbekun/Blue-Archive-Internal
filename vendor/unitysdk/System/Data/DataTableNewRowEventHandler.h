#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9746FC0)
#define SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x97470D0)

namespace System::Data
{
	inline static constexpr unsigned int DataTableNewRowEventHandler_TypeDefinitionIndex = 32231;

	class DataTableNewRowEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Data::DataTableNewRowEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Data::DataTableNewRowEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLENEWROWEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

