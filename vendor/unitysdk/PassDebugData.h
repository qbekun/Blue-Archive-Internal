#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int PassDebugData_TypeDefinitionIndex = 33836;

	class PassDebugData : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Object*>* resourceReadLists; // 0x18
		::Il2CppArray<::System::Object*>* resourceWriteLists; // 0x20
		::System::Boolean culled; // 0x28
		::System::Boolean generateDebugData; // 0x29

	};

