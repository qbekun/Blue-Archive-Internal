#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F8950)
#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_CONTAINERID_OFFSET UNITYSDK_OFFSET(0x91F8AF0)
#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTFIELD_OFFSET UNITYSDK_OFFSET(0x91F8B00)
#define SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTINDEX_OFFSET UNITYSDK_OFFSET(0x91F8B10)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int ValueTypeFixupInfo_TypeDefinitionIndex = 24587;

	class ValueTypeFixupInfo : public Il2CppObject
	{
	public:
		::System::Int64 _containerID; // 0x10
		::System::Reflection::FieldInfo* _parentField; // 0x18
		::Il2CppArray<::System::Object*>* _parentIndex; // 0x20

		::System::Void .ctor(::System::Int64 arg, ::System::Reflection::FieldInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Reflection::FieldInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 get_ContainerID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_CONTAINERID_OFFSET))(nullptr);
		}

		::System::Reflection::FieldInfo* get_ParentField()
		{
			return (return (::System::Reflection::FieldInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTFIELD_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ParentIndex()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_VALUETYPEFIXUPINFO_GET_PARENTINDEX_OFFSET))(nullptr);
		}

	};
}

