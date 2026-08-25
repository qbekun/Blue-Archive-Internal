#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B43020)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_GET_RECOMMENDEDASCONFIGURABLE_OFFSET UNITYSDK_OFFSET(0x9B43040)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B43050)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B430E0)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B430F0)
#define SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B43100)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RecommendedAsConfigurableAttribute_TypeDefinitionIndex = 29448;

	class RecommendedAsConfigurableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _RecommendedAsConfigurable_k__BackingField; // 0x10
		::System::ComponentModel::RecommendedAsConfigurableAttribute* No; // 0x0
		::System::ComponentModel::RecommendedAsConfigurableAttribute* Yes; // 0x8
		::System::ComponentModel::RecommendedAsConfigurableAttribute* Default; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RecommendedAsConfigurable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_GET_RECOMMENDEDASCONFIGURABLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RECOMMENDEDASCONFIGURABLEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

