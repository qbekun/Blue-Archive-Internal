#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class PrimitiveTypeCode; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x94CC100)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_SET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x94CC110)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C3CF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94CC120)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonPrimitiveContract_TypeDefinitionIndex = 31948;

	class JsonPrimitiveContract : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Utilities::PrimitiveTypeCode* _TypeCode_k__BackingField; // 0x90
		Il2CppObject* ReadTypeMap; // 0x0

		::Newtonsoft::Json::Utilities::PrimitiveTypeCode* get_TypeCode()
		{
			return (return (::Newtonsoft::Json::Utilities::PrimitiveTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Utilities::PrimitiveTypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_SET_TYPECODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPRIMITIVECONTRACT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

