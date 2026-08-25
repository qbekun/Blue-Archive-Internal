#pragma once
#include "unitysdk.h"

#define ULONGHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x95825F0)
#define ULONGHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9582600)
#define ULONGHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581D30)
#define ULONGHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9582680)
#define ULONGHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9582730)
#define ULONGHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x95827C0)
#define ULONGHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9582840)
#define ULONGHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9582850)

	inline static constexpr unsigned int ULongHandler_TypeDefinitionIndex = 35700;

	class ULongHandler : public Il2CppObject
	{
	public:
		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ULONGHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ULONGHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ULONGHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ULONGHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ULONGHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ULONGHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ULONGHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + ULONGHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};

