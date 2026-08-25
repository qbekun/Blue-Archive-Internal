#pragma once
#include "unitysdk.h"

#define LONGHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581CD0)
#define LONGHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9582310)
#define LONGHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x95823D0)
#define LONGHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9582430)
#define LONGHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x95824C0)
#define LONGHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x95824D0)
#define LONGHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9582530)
#define LONGHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x95825E0)

	inline static constexpr unsigned int LongHandler_TypeDefinitionIndex = 35699;

	class LongHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONGHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + LONGHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LONGHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LONGHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LONGHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LONGHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LONGHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LONGHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

	};

