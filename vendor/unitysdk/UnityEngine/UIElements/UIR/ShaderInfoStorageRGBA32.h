#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGERGBA32_.CTOR_OFFSET UNITYSDK_OFFSET(0xA43F460)
#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGERGBA32_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA43F4F0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int ShaderInfoStorageRGBA32_TypeDefinitionIndex = 30741;

	class ShaderInfoStorageRGBA32 : public ::System::Xml::Serialization::XmlTypeMapMemberAnyElement
	{
	public:
		Il2CppObject* s_Convert; // 0x0

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGERGBA32_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGERGBA32_.CCTOR_OFFSET))(nullptr);
		}

	};
}

