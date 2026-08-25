#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9217510)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x92176C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GET_OBJECTMANAGER_OFFSET UNITYSDK_OFFSET(0x9218810)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x9218130)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x92191D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERSETUP_OFFSET UNITYSDK_OFFSET(0x9219510)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERS_OFFSET UNITYSDK_OFFSET(0x9219700)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAY_OFFSET UNITYSDK_OFFSET(0x9218820)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAYMEMBER_OFFSET UNITYSDK_OFFSET(0x921A010)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITERECTANGLE_OFFSET UNITYSDK_OFFSET(0x921A350)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNEXT_OFFSET UNITYSDK_OFFSET(0x92186A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_INTERNALGETID_OFFSET UNITYSDK_OFFSET(0x9217CA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x921A950)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x9219E80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEKNOWNVALUECLASS_OFFSET UNITYSDK_OFFSET(0x9219F20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEOBJECTREF_OFFSET UNITYSDK_OFFSET(0x9219F00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x921A9C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKFORNULL_OFFSET UNITYSDK_OFFSET(0x9219BC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESERIALIZEDSTREAMHEADER_OFFSET UNITYSDK_OFFSET(0x9217C60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET UNITYSDK_OFFSET(0x921AB10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET UNITYSDK_OFFSET(0x9219640)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET UNITYSDK_OFFSET(0x9218020)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET UNITYSDK_OFFSET(0x9219DB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET UNITYSDK_OFFSET(0x9219C90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_MEMBERTONAMEINFO_OFFSET UNITYSDK_OFFSET(0x92194D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TOCODE_OFFSET UNITYSDK_OFFSET(0x9219140)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETASSEMBLYID_OFFSET UNITYSDK_OFFSET(0x9217D70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETTYPE_OFFSET UNITYSDK_OFFSET(0x9219120)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNAMEINFO_OFFSET UNITYSDK_OFFSET(0x921ABF0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKTYPEFORMAT_OFFSET UNITYSDK_OFFSET(0x9219110)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_PUTNAMEINFO_OFFSET UNITYSDK_OFFSET(0x9218680)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectWriter_TypeDefinitionIndex = 24665;

	class ObjectWriter : public Il2CppObject
	{
	public:
		::System::Collections::Queue* m_objectQueue; // 0x10
		::System::Runtime::Serialization::ObjectIDGenerator* m_idGenerator; // 0x18
		::System::Int32 m_currentId; // 0x20
		::System::Runtime::Serialization::ISurrogateSelector* m_surrogates; // 0x28
		::System::Runtime::Serialization::StreamingContext* m_context; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter; // 0x40
		::System::Runtime::Serialization::SerializationObjectManager* m_objectManager; // 0x48
		::System::Int64 topId; // 0x50
		::System::String* topName; // 0x58
		::Il2CppArray<::System::Object*>* headers; // 0x60
		::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums; // 0x68
		::System::Runtime::Serialization::SerializationBinder* m_binder; // 0x70
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x78
		::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter; // 0x80
		::Il2CppArray<::System::Object*>* crossAppDomainArray; // 0x88
		::System::Object* previousObj; // 0x90
		::System::Int64 previousId; // 0x98
		::System::Type* previousType; // 0xA0
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* previousCode; // 0xA8
		::System::Collections::Hashtable* assemblyToIdTable; // 0xB0
		::System::Runtime::Serialization::Formatters::Binary::SerStack* niPool; // 0xB8

		::System::Void .ctor(::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::Formatters::Binary::InternalFE* arg, ::System::Runtime::Serialization::SerializationBinder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*, ::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SERIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationObjectManager* get_ObjectManager()
		{
			return (return (::System::Runtime::Serialization::SerializationObjectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GET_OBJECTMANAGER_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteMemberSetup(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::String* str, ::System::Type* arg, ::System::Object* arg, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::String*, ::System::Type*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERSETUP_OFFSET))(arg, arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::Void WriteMembers(::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Object* arg, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteArray(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteArrayMember(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAYMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRectangle(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Array* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Array*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITERECTANGLE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* GetNext(int64_t&* arg)
		{
			return (return (::System::Object*(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNEXT_OFFSET))(arg, nullptr);
		}

		::System::Int64 InternalGetId(::System::Object* arg, ::System::Boolean arg, ::System::Type* arg, bool&* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, ::System::Boolean, ::System::Type*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_INTERNALGETID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 Schedule(::System::Object* arg, ::System::Boolean arg, ::System::Type* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, ::System::Boolean, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Schedule(::System::Object* arg, ::System::Boolean arg, ::System::Type* arg, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, ::System::Boolean, ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean WriteKnownValueClass(::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEKNOWNVALUECLASS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEOBJECTREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckForNull(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKFORNULL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteSerializedStreamHeader(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESERIALIZEDSTREAMHEADER_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Type* arg, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Type* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TypeToNameInfo(::System::Type* arg, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* MemberToNameInfo(::System::String* str)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_MEMBERTONAMEINFO_OFFSET))(str, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE* ToCode(::System::Type* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TOCODE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetAssemblyId(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* arg)
		{
			return (return (::System::Int64(*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETASSEMBLYID_OFFSET))(arg, nullptr);
		}

		::System::Type* GetType(::System::Object* arg)
		{
			return (return (::System::Type*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* GetNameInfo()
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNAMEINFO_OFFSET))(nullptr);
		}

		::System::Boolean CheckTypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle* arg, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Serialization::Formatters::FormatterTypeStyle*, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKTYPEFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PutNameInfo(::System::Runtime::Serialization::Formatters::Binary::NameInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_PUTNAMEINFO_OFFSET))(arg, nullptr);
		}

	};
}

