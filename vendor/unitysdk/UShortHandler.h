#pragma once
#include "unitysdk.h"

#define USHORTHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9583190)
#define USHORTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581D50)
#define USHORTHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9583240)
#define USHORTHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9583300)
#define USHORTHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9583310)
#define USHORTHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x9583360)
#define USHORTHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x95833C0)
#define USHORTHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9583460)

	inline static constexpr unsigned int UShortHandler_TypeDefinitionIndex = 35704;

	class UShortHandler : public Il2CppObject
	{
	public:
		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + USHORTHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USHORTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + USHORTHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + USHORTHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + USHORTHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + USHORTHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + USHORTHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + USHORTHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

	};

