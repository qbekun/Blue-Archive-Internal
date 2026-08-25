#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class PrimitiveTypeCode; }

#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x949DA80)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x949DA90)
#define NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x949DAA0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int TypeInformation_TypeDefinitionIndex = 31817;

	class TypeInformation : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::Newtonsoft::Json::Utilities::PrimitiveTypeCode* _TypeCode_k__BackingField; // 0x18

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Utilities::PrimitiveTypeCode* get_TypeCode()
		{
			return (return (::Newtonsoft::Json::Utilities::PrimitiveTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode* arg)
		{
			((::System::Void(*)(::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_TYPEINFORMATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

