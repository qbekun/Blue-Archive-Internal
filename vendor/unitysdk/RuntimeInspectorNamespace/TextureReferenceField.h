#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine { class Object; }

#define RUNTIMEINSPECTORNAMESPACE_TEXTUREREFERENCEFIELD_ONREFERENCECHANGED_OFFSET UNITYSDK_OFFSET(0x9579250)
#define RUNTIMEINSPECTORNAMESPACE_TEXTUREREFERENCEFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x9579350)
#define RUNTIMEINSPECTORNAMESPACE_TEXTUREREFERENCEFIELD_GET_HEIGHTMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x9579430)
#define RUNTIMEINSPECTORNAMESPACE_TEXTUREREFERENCEFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9579440)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int TextureReferenceField_TypeDefinitionIndex = 35674;

	class TextureReferenceField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::RawImage* referencePreview; // 0xA8

		::System::Void OnReferenceChanged(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TEXTUREREFERENCEFIELD_ONREFERENCECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TEXTUREREFERENCEFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Single get_HeightMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TEXTUREREFERENCEFIELD_GET_HEIGHTMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TEXTUREREFERENCEFIELD_.CTOR_OFFSET))(nullptr);
		}

	};
}

