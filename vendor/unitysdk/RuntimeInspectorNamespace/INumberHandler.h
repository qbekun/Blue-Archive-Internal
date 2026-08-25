#pragma once
#include "../unitysdk.h"

#define RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_CONVERTFROMFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_VALUESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int INumberHandler_TypeDefinitionIndex = 35696;

	class INumberHandler : public Il2CppObject
	{
	public:
		::System::Single ConvertToFloat(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_CONVERTTOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Single get_MinValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Single get_MaxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Object* ConvertFromFloat(::System::Single arg)
		{
			return (return (::System::Object*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_CONVERTFROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValuesAreEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_INUMBERHANDLER_VALUESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

