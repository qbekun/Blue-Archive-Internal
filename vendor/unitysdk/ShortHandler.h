#pragma once
#include "unitysdk.h"

#define SHORTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581D10)
#define SHORTHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9582EB0)
#define SHORTHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9582F60)
#define SHORTHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x9583000)
#define SHORTHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9583060)
#define SHORTHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9583120)
#define SHORTHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9583130)
#define SHORTHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9583140)

	inline static constexpr unsigned int ShortHandler_TypeDefinitionIndex = 35703;

	class ShortHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHORTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SHORTHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SHORTHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SHORTHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SHORTHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHORTHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHORTHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SHORTHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

	};

