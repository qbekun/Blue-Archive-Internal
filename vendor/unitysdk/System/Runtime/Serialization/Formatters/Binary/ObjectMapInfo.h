#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x920D780)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO_ISCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x920D5E0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectMapInfo_TypeDefinitionIndex = 24656;

	class ObjectMapInfo : public Il2CppObject
	{
	public:
		::System::Int32 objectId; // 0x10
		::System::Int32 numMembers; // 0x14
		::Il2CppArray<::System::Object*>* memberNames; // 0x18
		::Il2CppArray<::System::Object*>* memberTypes; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean isCompatible(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAPINFO_ISCOMPATIBLE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

