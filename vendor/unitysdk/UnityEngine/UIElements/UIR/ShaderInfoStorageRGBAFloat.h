#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGERGBAFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA43FAB0)
#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGERGBAFLOAT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA43FB40)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int ShaderInfoStorageRGBAFloat_TypeDefinitionIndex = 30743;

	class ShaderInfoStorageRGBAFloat : public ::System::Xml::Serialization::XmlTypeMapMemberFlatList
	{
	public:
		Il2CppObject* s_Convert; // 0x0

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGERGBAFLOAT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGERGBAFLOAT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

