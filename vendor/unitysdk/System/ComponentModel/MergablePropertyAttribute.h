#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B20D40)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_GET_ALLOWMERGE_OFFSET UNITYSDK_OFFSET(0x9B20D60)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B20D70)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B20E30)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B20E40)
#define SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B20EB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MergablePropertyAttribute_TypeDefinitionIndex = 29339;

	class MergablePropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::MergablePropertyAttribute* Yes; // 0x0
		::System::ComponentModel::MergablePropertyAttribute* No; // 0x8
		::System::ComponentModel::MergablePropertyAttribute* Default; // 0x10
		::System::Boolean _AllowMerge_k__BackingField; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowMerge()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_GET_ALLOWMERGE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MERGABLEPROPERTYATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

