#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_VECTORIMAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3862B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VectorImage_TypeDefinitionIndex = 30243;

	class VectorImage : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* atlas; // 0x18
		::Il2CppArray<::System::Object*>* vertices; // 0x20
		::Il2CppArray<::System::Object*>* indices; // 0x28
		::Il2CppArray<::System::Object*>* settings; // 0x30
		::UnityEngine::Vector2* size; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VECTORIMAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

