#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_SET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CustomStyleProperty`1_TypeDefinitionIndex = 30597;

	class CustomStyleProperty`1 : public Il2CppObject
	{
	public:
		::System::String* _name_k__BackingField; // 0x0

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CUSTOMSTYLEPROPERTY`1_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

