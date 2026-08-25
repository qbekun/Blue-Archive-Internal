#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define GETTOVECTORDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10E9C00)
#define GETTOVECTORDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E9CC0)
#define GETTOVECTORDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10E9CD0)
#define GETTOVECTORDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10E9D00)

	inline static constexpr unsigned int GetToVectorDelegate_TypeDefinitionIndex = 12997;

	class GetToVectorDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETTOVECTORDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* Invoke()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + GETTOVECTORDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETTOVECTORDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETTOVECTORDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

