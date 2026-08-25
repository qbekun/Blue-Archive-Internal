#pragma once
#include "unitysdk.h"

#define SBYTEHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9582BE0)
#define SBYTEHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9582C90)
#define SBYTEHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x9582CA0)
#define SBYTEHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9582D00)
#define SBYTEHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9582DA0)
#define SBYTEHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9582DB0)
#define SBYTEHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9582E00)
#define SBYTEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581D40)

	inline static constexpr unsigned int SByteHandler_TypeDefinitionIndex = 35702;

	class SByteHandler : public Il2CppObject
	{
	public:
		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SBYTEHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SBYTEHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SBYTEHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SBYTEHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SBYTEHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SBYTEHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SBYTEHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SBYTEHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};

