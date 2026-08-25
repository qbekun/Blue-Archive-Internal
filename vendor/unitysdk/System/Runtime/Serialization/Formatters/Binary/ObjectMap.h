#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9208770)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9208F60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATEOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x9209390)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_OFFSET UNITYSDK_OFFSET(0x92094D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_OFFSET UNITYSDK_OFFSET(0x9209560)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectMap_TypeDefinitionIndex = 24651;

	class ObjectMap : public Il2CppObject
	{
	public:
		::System::String* objectName; // 0x10
		::System::Type* objectType; // 0x18
		::Il2CppArray<::System::Object*>* binaryTypeEnumA; // 0x20
		::Il2CppArray<::System::Object*>* typeInformationA; // 0x28
		::Il2CppArray<::System::Object*>* memberTypes; // 0x30
		::Il2CppArray<::System::Object*>* memberNames; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo; // 0x40
		::System::Boolean isInitObjectInfo; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader; // 0x50
		::System::Int32 objectId; // 0x58
		::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo; // 0x60

		::System::Void .ctor(::System::String* str, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* arg, ::System::Int32 arg, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* arg, ::System::Int32 arg, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateObjectInfo(::System::Runtime::Serialization::SerializationInfo&* arg, ::System::Object[]&* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Runtime::Serialization::SerializationInfo&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATEOBJECTINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::System::String* str, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* arg, ::System::Int32 arg, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::ObjectMap*(*)(::System::String*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* arg, ::System::Int32 arg, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::ObjectMap*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

