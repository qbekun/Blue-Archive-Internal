#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_COROUTINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22F5C0)
#define UNITYENGINE_COROUTINE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA22F5D0)
#define UNITYENGINE_COROUTINE_RELEASECOROUTINE_OFFSET UNITYSDK_OFFSET(0xA22F6C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Coroutine_TypeDefinitionIndex = 31148;

	class Coroutine : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COROUTINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COROUTINE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void ReleaseCoroutine(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COROUTINE_RELEASECOROUTINE_OFFSET))(arg, nullptr);
		}

	};
}

