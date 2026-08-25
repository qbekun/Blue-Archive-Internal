#pragma once
#include "unitysdk.h"

#define DOUBLEHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9583A20)
#define DOUBLEHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9583AD0)
#define DOUBLEHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9583B80)
#define DOUBLEHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x9583B90)
#define DOUBLEHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9583C00)
#define DOUBLEHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9583CC0)
#define DOUBLEHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9583CD0)
#define DOUBLEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581CE0)

	inline static constexpr unsigned int DoubleHandler_TypeDefinitionIndex = 35707;

	class DoubleHandler : public Il2CppObject
	{
	public:
		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DOUBLEHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DOUBLEHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DOUBLEHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOUBLEHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};

