#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define ROTATEFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15A0720)
#define ROTATEFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A0790)
#define ROTATEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x15A0860)
#define ROTATEFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15A0890)

	inline static constexpr unsigned int RotateFunction_TypeDefinitionIndex = 1076;

	class RotateFunction : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::Vector3*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ROTATEFUNCTION_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ROTATEFUNCTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + ROTATEFUNCTION_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ROTATEFUNCTION_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

