#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class PrimitiveTypeCode; }
namespace Newtonsoft::Json::Utilities { class TypeInformation; }
namespace Newtonsoft::Json::Utilities { class ParseResult; }

#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x949DAE0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x949DB30)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPEINFORMATION_OFFSET UNITYSDK_OFFSET(0x949DF70)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISCONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x949E070)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_PARSETIMESPAN_OFFSET UNITYSDK_OFFSET(0x949E100)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CREATECASTCONVERTER_OFFSET UNITYSDK_OFFSET(0x949E180)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x949E400)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_FROMBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x949E790)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERT_OFFSET UNITYSDK_OFFSET(0x949ECA0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x949FB50)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTINTERNAL_OFFSET UNITYSDK_OFFSET(0x949EF30)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERTORCAST_OFFSET UNITYSDK_OFFSET(0x94A00A0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ENSURETYPEASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x949FDF0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_VERSIONTRYPARSE_OFFSET UNITYSDK_OFFSET(0x949FD60)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x949FC80)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT32TRYPARSE_OFFSET UNITYSDK_OFFSET(0x94A0290)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT64TRYPARSE_OFFSET UNITYSDK_OFFSET(0x94A04B0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_DECIMALTRYPARSE_OFFSET UNITYSDK_OFFSET(0x94A0690)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTGUID_OFFSET UNITYSDK_OFFSET(0x94A14A0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYHEXTEXTTOINT_OFFSET UNITYSDK_OFFSET(0x94A14F0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94A15C0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ConvertUtils_TypeDefinitionIndex = 31821;

	class ConvertUtils : public Il2CppObject
	{
	public:
		Il2CppObject* TypeCodeMap; // 0x0
		::Il2CppArray<::System::Object*>* PrimitiveTypeCodes; // 0x8
		Il2CppObject* CastConverters; // 0x10

		::Newtonsoft::Json::Utilities::PrimitiveTypeCode* GetTypeCode(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::PrimitiveTypeCode*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::PrimitiveTypeCode* GetTypeCode(::System::Type* arg, bool&* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::PrimitiveTypeCode*(*)(::System::Type*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::TypeInformation* GetTypeInformation(::System::IConvertible* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::TypeInformation*(*)(::System::IConvertible*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPEINFORMATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConvertible(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISCONVERTIBLE_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* ParseTimeSpan(::System::String* str)
		{
			return (return (::System::TimeSpan*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_PARSETIMESPAN_OFFSET))(str, nullptr);
		}

		Il2CppObject* CreateCastConverter(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CREATECASTCONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Numerics::BigInteger* ToBigInteger(::System::Object* arg)
		{
			return (return (::System::Numerics::BigInteger*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TOBIGINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Object* FromBigInteger(::System::Numerics::BigInteger* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Numerics::BigInteger*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_FROMBIGINTEGER_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Convert(::System::Object* arg, ::System::Globalization::CultureInfo* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryConvert(::System::Object* arg, ::System::Globalization::CultureInfo* arg, ::System::Type* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		ConvertResult* TryConvertInternal(::System::Object* arg, ::System::Globalization::CultureInfo* arg, ::System::Type* arg, ::System::Object&* arg)
		{
			return (return (ConvertResult*(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ConvertOrCast(::System::Object* arg, ::System::Globalization::CultureInfo* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERTORCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* EnsureTypeAssignable(::System::Object* arg, ::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ENSURETYPEASSIGNABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VersionTryParse(::System::String* str, ::System::Version&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Version&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_VERSIONTRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsInteger(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISINTEGER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::ParseResult* Int32TryParse(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::ParseResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT32TRYPARSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::ParseResult* Int64TryParse(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int64_t&* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::ParseResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT64TRYPARSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::ParseResult* DecimalTryParse(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Decimal&* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::ParseResult*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Decimal&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_DECIMALTRYPARSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryConvertGuid(::System::String* str, ::System::Guid&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Guid&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTGUID_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryHexTextToInt(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYHEXTEXTTOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

