#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x920E930)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_OBJECTEND_OFFSET UNITYSDK_OFFSET(0x920E940)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INTERNALINIT_OFFSET UNITYSDK_OFFSET(0x920E9A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x920EA50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSERIALIZE_OFFSET UNITYSDK_OFFSET(0x920EC30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x920FCE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSERIALIZE_OFFSET UNITYSDK_OFFSET(0x920FD60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSIWRITE_OFFSET UNITYSDK_OFFSET(0x920F390)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_CHECKTYPEFORWARDEDFROM_OFFSET UNITYSDK_OFFSET(0x920F7B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITNOMEMBERS_OFFSET UNITYSDK_OFFSET(0x920F220)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x920F920)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x9204D70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETASSEMBLYSTRING_OFFSET UNITYSDK_OFFSET(0x9204D40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INVOKESERIALIZATIONBINDER_OFFSET UNITYSDK_OFFSET(0x920F350)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x92100F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x9210250)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x920EAD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_PUTOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x920E970)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int WriteObjectInfo_TypeDefinitionIndex = 24657;

	class WriteObjectInfo : public Il2CppObject
	{
	public:
		::System::Int32 objectInfoId; // 0x10
		::System::Object* obj; // 0x18
		::System::Type* objectType; // 0x20
		::System::Boolean isSi; // 0x28
		::System::Boolean isNamed; // 0x29
		::System::Boolean isTyped; // 0x2A
		::System::Boolean isArray; // 0x2B
		::System::Runtime::Serialization::SerializationInfo* si; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache; // 0x38
		::Il2CppArray<::System::Object*>* memberData; // 0x40
		::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate; // 0x48
		::System::Runtime::Serialization::StreamingContext* context; // 0x50
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x60
		::System::Int64 objectId; // 0x68
		::System::Int64 assemId; // 0x70
		::System::String* binderTypeName; // 0x78
		::System::String* binderAssemblyString; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ObjectEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_OBJECTEND_OFFSET))(nullptr);
		}

		::System::Void InternalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INTERNALINIT_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::System::Object* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg, ::System::Runtime::Serialization::IFormatterConverter* arg, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* arg, ::System::Runtime::Serialization::SerializationBinder* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*(*)(::System::Object*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_SERIALIZE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitSerialize(::System::Object* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg, ::System::Runtime::Serialization::IFormatterConverter* arg, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* arg, ::System::Runtime::Serialization::SerializationBinder* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSERIALIZE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::System::Type* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg, ::System::Runtime::Serialization::IFormatterConverter* arg, ::System::Runtime::Serialization::SerializationBinder* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*(*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_SERIALIZE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitSerialize(::System::Type* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg, ::System::Runtime::Serialization::IFormatterConverter* arg, ::System::Runtime::Serialization::SerializationBinder* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSERIALIZE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitSiWrite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSIWRITE_OFFSET))(nullptr);
		}

		::System::Void CheckTypeForwardedFrom(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* arg, ::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_CHECKTYPEFORWARDEDFROM_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void InitNoMembers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITNOMEMBERS_OFFSET))(nullptr);
		}

		::System::Void InitMemberInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITMEMBERINFO_OFFSET))(nullptr);
		}

		::System::String* GetTypeFullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETTYPEFULLNAME_OFFSET))(nullptr);
		}

		::System::String* GetAssemblyString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETASSEMBLYSTRING_OFFSET))(nullptr);
		}

		::System::Void InvokeSerializationBinder(::System::Runtime::Serialization::SerializationBinder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INVOKESERIALIZATIONBINDER_OFFSET))(arg, nullptr);
		}

		::System::Type* GetMemberType(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Type*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETMEMBERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void GetMemberInfo(::System::Object[]&* arg, ::System::Object[]&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETMEMBERINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*(*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETOBJECTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void PutObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_PUTOBJECTINFO_OFFSET))(arg, arg, nullptr);
		}

	};
}

