#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET UNITYSDK_OFFSET(0x949BB80)
#define NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET UNITYSDK_OFFSET(0x949BC00)
#define NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET UNITYSDK_OFFSET(0x949BE30)
#define NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET UNITYSDK_OFFSET(0x949C010)
#define NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET UNITYSDK_OFFSET(0x949C0F0)
#define NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x949C2C0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int BoxedPrimitives_TypeDefinitionIndex = 31811;

	class BoxedPrimitives : public Il2CppObject
	{
	public:
		::System::Object* BooleanTrue; // 0x0
		::System::Object* BooleanFalse; // 0x8
		::System::Object* Int32_M1; // 0x10
		::System::Object* Int32_0; // 0x18
		::System::Object* Int32_1; // 0x20
		::System::Object* Int32_2; // 0x28
		::System::Object* Int32_3; // 0x30
		::System::Object* Int32_4; // 0x38
		::System::Object* Int32_5; // 0x40
		::System::Object* Int32_6; // 0x48
		::System::Object* Int32_7; // 0x50
		::System::Object* Int32_8; // 0x58
		::System::Object* Int64_M1; // 0x60
		::System::Object* Int64_0; // 0x68
		::System::Object* Int64_1; // 0x70
		::System::Object* Int64_2; // 0x78
		::System::Object* Int64_3; // 0x80
		::System::Object* Int64_4; // 0x88
		::System::Object* Int64_5; // 0x90
		::System::Object* Int64_6; // 0x98
		::System::Object* Int64_7; // 0xA0
		::System::Object* Int64_8; // 0xA8
		::System::Object* DecimalZero; // 0xB0
		::System::Object* DoubleNaN; // 0xB8
		::System::Object* DoublePositiveInfinity; // 0xC0
		::System::Object* DoubleNegativeInfinity; // 0xC8
		::System::Object* DoubleZero; // 0xD0

		::System::Object* Get(::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET))(arg, nullptr);
		}

		::System::Object* Get(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET))(arg, nullptr);
		}

		::System::Object* Get(::System::Int64 arg)
		{
			return (return (::System::Object*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET))(arg, nullptr);
		}

		::System::Object* Get(::System::Decimal* arg)
		{
			return (return (::System::Object*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET))(arg, nullptr);
		}

		::System::Object* Get(::System::Double arg)
		{
			return (return (::System::Object*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_BOXEDPRIMITIVES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

