#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SETUPCOROUTINE_INVOKEMOVENEXT_OFFSET UNITYSDK_OFFSET(0xA22F700)
#define UNITYENGINE_SETUPCOROUTINE_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0xA22F840)

namespace UnityEngine
{
	inline static constexpr unsigned int SetupCoroutine_TypeDefinitionIndex = 31149;

	class SetupCoroutine : public Il2CppObject
	{
	public:
		::System::Void InvokeMoveNext(::System::Collections::IEnumerator* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SETUPCOROUTINE_INVOKEMOVENEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* InvokeMember(::System::Object* arg, ::System::String* str, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SETUPCOROUTINE_INVOKEMEMBER_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

