#pragma once
#include "../unitysdk.h"

#define SYSTEM_GUID_NEWGUID_OFFSET UNITYSDK_OFFSET(0x9350DF0)
#define SYSTEM_GUID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9350E80)
#define SYSTEM_GUID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9350F40)
#define SYSTEM_GUID_.CTOR_OFFSET UNITYSDK_OFFSET(0x93510C0)
#define SYSTEM_GUID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9351230)
#define SYSTEM_GUID_.CTOR_OFFSET UNITYSDK_OFFSET(0x93512A0)
#define SYSTEM_GUID_PARSE_OFFSET UNITYSDK_OFFSET(0x9351790)
#define SYSTEM_GUID_PARSE_OFFSET UNITYSDK_OFFSET(0x93518B0)
#define SYSTEM_GUID_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9351940)
#define SYSTEM_GUID_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x93519F0)
#define SYSTEM_GUID_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x9351A60)
#define SYSTEM_GUID_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x9351B30)
#define SYSTEM_GUID_TRYPARSEGUID_OFFSET UNITYSDK_OFFSET(0x93513A0)
#define SYSTEM_GUID_TRYPARSEGUIDWITHHEXPREFIX_OFFSET UNITYSDK_OFFSET(0x9351F80)
#define SYSTEM_GUID_TRYPARSEGUIDWITHNOSTYLE_OFFSET UNITYSDK_OFFSET(0x93526B0)
#define SYSTEM_GUID_TRYPARSEGUIDWITHDASHES_OFFSET UNITYSDK_OFFSET(0x9351C90)
#define SYSTEM_GUID_STRINGTOSHORT_OFFSET UNITYSDK_OFFSET(0x9352E90)
#define SYSTEM_GUID_STRINGTOSHORT_OFFSET UNITYSDK_OFFSET(0x9353310)
#define SYSTEM_GUID_STRINGTOINT_OFFSET UNITYSDK_OFFSET(0x9352E40)
#define SYSTEM_GUID_STRINGTOINT_OFFSET UNITYSDK_OFFSET(0x93530B0)
#define SYSTEM_GUID_STRINGTOLONG_OFFSET UNITYSDK_OFFSET(0x9352EF0)
#define SYSTEM_GUID_EATALLWHITESPACE_OFFSET UNITYSDK_OFFSET(0x9352B00)
#define SYSTEM_GUID_ISHEXPREFIX_OFFSET UNITYSDK_OFFSET(0x9352D80)
#define SYSTEM_GUID_WRITEBYTEHELPER_OFFSET UNITYSDK_OFFSET(0x9353390)
#define SYSTEM_GUID_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x93534E0)
#define SYSTEM_GUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9353630)
#define SYSTEM_GUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93538A0)
#define SYSTEM_GUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x93538C0)
#define SYSTEM_GUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9353950)
#define SYSTEM_GUID_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9353980)
#define SYSTEM_GUID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9353990)
#define SYSTEM_GUID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9353AF0)
#define SYSTEM_GUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9353BB0)
#define SYSTEM_GUID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9353BE0)
#define SYSTEM_GUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9353C10)
#define SYSTEM_GUID_HEXTOCHAR_OFFSET UNITYSDK_OFFSET(0x9353C20)
#define SYSTEM_GUID_HEXSTOCHARS_OFFSET UNITYSDK_OFFSET(0x9353C30)
#define SYSTEM_GUID_HEXSTOCHARSHEXOUTPUT_OFFSET UNITYSDK_OFFSET(0x9353CA0)
#define SYSTEM_GUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9353670)
#define SYSTEM_GUID_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9353D20)
#define SYSTEM_GUID_SYSTEM.ISPANFORMATTABLE.TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9354710)

namespace System
{
	inline static constexpr unsigned int Guid_TypeDefinitionIndex = 23764;

	class Guid : public Il2CppObject
	{
	public:
		::System::Guid* Empty; // 0x0
		::System::Int32 _a; // 0x10
		::System::Int16 _b; // 0x14
		::System::Int16 _c; // 0x16
		::System::Byte _d; // 0x18
		::System::Byte _e; // 0x19
		::System::Byte _f; // 0x1A
		::System::Byte _g; // 0x1B
		::System::Byte _h; // 0x1C
		::System::Byte _i; // 0x1D
		::System::Byte _j; // 0x1E
		::System::Byte _k; // 0x1F

		::System::Guid* NewGuid()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_NEWGUID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int16 arg, ::System::Int16 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int16, ::System::Int16, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int16 arg, ::System::Int16 arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int16, ::System::Int16, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Guid* Parse(::System::String* str)
		{
			return (return (::System::Guid*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_PARSE_OFFSET))(str, nullptr);
		}

		::System::Guid* Parse(Il2CppObject* arg)
		{
			return (return (::System::Guid*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Guid&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Guid&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParse(Il2CppObject* arg, ::System::Guid&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Guid&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParseExact(::System::String* str, ::System::String* str, ::System::Guid&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Guid&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEEXACT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean TryParseExact(Il2CppObject* arg, Il2CppObject* arg, ::System::Guid&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Guid&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEEXACT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParseGuid(Il2CppObject* arg, GuidStyles* arg, GuidResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, GuidStyles*, GuidResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParseGuidWithHexPrefix(Il2CppObject* arg, GuidResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, GuidResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUIDWITHHEXPREFIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParseGuidWithNoStyle(Il2CppObject* arg, GuidResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, GuidResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUIDWITHNOSTYLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParseGuidWithDashes(Il2CppObject* arg, GuidResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, GuidResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYPARSEGUIDWITHDASHES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean StringToShort(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, int16_t&* arg, GuidResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::System::Int32, int16_t&*, GuidResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOSHORT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StringToShort(Il2CppObject* arg, int32_t&* arg, ::System::Int32 arg, ::System::Int32 arg, int16_t&* arg, GuidResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::System::Int32, ::System::Int32, int16_t&*, GuidResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOSHORT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StringToInt(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, GuidResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::System::Int32, int32_t&*, GuidResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOINT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StringToInt(Il2CppObject* arg, int32_t&* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg, GuidResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::System::Int32, ::System::Int32, int32_t&*, GuidResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOINT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StringToLong(Il2CppObject* arg, int32_t&* arg, ::System::Int32 arg, int64_t&* arg, GuidResult&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::System::Int32, int64_t&*, GuidResult&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_STRINGTOLONG_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* EatAllWhitespace(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_EATALLWHITESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsHexPrefix(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_ISHEXPREFIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteByteHelper(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_WRITEBYTEHELPER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToByteArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOBYTEARRAY_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Guid* arg)
		{
			return (return (::System::Boolean(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetResult(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_GETRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Guid* arg)
		{
			return (return (::System::Int32(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Guid* arg, ::System::Guid* arg)
		{
			return (return (::System::Boolean(*)(::System::Guid*, ::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Guid* arg, ::System::Guid* arg)
		{
			return (return (::System::Boolean(*)(::System::Guid*, ::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::Char HexToChar(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_HEXTOCHAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 HexsToChars(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_HEXSTOCHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 HexsToCharsHexOutput(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_HEXSTOCHARSHEXOUTPUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_TRYFORMAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean System.ISpanFormattable.TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GUID_SYSTEM.ISPANFORMATTABLE.TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

