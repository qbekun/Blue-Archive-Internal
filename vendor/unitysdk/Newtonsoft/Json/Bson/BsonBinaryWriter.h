#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonToken; }

#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_GET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x95432C0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_SET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x95432D0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95432E0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9543320)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9543350)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x9543380)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITETOKENINTERNAL_OFFSET UNITYSDK_OFFSET(0x9543DE0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x9544F00)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITEUTF8BYTES_OFFSET UNITYSDK_OFFSET(0x9545020)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x95451C0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZEWITHLENGTH_OFFSET UNITYSDK_OFFSET(0x95451D0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x95433B0)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95451E0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinaryWriter_TypeDefinitionIndex = 32127;

	class BsonBinaryWriter : public Il2CppObject
	{
	public:
		::System::Text::Encoding* Encoding; // 0x0
		::System::IO::BinaryWriter* _writer; // 0x10
		::Il2CppArray<::System::Object*>* _largeByteBuffer; // 0x18
		::System::DateTimeKind* _DateTimeKindHandling_k__BackingField; // 0x20

		::System::DateTimeKind* get_DateTimeKindHandling()
		{
			return (return (::System::DateTimeKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_GET_DATETIMEKINDHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeKindHandling(::System::DateTimeKind* arg)
		{
			((::System::Void(*)(::System::DateTimeKind*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_SET_DATETIMEKINDHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void WriteToken(::Newtonsoft::Json::Bson::BsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTokenInternal(::Newtonsoft::Json::Bson::BsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITETOKENINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void WriteString(::System::String* str, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITESTRING_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void WriteUtf8Bytes(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_WRITEUTF8BYTES_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 CalculateSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateSizeWithLength(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZEWITHLENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CalculateSize(::Newtonsoft::Json::Bson::BsonToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Bson::BsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CALCULATESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

