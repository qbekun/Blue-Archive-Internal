#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_STYLERULE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0xA41C0E0)
#define UNITYENGINE_UIELEMENTS_STYLERULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41C0F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleRule_TypeDefinitionIndex = 30643;

	class StyleRule : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Properties; // 0x10
		::System::Int32 line; // 0x18
		::System::Int32 customPropertiesCount; // 0x1C

		::Il2CppArray<::System::Object*>* get_properties()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLERULE_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLERULE_.CTOR_OFFSET))(nullptr);
		}

	};
}

