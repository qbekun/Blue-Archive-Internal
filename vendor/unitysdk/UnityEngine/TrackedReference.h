#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TrackedReference; }

#define UNITYENGINE_TRACKEDREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA233960)
#define UNITYENGINE_TRACKEDREFERENCE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA233970)
#define UNITYENGINE_TRACKEDREFERENCE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA233A00)
#define UNITYENGINE_TRACKEDREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA233A90)
#define UNITYENGINE_TRACKEDREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA233B80)
#define UNITYENGINE_TRACKEDREFERENCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA233B90)

namespace UnityEngine
{
	inline static constexpr unsigned int TrackedReference_TypeDefinitionIndex = 31172;

	class TrackedReference : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::TrackedReference* arg, ::UnityEngine::TrackedReference* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TrackedReference*, ::UnityEngine::TrackedReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::TrackedReference* arg, ::UnityEngine::TrackedReference* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TrackedReference*, ::UnityEngine::TrackedReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Implicit(::UnityEngine::TrackedReference* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TrackedReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

