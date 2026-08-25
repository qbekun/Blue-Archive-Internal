#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define FOREGROUNDCOLORGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x25F2160)
#define FOREGROUNDCOLORGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x25F21A0)
#define FOREGROUNDCOLORGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x25F21C0)
#define FOREGROUNDCOLORGETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F21F0)

	inline static constexpr unsigned int ForeGroundColorGetter_TypeDefinitionIndex = 6426;

	class ForeGroundColorGetter : public Il2CppObject
	{
	public:
		::UnityEngine::Color* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::UnityEngine::Color*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + FOREGROUNDCOLORGETTER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* Invoke()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOREGROUNDCOLORGETTER_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FOREGROUNDCOLORGETTER_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FOREGROUNDCOLORGETTER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

