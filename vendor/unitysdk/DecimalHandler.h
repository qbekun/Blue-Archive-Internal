#pragma once
#include "unitysdk.h"

#define DECIMALHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9583D20)
#define DECIMALHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9583E00)
#define DECIMALHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581D60)
#define DECIMALHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9583ED0)
#define DECIMALHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x9583F90)
#define DECIMALHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9584030)
#define DECIMALHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x95840B0)
#define DECIMALHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x95840C0)

	inline static constexpr unsigned int DecimalHandler_TypeDefinitionIndex = 35708;

	class DecimalHandler : public Il2CppObject
	{
	public:
		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DECIMALHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + DECIMALHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECIMALHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DECIMALHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DECIMALHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DECIMALHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DECIMALHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DECIMALHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

	};

