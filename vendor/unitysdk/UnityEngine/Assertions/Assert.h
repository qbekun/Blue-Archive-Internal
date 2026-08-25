#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET UNITYSDK_OFFSET(0xA271960)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_OFFSET UNITYSDK_OFFSET(0xA271B40)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_OFFSET UNITYSDK_OFFSET(0xA271BE0)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_OFFSET UNITYSDK_OFFSET(0xA271CE0)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET UNITYSDK_OFFSET(0xA271D50)
#define UNITYENGINE_ASSERTIONS_ASSERT_ARENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_ARENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_ARENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_ARENOTEQUAL_OFFSET UNITYSDK_OFFSET(0xA272060)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISNULL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISNULL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISNULL_OFFSET UNITYSDK_OFFSET(0xA272100)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0xA272350)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET UNITYSDK_OFFSET(0xA2723F0)
#define UNITYENGINE_ASSERTIONS_ASSERT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA272460)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int Assert_TypeDefinitionIndex = 31656;

	class Assert : public Il2CppObject
	{
	public:
		::System::Boolean raiseExceptions; // 0x0

		::System::Void Fail(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET))(str, str, nullptr);
		}

		::System::Void IsTrue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_OFFSET))(arg, nullptr);
		}

		::System::Void IsTrue(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_OFFSET))(arg, str, nullptr);
		}

		::System::Void IsFalse(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_OFFSET))(arg, str, nullptr);
		}

		::System::Void AreEqual(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AreEqual(Il2CppObject* arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AreEqual(Il2CppObject* arg, Il2CppObject* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void AreEqual(::UnityEngine::Object* arg, ::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AreNotEqual(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ARENOTEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AreNotEqual(Il2CppObject* arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ARENOTEQUAL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void AreNotEqual(Il2CppObject* arg, Il2CppObject* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ARENOTEQUAL_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void AreNotEqual(::UnityEngine::Object* arg, ::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ARENOTEQUAL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void IsNull(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Void IsNull(Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISNULL_OFFSET))(arg, str, nullptr);
		}

		::System::Void IsNull(::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISNULL_OFFSET))(arg, str, nullptr);
		}

		::System::Void IsNotNull(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_OFFSET))(arg, nullptr);
		}

		::System::Void IsNotNull(Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_OFFSET))(arg, str, nullptr);
		}

		::System::Void IsNotNull(::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_OFFSET))(arg, str, nullptr);
		}

		::System::Void AreEqual(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

