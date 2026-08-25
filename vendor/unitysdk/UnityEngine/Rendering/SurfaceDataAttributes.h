#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class FieldPrecision; }

#define UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBEE50)
#define UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBEF60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SurfaceDataAttributes_TypeDefinitionIndex = 34006;

	class SurfaceDataAttributes : public ::UnityEngine::AudioClip
	{
	public:
		::Il2CppArray<::System::Object*>* displayNames; // 0x10
		::System::Boolean isDirection; // 0x18
		::System::Boolean sRGBDisplay; // 0x19
		::UnityEngine::Rendering::FieldPrecision* precision; // 0x1C
		::System::Boolean checkIsNormalized; // 0x20
		::System::String* preprocessor; // 0x28

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Rendering::FieldPrecision* arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::FieldPrecision*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES_.CTOR_OFFSET))(str, arg, arg, arg, arg, str, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Rendering::FieldPrecision* arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::FieldPrecision*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SURFACEDATAATTRIBUTES_.CTOR_OFFSET))(arg, arg, arg, arg, arg, str, nullptr);
		}

	};
}

