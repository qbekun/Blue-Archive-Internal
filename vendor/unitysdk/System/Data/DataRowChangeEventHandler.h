#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9742DF0)
#define SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9742F00)

namespace System::Data
{
	inline static constexpr unsigned int DataRowChangeEventHandler_TypeDefinitionIndex = 32217;

	class DataRowChangeEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Data::DataRowChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Data::DataRowChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCHANGEEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

