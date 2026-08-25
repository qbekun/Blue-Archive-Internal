#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define HITCHECK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x207C9E0)
#define HITCHECK_INVOKE_OFFSET UNITYSDK_OFFSET(0x207CA50)
#define HITCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x207CA80)
#define HITCHECK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x207CB50)

	inline static constexpr unsigned int HitCheck_TypeDefinitionIndex = 151;

	class HitCheck : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::Vector3*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + HITCHECK_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + HITCHECK_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HITCHECK_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + HITCHECK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

