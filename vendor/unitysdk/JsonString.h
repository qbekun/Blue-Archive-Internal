#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class Substring; }

#define JSONSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E80D90)
#define JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E80E70)
#define JSONSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E81000)
#define JSONSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E81090)
#define JSONSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E81100)
#define JSONSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E81130)
#define JSONSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E81160)

	inline static constexpr unsigned int JsonString_TypeDefinitionIndex = 28924;

	class JsonString : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::Substring* text; // 0x10
		::System::Boolean hasEscapes; // 0x20

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONSTRING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(JsonString* arg)
		{
			return (return (::System::Boolean(*)(JsonString*, ::PVOID))((::PBYTE)hIl2Cpp + JSONSTRING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + JSONSTRING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JSONSTRING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(JsonString* arg, JsonString* arg)
		{
			return (return (::System::Boolean(*)(JsonString*, JsonString*, ::PVOID))((::PBYTE)hIl2Cpp + JSONSTRING_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(JsonString* arg, JsonString* arg)
		{
			return (return (::System::Boolean(*)(JsonString*, JsonString*, ::PVOID))((::PBYTE)hIl2Cpp + JSONSTRING_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		JsonString* op_Implicit(::System::String* str)
		{
			return (return (JsonString*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + JSONSTRING_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

	};

