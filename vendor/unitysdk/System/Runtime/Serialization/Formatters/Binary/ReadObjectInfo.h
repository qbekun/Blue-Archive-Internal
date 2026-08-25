#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9210320)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_OBJECTEND_OFFSET UNITYSDK_OFFSET(0x9210330)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_PREPAREFORREUSE_OFFSET UNITYSDK_OFFSET(0x92094C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9210340)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x92104D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9210810)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9210910)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITREADCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9210590)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITSIREAD_OFFSET UNITYSDK_OFFSET(0x9210A90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITNOMEMBERS_OFFSET UNITYSDK_OFFSET(0x9210A20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x9210B20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x9210F30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETTYPE_OFFSET UNITYSDK_OFFSET(0x9211220)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x92113D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITDATASTORE_OFFSET UNITYSDK_OFFSET(0x92093F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_RECORDFIXUP_OFFSET UNITYSDK_OFFSET(0x9211490)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POPULATEOBJECTMEMBERS_OFFSET UNITYSDK_OFFSET(0x9211540)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POSITION_OFFSET UNITYSDK_OFFSET(0x9211100)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x92089C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x9210DD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x9210460)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ReadObjectInfo_TypeDefinitionIndex = 24658;

	class ReadObjectInfo : public Il2CppObject
	{
	public:
		::System::Int32 objectInfoId; // 0x10
		::System::Int32 readObjectInfoCounter; // 0x0
		::System::Type* objectType; // 0x18
		::System::Runtime::Serialization::ObjectManager* objectManager; // 0x20
		::System::Int32 count; // 0x28
		::System::Boolean isSi; // 0x2C
		::System::Boolean isNamed; // 0x2D
		::System::Boolean isTyped; // 0x2E
		::System::Boolean bSimpleAssembly; // 0x2F
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache; // 0x30
		::Il2CppArray<::System::Object*>* wireMemberNames; // 0x38
		::Il2CppArray<::System::Object*>* wireMemberTypes; // 0x40
		::System::Int32 lastPosition; // 0x48
		::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate; // 0x50
		::System::Runtime::Serialization::StreamingContext* context; // 0x58
		Il2CppObject* memberTypesList; // 0x68
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x70
		::System::Runtime::Serialization::IFormatterConverter* formatterConverter; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ObjectEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_OBJECTEND_OFFSET))(nullptr);
		}

		::System::Void PrepareForReuse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_PREPAREFORREUSE_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(::System::Type* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ObjectManager* arg, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg, ::System::Runtime::Serialization::IFormatterConverter* arg, ::System::Boolean arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Type* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ObjectManager* arg, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg, ::System::Runtime::Serialization::IFormatterConverter* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ObjectManager* arg, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg, ::System::Runtime::Serialization::IFormatterConverter* arg, ::System::Boolean arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ObjectManager* arg, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg, ::System::Runtime::Serialization::IFormatterConverter* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitReadConstructor(::System::Type* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITREADCONSTRUCTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitSiRead()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITSIREAD_OFFSET))(nullptr);
		}

		::System::Void InitNoMembers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITNOMEMBERS_OFFSET))(nullptr);
		}

		::System::Void InitMemberInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITMEMBERINFO_OFFSET))(nullptr);
		}

		::System::Reflection::MemberInfo* GetMemberInfo(::System::String* str)
		{
			return (return (::System::Reflection::MemberInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERINFO_OFFSET))(str, nullptr);
		}

		::System::Type* GetType(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETTYPE_OFFSET))(str, nullptr);
		}

		::System::Void AddValue(::System::String* str, ::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_ADDVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void InitDataStore(::System::Runtime::Serialization::SerializationInfo&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITDATASTORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RecordFixup(::System::Int64 arg, ::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_RECORDFIXUP_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void PopulateObjectMembers(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POPULATEOBJECTMEMBERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Position(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POSITION_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMemberTypes(::Il2CppArray<::System::Object*>* arg, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetMemberType(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Type*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETOBJECTINFO_OFFSET))(arg, nullptr);
		}

	};
}

