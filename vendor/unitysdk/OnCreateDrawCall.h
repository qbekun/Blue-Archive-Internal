#pragma once
#include "unitysdk.h"

class UIDrawCall;
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define ONCREATEDRAWCALL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2070750)
#define ONCREATEDRAWCALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x2070760)
#define ONCREATEDRAWCALL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x2070780)
#define ONCREATEDRAWCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x20707C0)

	inline static constexpr unsigned int OnCreateDrawCall_TypeDefinitionIndex = 131;

	class OnCreateDrawCall : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCREATEDRAWCALL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(UIDrawCall* arg, ::UnityEngine::MeshFilter* arg2, ::UnityEngine::MeshRenderer* arg3)
		{
			((::System::Void(*)(UIDrawCall*, ::UnityEngine::MeshFilter*, ::UnityEngine::MeshRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + ONCREATEDRAWCALL_INVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(UIDrawCall* arg, ::UnityEngine::MeshFilter* arg2, ::UnityEngine::MeshRenderer* arg3, ::System::AsyncCallback* arg4, ::System::Object* arg5)
		{
			return ((::System::IAsyncResult*(*)(UIDrawCall*, ::UnityEngine::MeshFilter*, ::UnityEngine::MeshRenderer*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCREATEDRAWCALL_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCREATEDRAWCALL_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

