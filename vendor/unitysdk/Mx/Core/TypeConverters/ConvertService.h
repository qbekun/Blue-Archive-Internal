#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_TYPECONVERTERS_CONVERTSERVICE_FASTCONVERT_OFFSET UNITYSDK_OFFSET(0x1017CA0)
#define MX_CORE_TYPECONVERTERS_CONVERTSERVICE_FASTCONVERTTOINT64_OFFSET UNITYSDK_OFFSET(0x1017D50)
#define MX_CORE_TYPECONVERTERS_CONVERTSERVICE_ASCIITOINT64_OFFSET UNITYSDK_OFFSET(0x1017E10)
#define MX_CORE_TYPECONVERTERS_CONVERTSERVICE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1017E50)
#define MX_CORE_TYPECONVERTERS_CONVERTSERVICE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1017EC0)
#define MX_CORE_TYPECONVERTERS_CONVERTSERVICE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1017F30)
#define MX_CORE_TYPECONVERTERS_CONVERTSERVICE_PARSEINT_OFFSET UNITYSDK_OFFSET(0x1017FA0)
#define MX_CORE_TYPECONVERTERS_CONVERTSERVICE_PARSEFLOAT_OFFSET UNITYSDK_OFFSET(0x1018000)
#define MX_CORE_TYPECONVERTERS_CONVERTSERVICE_PARSELONG_OFFSET UNITYSDK_OFFSET(0x1018060)

namespace MX::Core::TypeConverters
{
	inline static constexpr unsigned int ConvertService_TypeDefinitionIndex = 12797;

	class ConvertService : public Il2CppObject
	{
	public:
		::System::Int32 FastConvert(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_TYPECONVERTERS_CONVERTSERVICE_FASTCONVERT_OFFSET))(str, nullptr);
		}

		::System::Int64 FastConvertToInt64(::System::String* str)
		{
			return ((::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_TYPECONVERTERS_CONVERTSERVICE_FASTCONVERTTOINT64_OFFSET))(str, nullptr);
		}

		::System::Int64 ASCIIToInt64(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_TYPECONVERTERS_CONVERTSERVICE_ASCIITOINT64_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, float&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_TYPECONVERTERS_CONVERTSERVICE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, int32_t&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_TYPECONVERTERS_CONVERTSERVICE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, int64_t&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_TYPECONVERTERS_CONVERTSERVICE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 ParseInt(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_TYPECONVERTERS_CONVERTSERVICE_PARSEINT_OFFSET))(str, nullptr);
		}

		::System::Single ParseFloat(::System::String* str)
		{
			return ((::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_TYPECONVERTERS_CONVERTSERVICE_PARSEFLOAT_OFFSET))(str, nullptr);
		}

		::System::Int64 ParseLong(::System::String* str)
		{
			return ((::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_TYPECONVERTERS_CONVERTSERVICE_PARSELONG_OFFSET))(str, nullptr);
		}

	};
}

