#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_PROPERTYATTRIBUTE_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xA22C960)
#define UNITYENGINE_PROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22C970)

namespace UnityEngine
{
	inline static constexpr unsigned int PropertyAttribute_TypeDefinitionIndex = 31110;

	class PropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 _order_k__BackingField; // 0x10

		::System::Void set_order(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYATTRIBUTE_SET_ORDER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

