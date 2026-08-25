#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class FieldPacking; }

#define UNITYENGINE_RENDERING_PACKINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBF020)
#define UNITYENGINE_RENDERING_PACKINGATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FBF150)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PackingAttribute_TypeDefinitionIndex = 34008;

	class PackingAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::Il2CppArray<::System::Object*>* displayNames; // 0x10
		::Il2CppArray<::System::Object*>* range; // 0x18
		::UnityEngine::Rendering::FieldPacking* packingScheme; // 0x20
		::System::Int32 offsetInSource; // 0x24
		::System::Int32 sizeInBits; // 0x28
		::System::Boolean isDirection; // 0x2C
		::System::Boolean sRGBDisplay; // 0x2D
		::System::Boolean checkIsNormalized; // 0x2E
		::System::String* preprocessor; // 0x30

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::FieldPacking* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::FieldPacking*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PACKINGATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Rendering::FieldPacking* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::FieldPacking*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_PACKINGATTRIBUTE_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, str, nullptr);
		}

	};
}

