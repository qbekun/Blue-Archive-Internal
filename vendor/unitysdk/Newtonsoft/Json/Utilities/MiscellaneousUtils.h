#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_ASSERT_OFFSET UNITYSDK_OFFSET(0x94B1750)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_VALUEEQUALS_OFFSET UNITYSDK_OFFSET(0x94B1760)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x94A3CC0)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94B1AE0)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_BYTEARRAYCOMPARE_OFFSET UNITYSDK_OFFSET(0x94B1B80)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETPREFIX_OFFSET UNITYSDK_OFFSET(0x94B1C40)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETLOCALNAME_OFFSET UNITYSDK_OFFSET(0x94B1D00)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETQUALIFIEDNAMEPARTS_OFFSET UNITYSDK_OFFSET(0x94B1C70)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETREGEXOPTIONS_OFFSET UNITYSDK_OFFSET(0x94B1D30)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int MiscellaneousUtils_TypeDefinitionIndex = 31882;

	class MiscellaneousUtils : public Il2CppObject
	{
	public:
		::System::Void Assert(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_ASSERT_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean ValueEquals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_VALUEEQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::ArgumentOutOfRangeException* CreateArgumentOutOfRangeException(::System::String* str, ::System::Object* arg, ::System::String* str)
		{
			return (return (::System::ArgumentOutOfRangeException*(*)(::System::String*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(str, arg, str, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 ByteArrayCompare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_BYTEARRAYCOMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETPREFIX_OFFSET))(str, nullptr);
		}

		::System::String* GetLocalName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETLOCALNAME_OFFSET))(str, nullptr);
		}

		::System::Void GetQualifiedNameParts(::System::String* str, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETQUALIFIEDNAMEPARTS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Text::RegularExpressions::RegexOptions* GetRegexOptions(::System::String* str)
		{
			return (return (::System::Text::RegularExpressions::RegexOptions*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETREGEXOPTIONS_OFFSET))(str, nullptr);
		}

	};
}

