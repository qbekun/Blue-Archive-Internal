#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Hash128; }
namespace UnityEngine { class Hash128&; }

#define UNITYENGINE_HASH128_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21CA40)
#define UNITYENGINE_HASH128_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21CA60)
#define UNITYENGINE_HASH128_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA21CA70)
#define UNITYENGINE_HASH128_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA21CA90)
#define UNITYENGINE_HASH128_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA21CB60)
#define UNITYENGINE_HASH128_PARSE_OFFSET UNITYSDK_OFFSET(0xA21CBE0)
#define UNITYENGINE_HASH128_HASH128TOSTRINGIMPL_OFFSET UNITYSDK_OFFSET(0xA21CBA0)
#define UNITYENGINE_HASH128_COMPUTEFROMSTRING_OFFSET UNITYSDK_OFFSET(0xA21CCB0)
#define UNITYENGINE_HASH128_COMPUTE_OFFSET UNITYSDK_OFFSET(0xA21CCF0)
#define UNITYENGINE_HASH128_EQUALS_OFFSET UNITYSDK_OFFSET(0xA21CD40)
#define UNITYENGINE_HASH128_EQUALS_OFFSET UNITYSDK_OFFSET(0xA21CDE0)
#define UNITYENGINE_HASH128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA21CE00)
#define UNITYENGINE_HASH128_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA21CE30)
#define UNITYENGINE_HASH128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA21CDC0)
#define UNITYENGINE_HASH128_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0xA21CB00)
#define UNITYENGINE_HASH128_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0xA21CB20)
#define UNITYENGINE_HASH128_PARSE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA21CC30)
#define UNITYENGINE_HASH128_HASH128TOSTRINGIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA21CC70)

namespace UnityEngine
{
	inline static constexpr unsigned int Hash128_TypeDefinitionIndex = 31077;

	class Hash128 : public Il2CppObject
	{
	public:
		::System::UInt64 u64_0; // 0x10
		::System::UInt64 u64_1; // 0x18
		::System::UInt64 kConst; // 0x0

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt64 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_isValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::UnityEngine::Hash128* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_TOSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::Hash128* Parse(::System::String* str)
		{
			return (return (::UnityEngine::Hash128*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_PARSE_OFFSET))(str, nullptr);
		}

		::System::String* Hash128ToStringImpl(::UnityEngine::Hash128* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_HASH128TOSTRINGIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void ComputeFromString(::System::String* str, ::UnityEngine::Hash128&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Hash128&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPUTEFROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Hash128* Compute(::System::String* str)
		{
			return (return (::UnityEngine::Hash128*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPUTE_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Hash128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Hash128* arg, ::UnityEngine::Hash128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Hash128*, ::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThan(::UnityEngine::Hash128* arg, ::UnityEngine::Hash128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Hash128*, ::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThan(::UnityEngine::Hash128* arg, ::UnityEngine::Hash128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Hash128*, ::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Parse_Injected(::System::String* str, ::UnityEngine::Hash128&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Hash128&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_PARSE_INJECTED_OFFSET))(str, arg, nullptr);
		}

		::System::String* Hash128ToStringImpl_Injected(::UnityEngine::Hash128&* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Hash128&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASH128_HASH128TOSTRINGIMPL_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

