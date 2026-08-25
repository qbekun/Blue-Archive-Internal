#pragma once
#include "unitysdk.h"

#define INTHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9581D70)
#define INTHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9581E00)
#define INTHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9581E50)
#define INTHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9581F10)
#define INTHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9581FB0)
#define INTHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9581FC0)
#define INTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581CB0)
#define INTHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x9581FD0)

	inline static constexpr unsigned int IntHandler_TypeDefinitionIndex = 35697;

	class IntHandler : public Il2CppObject
	{
	public:
		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INTHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + INTHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + INTHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INTHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INTHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INTHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INTHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

	};

