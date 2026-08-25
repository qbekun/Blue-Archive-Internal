#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonBinaryWriter; }
namespace Newtonsoft::Json::Bson { class BsonToken; }
namespace Newtonsoft::Json { class JsonToken; }
namespace Newtonsoft::Json::Bson { class BsonType; }

#define NEWTONSOFT_JSON_BSON_BSONWRITER_GET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x9547F20)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_SET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x9547F40)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9547F60)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9548060)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9548130)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x9548170)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x9548210)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9548250)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9548290)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITERAWVALUE_OFFSET UNITYSDK_OFFSET(0x95482D0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x9548310)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x95483C0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9548440)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9548470)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDPARENT_OFFSET UNITYSDK_OFFSET(0x9548390)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_REMOVEPARENT_OFFSET UNITYSDK_OFFSET(0x95481E0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x9548690)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_ADDTOKEN_OFFSET UNITYSDK_OFFSET(0x95484C0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9548710)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x9548830)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x95488A0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9548910)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x95489F0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9548AB0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9548BB0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9548C70)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9548D70)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9548E40)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9548F10)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9548FB0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9549070)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9549130)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9549220)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x95492E0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x95493A0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9549470)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9549560)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9549630)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x95496E0)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9549790)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9549850)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEOBJECTID_OFFSET UNITYSDK_OFFSET(0x9549950)
#define NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEREGEX_OFFSET UNITYSDK_OFFSET(0x9549A50)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonWriter_TypeDefinitionIndex = 32143;

	class BsonWriter : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Bson::BsonBinaryWriter* _writer; // 0x60
		::Newtonsoft::Json::Bson::BsonToken* _root; // 0x68
		::Newtonsoft::Json::Bson::BsonToken* _parent; // 0x70
		::System::String* _propertyName; // 0x78

		::System::DateTimeKind* get_DateTimeKindHandling()
		{
			return (return (::System::DateTimeKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_GET_DATETIMEKINDHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeKindHandling(::System::DateTimeKind* arg)
		{
			((::System::Void(*)(::System::DateTimeKind*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_SET_DATETIMEKINDHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEEND_OFFSET))(arg, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteStartConstructor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(str, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteRawValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITERAWVALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteStartArray()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTARRAY_OFFSET))(nullptr);
		}

		::System::Void WriteStartObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITESTARTOBJECT_OFFSET))(nullptr);
		}

		::System::Void WritePropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void AddParent(::Newtonsoft::Json::Bson::BsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDPARENT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_REMOVEPARENT_OFFSET))(nullptr);
		}

		::System::Void AddValue(::System::Object* arg, ::Newtonsoft::Json::Bson::BsonType* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Bson::BsonType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddToken(::Newtonsoft::Json::Bson::BsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_ADDTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITENULL_OFFSET))(nullptr);
		}

		::System::Void WriteUndefined()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEUNDEFINED_OFFSET))(nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::DateTimeOffset* arg)
		{
			((::System::Void(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Guid* arg)
		{
			((::System::Void(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteObjectId(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEOBJECTID_OFFSET))(arg, nullptr);
		}

		::System::Void WriteRegex(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONWRITER_WRITEREGEX_OFFSET))(str, str, nullptr);
		}

	};
}

