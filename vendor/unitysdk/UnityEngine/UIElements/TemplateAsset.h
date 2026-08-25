#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_TEMPLATEASSET_GET_ATTRIBUTEOVERRIDES_OFFSET UNITYSDK_OFFSET(0xA423020)
#define UNITYENGINE_UIELEMENTS_TEMPLATEASSET_GET_SLOTUSAGES_OFFSET UNITYSDK_OFFSET(0xA4230A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TemplateAsset_TypeDefinitionIndex = 30678;

	class TemplateAsset : public Il2CppObject
	{
	public:
		::System::String* m_TemplateAlias; // 0x68
		Il2CppObject* m_AttributeOverrides; // 0x70
		Il2CppObject* m_SlotUsages; // 0x78

		Il2CppObject* get_attributeOverrides()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATEASSET_GET_ATTRIBUTEOVERRIDES_OFFSET))(nullptr);
		}

		Il2CppObject* get_slotUsages()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATEASSET_GET_SLOTUSAGES_OFFSET))(nullptr);
		}

	};
}

