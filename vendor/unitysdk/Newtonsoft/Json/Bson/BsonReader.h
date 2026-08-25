#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonType; }
namespace Newtonsoft::Json::Bson { class BsonBinaryType&; }

#define NEWTONSOFT_JSON_BSON_BSONREADER_GET_JSONNET35BINARYCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x9545340)
#define NEWTONSOFT_JSON_BSON_BSONREADER_SET_JSONNET35BINARYCOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x9545350)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GET_READROOTVALUEASARRAY_OFFSET UNITYSDK_OFFSET(0x9545360)
#define NEWTONSOFT_JSON_BSON_BSONREADER_SET_READROOTVALUEASARRAY_OFFSET UNITYSDK_OFFSET(0x9545370)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x9545380)
#define NEWTONSOFT_JSON_BSON_BSONREADER_SET_DATETIMEKINDHANDLING_OFFSET UNITYSDK_OFFSET(0x9545390)
#define NEWTONSOFT_JSON_BSON_BSONREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95453A0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95454C0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95453C0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95454E0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READELEMENT_OFFSET UNITYSDK_OFFSET(0x95455B0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READ_OFFSET UNITYSDK_OFFSET(0x95459D0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x95461C0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READCODEWSCOPE_OFFSET UNITYSDK_OFFSET(0x9545F90)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READREFERENCE_OFFSET UNITYSDK_OFFSET(0x9545DB0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READNORMAL_OFFSET UNITYSDK_OFFSET(0x9545B60)
#define NEWTONSOFT_JSON_BSON_BSONREADER_POPCONTEXT_OFFSET UNITYSDK_OFFSET(0x9546A70)
#define NEWTONSOFT_JSON_BSON_BSONREADER_PUSHCONTEXT_OFFSET UNITYSDK_OFFSET(0x95462E0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x9546A30)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_OFFSET UNITYSDK_OFFSET(0x95463E0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READBINARY_OFFSET UNITYSDK_OFFSET(0x9546B80)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x9545640)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READLENGTHSTRING_OFFSET UNITYSDK_OFFSET(0x9546240)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9546E10)
#define NEWTONSOFT_JSON_BSON_BSONREADER_GETLASTFULLCHARSTOP_OFFSET UNITYSDK_OFFSET(0x9546D80)
#define NEWTONSOFT_JSON_BSON_BSONREADER_BYTESINSEQUENCE_OFFSET UNITYSDK_OFFSET(0x9547170)
#define NEWTONSOFT_JSON_BSON_BSONREADER_ENSUREBUFFERS_OFFSET UNITYSDK_OFFSET(0x9546CB0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x9546B40)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x9546200)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x9546C70)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_OFFSET UNITYSDK_OFFSET(0x9545600)
#define NEWTONSOFT_JSON_BSON_BSONREADER_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x9546B20)
#define NEWTONSOFT_JSON_BSON_BSONREADER_READBYTES_OFFSET UNITYSDK_OFFSET(0x95463A0)
#define NEWTONSOFT_JSON_BSON_BSONREADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9547380)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonReader_TypeDefinitionIndex = 32131;

	class BsonReader : public Il2CppObject
	{
	public:
		::System::Int32 MaxCharBytesSize; // 0x0
		::Il2CppArray<::System::Object*>* SeqRange1; // 0x0
		::Il2CppArray<::System::Object*>* SeqRange2; // 0x8
		::Il2CppArray<::System::Object*>* SeqRange3; // 0x10
		::Il2CppArray<::System::Object*>* SeqRange4; // 0x18
		::System::IO::BinaryReader* _reader; // 0x78
		Il2CppObject* _stack; // 0x80
		::Il2CppArray<::System::Object*>* _byteBuffer; // 0x88
		::Il2CppArray<::System::Object*>* _charBuffer; // 0x90
		::Newtonsoft::Json::Bson::BsonType* _currentElementType; // 0x98
		BsonReaderState* _bsonReaderState; // 0x9C
		ContainerContext* _currentContext; // 0xA0
		::System::Boolean _readRootValueAsArray; // 0xA8
		::System::Boolean _jsonNet35BinaryCompatibility; // 0xA9
		::System::DateTimeKind* _dateTimeKindHandling; // 0xAC

		::System::Boolean get_JsonNet35BinaryCompatibility()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GET_JSONNET35BINARYCOMPATIBILITY_OFFSET))(nullptr);
		}

		::System::Void set_JsonNet35BinaryCompatibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_SET_JSONNET35BINARYCOMPATIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ReadRootValueAsArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GET_READROOTVALUEASARRAY_OFFSET))(nullptr);
		}

		::System::Void set_ReadRootValueAsArray(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_SET_READROOTVALUEASARRAY_OFFSET))(arg, nullptr);
		}

		::System::DateTimeKind* get_DateTimeKindHandling()
		{
			return (return (::System::DateTimeKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GET_DATETIMEKINDHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeKindHandling(::System::DateTimeKind* arg)
		{
			((::System::Void(*)(::System::DateTimeKind*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_SET_DATETIMEKINDHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::BinaryReader* arg)
		{
			((::System::Void(*)(::System::IO::BinaryReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Boolean arg, ::System::DateTimeKind* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Boolean, ::System::DateTimeKind*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::IO::BinaryReader* arg, ::System::Boolean arg, ::System::DateTimeKind* arg)
		{
			((::System::Void(*)(::System::IO::BinaryReader*, ::System::Boolean, ::System::DateTimeKind*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ReadElement()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READELEMENT_OFFSET))(nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READ_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Boolean ReadCodeWScope()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READCODEWSCOPE_OFFSET))(nullptr);
		}

		::System::Boolean ReadReference()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READREFERENCE_OFFSET))(nullptr);
		}

		::System::Boolean ReadNormal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READNORMAL_OFFSET))(nullptr);
		}

		::System::Void PopContext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_POPCONTEXT_OFFSET))(nullptr);
		}

		::System::Void PushContext(ContainerContext* arg)
		{
			((::System::Void(*)(ContainerContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_PUSHCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Byte ReadByte()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READBYTE_OFFSET))(nullptr);
		}

		::System::Void ReadType(::Newtonsoft::Json::Bson::BsonType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadBinary(::Newtonsoft::Json::Bson::BsonBinaryType&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Newtonsoft::Json::Bson::BsonBinaryType&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READBINARY_OFFSET))(arg, nullptr);
		}

		::System::String* ReadString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READSTRING_OFFSET))(nullptr);
		}

		::System::String* ReadLengthString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READLENGTHSTRING_OFFSET))(nullptr);
		}

		::System::String* GetString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GETSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetLastFullCharStop(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_GETLASTFULLCHARSTOP_OFFSET))(arg, nullptr);
		}

		::System::Int32 BytesInSequence(::System::Byte arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_BYTESINSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureBuffers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_ENSUREBUFFERS_OFFSET))(nullptr);
		}

		::System::Double ReadDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READDOUBLE_OFFSET))(nullptr);
		}

		::System::Int32 ReadInt32()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READINT32_OFFSET))(nullptr);
		}

		::System::Int64 ReadInt64()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READINT64_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Bson::BsonType* ReadType()
		{
			return (return (::Newtonsoft::Json::Bson::BsonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READTYPE_OFFSET))(nullptr);
		}

		::System::Void MovePosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_MOVEPOSITION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadBytes(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_READBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREADER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

