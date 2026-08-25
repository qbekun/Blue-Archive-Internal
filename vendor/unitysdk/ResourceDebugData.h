#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int ResourceDebugData_TypeDefinitionIndex = 33837;

	class ResourceDebugData : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Boolean imported; // 0x18
		::System::Int32 creationPassIndex; // 0x1C
		::System::Int32 releasePassIndex; // 0x20
		Il2CppObject* consumerList; // 0x28
		Il2CppObject* producerList; // 0x30

	};

