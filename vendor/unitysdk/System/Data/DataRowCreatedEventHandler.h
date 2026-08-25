#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9743720)
#define SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9743830)

namespace System::Data
{
	inline static constexpr unsigned int DataRowCreatedEventHandler_TypeDefinitionIndex = 32220;

	class DataRowCreatedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Data::DataRow* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCREATEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

