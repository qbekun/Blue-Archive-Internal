#pragma once
#include "../unitysdk.h"

#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278BE0)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_ALLOWMULTIPLE_OFFSET UNITYSDK_OFFSET(0x9278C10)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_ALLOWMULTIPLE_OFFSET UNITYSDK_OFFSET(0x9278C20)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_INHERITED_OFFSET UNITYSDK_OFFSET(0x9278C30)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_INHERITED_OFFSET UNITYSDK_OFFSET(0x9278C40)
#define SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9278C50)

namespace System
{
	inline static constexpr unsigned int AttributeUsageAttribute_TypeDefinitionIndex = 23713;

	class AttributeUsageAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::AttributeTargets* _attributeTarget; // 0x10
		::System::Boolean _allowMultiple; // 0x14
		::System::Boolean _inherited; // 0x15
		::System::AttributeUsageAttribute* Default; // 0x0

		::System::Void .ctor(::System::AttributeTargets* arg)
		{
			((::System::Void(*)(::System::AttributeTargets*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowMultiple()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_ALLOWMULTIPLE_OFFSET))(nullptr);
		}

		::System::Void set_AllowMultiple(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_ALLOWMULTIPLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Inherited()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_GET_INHERITED_OFFSET))(nullptr);
		}

		::System::Void set_Inherited(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_SET_INHERITED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ATTRIBUTEUSAGEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

