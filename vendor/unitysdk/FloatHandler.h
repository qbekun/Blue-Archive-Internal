#pragma once
#include "unitysdk.h"

#define FLOATHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9583730)
#define FLOATHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95837E0)
#define FLOATHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9583890)
#define FLOATHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9583950)
#define FLOATHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9583960)
#define FLOATHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x95839B0)
#define FLOATHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9583A10)
#define FLOATHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581CC0)

	inline static constexpr unsigned int FloatHandler_TypeDefinitionIndex = 35706;

	class FloatHandler : public Il2CppObject
	{
	public:
		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FLOATHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FLOATHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + FLOATHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLOATHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FLOATHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOATHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};

