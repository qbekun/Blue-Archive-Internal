#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define SCROLL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA1B50)
#define SCROLL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1C20)
#define SCROLL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1C30)
#define SCROLL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1CA0)

	inline static constexpr unsigned int Scroll_TypeDefinitionIndex = 26348;

	class Scroll : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCROLL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLL_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Vector2*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLL_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SCROLL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

