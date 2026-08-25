#pragma once
#include "unitysdk.h"

#define UINTHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9582030)
#define UINTHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9582040)
#define UINTHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x9582050)
#define UINTHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x95820C0)
#define UINTHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9582120)
#define UINTHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x95821C0)
#define UINTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581D20)
#define UINTHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x9582280)

	inline static constexpr unsigned int UIntHandler_TypeDefinitionIndex = 35698;

	class UIntHandler : public Il2CppObject
	{
	public:
		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UINTHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UINTHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UINTHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UINTHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UINTHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + UINTHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UINTHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

	};

