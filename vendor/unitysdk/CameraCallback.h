#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }

#define CAMERACALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EA2A0)
#define CAMERACALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1EA370)

	inline static constexpr unsigned int CameraCallback_TypeDefinitionIndex = 30962;

	class CameraCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERACALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

