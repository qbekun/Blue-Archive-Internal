#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class CamelCaseNamingStrategy; }
namespace Newtonsoft::Json::Utilities { class EnumInfo; }
namespace Newtonsoft::Json::Serialization { class NamingStrategy; }

#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_INITIALIZEVALUESANDNAMES_OFFSET UNITYSDK_OFFSET(0x94A8B00)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETFLAGSVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TRYTOSTRING_OFFSET UNITYSDK_OFFSET(0x94A93B0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TRYTOSTRING_OFFSET UNITYSDK_OFFSET(0x94A9470)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_INTERNALFLAGSFORMAT_OFFSET UNITYSDK_OFFSET(0x94A9600)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETENUMVALUESANDNAMES_OFFSET UNITYSDK_OFFSET(0x94A97F0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TOUINT64_OFFSET UNITYSDK_OFFSET(0x94A90F0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_PARSEENUM_OFFSET UNITYSDK_OFFSET(0x94A98B0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_MATCHNAME_OFFSET UNITYSDK_OFFSET(0x94AA190)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_FINDINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x94AA0A0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94AA260)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int EnumUtils_TypeDefinitionIndex = 31854;

	class EnumUtils : public Il2CppObject
	{
	public:
		::System::Char EnumSeparatorChar; // 0x0
		::System::String* EnumSeparatorString; // 0x0
		Il2CppObject* ValuesAndNamesPerEnum; // 0x0
		::Newtonsoft::Json::Serialization::CamelCaseNamingStrategy* _camelCaseNamingStrategy; // 0x8

		::Newtonsoft::Json::Utilities::EnumInfo* InitializeValuesAndNames(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::EnumInfo*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_INITIALIZEVALUESANDNAMES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFlagsValues(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETFLAGSVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryToString(::System::Type* arg, ::System::Object* arg, ::System::Boolean arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::System::Boolean, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TRYTOSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryToString(::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::NamingStrategy* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::Newtonsoft::Json::Serialization::NamingStrategy*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TRYTOSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* InternalFlagsFormat(::Newtonsoft::Json::Utilities::EnumInfo* arg, ::System::UInt64 arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Utilities::EnumInfo*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_INTERNALFLAGSFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::EnumInfo* GetEnumValuesAndNames(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::EnumInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETENUMVALUESANDNAMES_OFFSET))(arg, nullptr);
		}

		::System::UInt64 ToUInt64(::System::Object* arg)
		{
			return (return (::System::UInt64(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Object* ParseEnum(::System::Type* arg, ::Newtonsoft::Json::Serialization::NamingStrategy* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Newtonsoft::Json::Serialization::NamingStrategy*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_PARSEENUM_OFFSET))(arg, arg, str, arg, nullptr);
		}

		Il2CppObject* MatchName(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::StringComparison* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_MATCHNAME_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* FindIndexByName(::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::StringComparison* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Int32, ::System::Int32, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_FINDINDEXBYNAME_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

