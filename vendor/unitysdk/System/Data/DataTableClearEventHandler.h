#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9744460)
#define SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9744570)

namespace System::Data
{
	inline static constexpr unsigned int DataTableClearEventHandler_TypeDefinitionIndex = 32228;

	class DataTableClearEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Data::DataTableClearEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Data::DataTableClearEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECLEAREVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

