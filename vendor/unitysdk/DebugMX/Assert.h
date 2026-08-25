#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }

#define DEBUGMX_ASSERT_ISTRUE_OFFSET UNITYSDK_OFFSET(0xDE02D0)
#define DEBUGMX_ASSERT_ISTRUE_OFFSET UNITYSDK_OFFSET(0xDE02E0)
#define DEBUGMX_ASSERT_AREEQUAL_OFFSET UNITYSDK_OFFSET(0xDE02F0)
#define DEBUGMX_ASSERT_ARENOTEQUAL_OFFSET UNITYSDK_OFFSET(0xDE0300)
#define DEBUGMX_ASSERT_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0xDE0310)
#define DEBUGMX_ASSERT_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0xDE0320)
#define DEBUGMX_ASSERT_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0xDE0330)
#define DEBUGMX_ASSERT_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0xDE0340)
#define DEBUGMX_ASSERT_FALSE_OFFSET UNITYSDK_OFFSET(0xDE0350)

namespace DebugMX
{
	inline static constexpr unsigned int Assert_TypeDefinitionIndex = 10129;

	class Assert : public Il2CppObject
	{
	public:
		::System::Void IsTrue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_ASSERT_ISTRUE_OFFSET))(arg, nullptr);
		}

		::System::Void IsTrue(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_ASSERT_ISTRUE_OFFSET))(arg, str, nullptr);
		}

		::System::Void AreEqual(::System::Object* arg, ::System::Object* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_ASSERT_AREEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AreNotEqual(::System::Object* arg, ::System::Object* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_ASSERT_ARENOTEQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IsNotNull(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_ASSERT_ISNOTNULL_OFFSET))(arg, nullptr);
		}

		::System::Void IsNotNull(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_ASSERT_ISNOTNULL_OFFSET))(arg, str, nullptr);
		}

		::System::Void IsNotNull(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_ASSERT_ISNOTNULL_OFFSET))(arg, nullptr);
		}

		::System::Void IsNotNull(::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_ASSERT_ISNOTNULL_OFFSET))(arg, str, nullptr);
		}

		::System::Void False(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGMX_ASSERT_FALSE_OFFSET))(str, nullptr);
		}

	};
}

