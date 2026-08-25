#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_STYLEPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA41C0B0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0xA41C0C0)
#define UNITYENGINE_UIELEMENTS_STYLEPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41C0D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleProperty_TypeDefinitionIndex = 30642;

	class StyleProperty : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::System::Int32 m_Line; // 0x18
		::Il2CppArray<::System::Object*>* m_Values; // 0x20
		::System::Boolean isCustomProperty; // 0x28
		::System::Boolean requireVariableResolve; // 0x29

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTY_GET_NAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_values()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTY_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEPROPERTY_.CTOR_OFFSET))(nullptr);
		}

	};
}

