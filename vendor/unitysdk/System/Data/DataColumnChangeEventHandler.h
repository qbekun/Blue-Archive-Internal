#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x97326D0)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x97327E0)

namespace System::Data
{
	inline static constexpr unsigned int DataColumnChangeEventHandler_TypeDefinitionIndex = 32202;

	class DataColumnChangeEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Data::DataColumnChangeEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Data::DataColumnChangeEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

