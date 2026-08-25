#pragma once
#include "../unitysdk.h"

#define SYSTEM_VERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9383B20)
#define SYSTEM_VERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9383C80)
#define SYSTEM_VERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9383DA0)
#define SYSTEM_VERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9383E70)
#define SYSTEM_VERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9383F70)
#define SYSTEM_VERSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9383FA0)
#define SYSTEM_VERSION_CLONE_OFFSET UNITYSDK_OFFSET(0x9383FF0)
#define SYSTEM_VERSION_GET_MAJOR_OFFSET UNITYSDK_OFFSET(0x9384070)
#define SYSTEM_VERSION_GET_MINOR_OFFSET UNITYSDK_OFFSET(0x9384080)
#define SYSTEM_VERSION_GET_BUILD_OFFSET UNITYSDK_OFFSET(0x9384090)
#define SYSTEM_VERSION_GET_REVISION_OFFSET UNITYSDK_OFFSET(0x93840A0)
#define SYSTEM_VERSION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x93840B0)
#define SYSTEM_VERSION_COMPARETO_OFFSET UNITYSDK_OFFSET(0x93841C0)
#define SYSTEM_VERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9384210)
#define SYSTEM_VERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9384290)
#define SYSTEM_VERSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93842D0)
#define SYSTEM_VERSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9384300)
#define SYSTEM_VERSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93843C0)
#define SYSTEM_VERSION_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9384640)
#define SYSTEM_VERSION_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9384680)
#define SYSTEM_VERSION_SYSTEM.ISPANFORMATTABLE.TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9384790)
#define SYSTEM_VERSION_GET_DEFAULTFORMATFIELDCOUNT_OFFSET UNITYSDK_OFFSET(0x93843A0)
#define SYSTEM_VERSION_TOCACHEDSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x9384440)
#define SYSTEM_VERSION_PARSE_OFFSET UNITYSDK_OFFSET(0x9383EC0)
#define SYSTEM_VERSION_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9384E00)
#define SYSTEM_VERSION_PARSEVERSION_OFFSET UNITYSDK_OFFSET(0x93847D0)
#define SYSTEM_VERSION_TRYPARSECOMPONENT_OFFSET UNITYSDK_OFFSET(0x9384EE0)
#define SYSTEM_VERSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9384180)
#define SYSTEM_VERSION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9384E90)
#define SYSTEM_VERSION_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x9385030)
#define SYSTEM_VERSION_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x93850E0)
#define SYSTEM_VERSION_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x9385180)

namespace System
{
	inline static constexpr unsigned int Version_TypeDefinitionIndex = 23877;

	class Version : public Il2CppObject
	{
	public:
		::System::Int32 _Major; // 0x10
		::System::Int32 _Minor; // 0x14
		::System::Int32 _Build; // 0x18
		::System::Int32 _Revision; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Version* arg)
		{
			((::System::Void(*)(::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_Major()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_MAJOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Minor()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_MINOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Build()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_BUILD_OFFSET))(nullptr);
		}

		::System::Int32 get_Revision()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_REVISION_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Version* arg)
		{
			return (return (::System::Int32(*)(::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Version* arg)
		{
			return (return (::System::Boolean(*)(::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYFORMAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean System.ISpanFormattable.TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_SYSTEM.ISPANFORMATTABLE.TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_DefaultFormatFieldCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_GET_DEFAULTFORMATFIELDCOUNT_OFFSET))(nullptr);
		}

		::System::Text::StringBuilder* ToCachedStringBuilder(::System::Int32 arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TOCACHEDSTRINGBUILDER_OFFSET))(arg, nullptr);
		}

		::System::Version* Parse(::System::String* str)
		{
			return (return (::System::Version*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_PARSE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Version&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Version&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Version* ParseVersion(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Version*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_PARSEVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParseComponent(Il2CppObject* arg, ::System::String* str, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::String*, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_TRYPARSECOMPONENT_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Version* arg, ::System::Version* arg)
		{
			return (return (::System::Boolean(*)(::System::Version*, ::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Version* arg, ::System::Version* arg)
		{
			return (return (::System::Boolean(*)(::System::Version*, ::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThan(::System::Version* arg, ::System::Version* arg)
		{
			return (return (::System::Boolean(*)(::System::Version*, ::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::System::Version* arg, ::System::Version* arg)
		{
			return (return (::System::Boolean(*)(::System::Version*, ::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_LESSTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::System::Version* arg, ::System::Version* arg)
		{
			return (return (::System::Boolean(*)(::System::Version*, ::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VERSION_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

