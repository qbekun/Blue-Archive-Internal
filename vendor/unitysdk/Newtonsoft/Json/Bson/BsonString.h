#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_BSON_BSONSTRING_GET_BYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9547D10)
#define NEWTONSOFT_JSON_BSON_BSONSTRING_SET_BYTECOUNT_OFFSET UNITYSDK_OFFSET(0x9547D20)
#define NEWTONSOFT_JSON_BSON_BSONSTRING_GET_INCLUDELENGTH_OFFSET UNITYSDK_OFFSET(0x9547D30)
#define NEWTONSOFT_JSON_BSON_BSONSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x95476E0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonString_TypeDefinitionIndex = 32138;

	class BsonString : public Il2CppObject
	{
	public:
		::System::Int32 _ByteCount_k__BackingField; // 0x30
		::System::Boolean _IncludeLength_k__BackingField; // 0x34

		::System::Int32 get_ByteCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_GET_BYTECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ByteCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_SET_BYTECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IncludeLength()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_GET_INCLUDELENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONSTRING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

