#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_VALUEFIXUPSTACK_OFFSET UNITYSDK_OFFSET(0x92118C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x92119B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_SET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x92119C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9211A00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9211B80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_HASSURROGATE_OFFSET UNITYSDK_OFFSET(0x9212C50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x9212D30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_INITFULLDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x9212F20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CROSSAPPDOMAINARRAY_OFFSET UNITYSDK_OFFSET(0x92130B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x92130E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x9213130)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSE_OFFSET UNITYSDK_OFFSET(0x92131A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEERROR_OFFSET UNITYSDK_OFFSET(0x92142E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADER_OFFSET UNITYSDK_OFFSET(0x9213330)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADEREND_OFFSET UNITYSDK_OFFSET(0x9213350)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x92133B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECTEND_OFFSET UNITYSDK_OFFSET(0x92137E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x9214780)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_NEXTRECTANGLEMAP_OFFSET UNITYSDK_OFFSET(0x92154B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBER_OFFSET UNITYSDK_OFFSET(0x92155C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBEREND_OFFSET UNITYSDK_OFFSET(0x9216320)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBER_OFFSET UNITYSDK_OFFSET(0x9213BB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBEREND_OFFSET UNITYSDK_OFFSET(0x9214220)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x9215F50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x9215130)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x92163B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETID_OFFSET UNITYSDK_OFFSET(0x92164E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_BIND_OFFSET UNITYSDK_OFFSET(0x9216800)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_FASTBINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x9216860)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_RESOLVESIMPLEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x9216D10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETSIMPLYNAMEDTYPEFROMASSEMBLY_OFFSET UNITYSDK_OFFSET(0x9216D70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETTYPE_OFFSET UNITYSDK_OFFSET(0x9217270)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKTYPEFORWARDEDTO_OFFSET UNITYSDK_OFFSET(0x9217020)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectReader_TypeDefinitionIndex = 24664;

	class ObjectReader : public Il2CppObject
	{
	public:
		::System::IO::Stream* m_stream; // 0x10
		::System::Runtime::Serialization::ISurrogateSelector* m_surrogates; // 0x18
		::System::Runtime::Serialization::StreamingContext* m_context; // 0x20
		::System::Runtime::Serialization::ObjectManager* m_objectManager; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums; // 0x38
		::System::Runtime::Serialization::SerializationBinder* m_binder; // 0x40
		::System::Int64 topId; // 0x48
		::System::Boolean bSimpleAssembly; // 0x50
		::System::Object* handlerObject; // 0x58
		::System::Object* m_topObject; // 0x60
		::Il2CppArray<::System::Object*>* headers; // 0x68
		::System::Runtime::Remoting::Messaging::HeaderHandler* handler; // 0x70
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x78
		::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter; // 0x80
		::System::Runtime::Serialization::Formatters::Binary::SerStack* stack; // 0x88
		::System::Runtime::Serialization::Formatters::Binary::SerStack* valueFixupStack; // 0x90
		::Il2CppArray<::System::Object*>* crossAppDomainArray; // 0x98
		::System::Boolean bFullDeserialization; // 0xA0
		::System::Boolean bOldFormatDetected; // 0xA1
		::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* valTypeObjectIdTable; // 0xA8
		::System::Runtime::Serialization::Formatters::Binary::NameCache* typeCache; // 0xB0
		::System::String* previousAssemblyString; // 0xB8
		::System::String* previousName; // 0xC0
		::System::Type* previousType; // 0xC8

		::System::Runtime::Serialization::Formatters::Binary::SerStack* get_ValueFixupStack()
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::SerStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_VALUEFIXUPSTACK_OFFSET))(nullptr);
		}

		::System::Object* get_TopObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_TOPOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_TopObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_SET_TOPOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Runtime::Serialization::ISurrogateSelector* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::Formatters::Binary::InternalFE* arg, ::System::Runtime::Serialization::SerializationBinder* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*, ::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* Deserialize(::System::Runtime::Remoting::Messaging::HeaderHandler* arg, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::Messaging::HeaderHandler*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_DESERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasSurrogate(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_HASSURROGATE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckSerializable(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKSERIALIZABLE_OFFSET))(arg, nullptr);
		}

		::System::Void InitFullDeserialization()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_INITFULLDESERIALIZATION_OFFSET))(nullptr);
		}

		::System::Object* CrossAppDomainArray(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CROSSAPPDOMAINARRAY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Parse(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void ParseError(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ParseSerializedStreamHeader(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void ParseSerializedStreamHeaderEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADEREND_OFFSET))(arg, nullptr);
		}

		::System::Void ParseObject(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ParseObjectEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECTEND_OFFSET))(arg, nullptr);
		}

		::System::Void ParseArray(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void NextRectangleMap(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_NEXTRECTANGLEMAP_OFFSET))(arg, nullptr);
		}

		::System::Void ParseArrayMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Void ParseArrayMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBEREND_OFFSET))(arg, nullptr);
		}

		::System::Void ParseMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Void ParseMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBEREND_OFFSET))(arg, nullptr);
		}

		::System::Void ParseString(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterObject(::System::Object* arg, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RegisterObject(::System::Object* arg, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetId(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETID_OFFSET))(arg, nullptr);
		}

		::System::Type* Bind(::System::String* str, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_BIND_OFFSET))(str, str, nullptr);
		}

		::System::Type* FastBindToType(::System::String* str, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_FASTBINDTOTYPE_OFFSET))(str, str, nullptr);
		}

		::System::Reflection::Assembly* ResolveSimpleAssemblyName(::System::Reflection::AssemblyName* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::Reflection::AssemblyName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_RESOLVESIMPLEASSEMBLYNAME_OFFSET))(arg, nullptr);
		}

		::System::Void GetSimplyNamedTypeFromAssembly(::System::Reflection::Assembly* arg, ::System::String* str, ::System::Type&* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::System::String*, ::System::Type&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETSIMPLYNAMEDTYPEFROMASSEMBLY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Type* GetType(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* arg, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETTYPE_OFFSET))(arg, str, nullptr);
		}

		::System::Void CheckTypeForwardedTo(::System::Reflection::Assembly* arg, ::System::Reflection::Assembly* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKTYPEFORWARDEDTO_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

