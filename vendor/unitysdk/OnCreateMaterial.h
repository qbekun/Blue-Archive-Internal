#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class Material; }

#define ONCREATEMATERIAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x2437450)
#define ONCREATEMATERIAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x2437490)
#define ONCREATEMATERIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x24374A0)
#define ONCREATEMATERIAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x24375B0)

	inline static constexpr unsigned int OnCreateMaterial_TypeDefinitionIndex = 247;

	class OnCreateMaterial : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(UIWidget* arg, ::UnityEngine::Material* arg2, ::System::AsyncCallback* arg3, ::System::Object* arg4)
		{
			return ((::System::IAsyncResult*(*)(UIWidget*, ::UnityEngine::Material*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCREATEMATERIAL_BEGININVOKE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::Material* Invoke(UIWidget* arg, ::UnityEngine::Material* arg2)
		{
			return ((::UnityEngine::Material*(*)(UIWidget*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + ONCREATEMATERIAL_INVOKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCREATEMATERIAL_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Material* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::UnityEngine::Material*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCREATEMATERIAL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

