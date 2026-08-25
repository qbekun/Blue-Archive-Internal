#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int BindingFlags_TypeDefinitionIndex = 24845;

	class BindingFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::BindingFlags* Default; // 0x0
		::System::Reflection::BindingFlags* IgnoreCase; // 0x0
		::System::Reflection::BindingFlags* DeclaredOnly; // 0x0
		::System::Reflection::BindingFlags* Instance; // 0x0
		::System::Reflection::BindingFlags* Static; // 0x0
		::System::Reflection::BindingFlags* Public; // 0x0
		::System::Reflection::BindingFlags* NonPublic; // 0x0
		::System::Reflection::BindingFlags* FlattenHierarchy; // 0x0
		::System::Reflection::BindingFlags* InvokeMethod; // 0x0
		::System::Reflection::BindingFlags* CreateInstance; // 0x0
		::System::Reflection::BindingFlags* GetField; // 0x0
		::System::Reflection::BindingFlags* SetField; // 0x0
		::System::Reflection::BindingFlags* GetProperty; // 0x0
		::System::Reflection::BindingFlags* SetProperty; // 0x0
		::System::Reflection::BindingFlags* PutDispProperty; // 0x0
		::System::Reflection::BindingFlags* PutRefDispProperty; // 0x0
		::System::Reflection::BindingFlags* ExactBinding; // 0x0
		::System::Reflection::BindingFlags* SuppressChangeType; // 0x0
		::System::Reflection::BindingFlags* OptionalParamBinding; // 0x0
		::System::Reflection::BindingFlags* IgnoreReturn; // 0x0
		::System::Reflection::BindingFlags* DoNotWrapExceptions; // 0x0

	};
}

