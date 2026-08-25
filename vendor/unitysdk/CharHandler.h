#pragma once
#include "unitysdk.h"

#define CHARHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x9583470)
#define CHARHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x95834C0)
#define CHARHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581D00)
#define CHARHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x95834D0)
#define CHARHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9583530)
#define CHARHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x95835D0)
#define CHARHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x95835E0)
#define CHARHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9583670)

	inline static constexpr unsigned int CharHandler_TypeDefinitionIndex = 35705;

	class CharHandler : public Il2CppObject
	{
	public:
		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CHARHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CHARHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CHARHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CHARHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

	};

