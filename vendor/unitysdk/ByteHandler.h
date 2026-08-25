#pragma once
#include "unitysdk.h"

#define BYTEHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9582910)
#define BYTEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581CF0)
#define BYTEHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x95829C0)
#define BYTEHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x95829D0)
#define BYTEHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9582A70)
#define BYTEHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9582AC0)
#define BYTEHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x9582AD0)
#define BYTEHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9582B30)

	inline static constexpr unsigned int ByteHandler_TypeDefinitionIndex = 35701;

	class ByteHandler : public Il2CppObject
	{
	public:
		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + BYTEHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BYTEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BYTEHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BYTEHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BYTEHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BYTEHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BYTEHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BYTEHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

	};

