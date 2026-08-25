#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7BC70)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GET_NOTIFYPARENT_OFFSET UNITYSDK_OFFSET(0x9B7BC90)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B7BCA0)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B7BD00)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B7BD10)
#define SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B7BD80)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NotifyParentPropertyAttribute_TypeDefinitionIndex = 29529;

	class NotifyParentPropertyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::NotifyParentPropertyAttribute* Yes; // 0x0
		::System::ComponentModel::NotifyParentPropertyAttribute* No; // 0x8
		::System::ComponentModel::NotifyParentPropertyAttribute* Default; // 0x10
		::System::Boolean notifyParent; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NotifyParent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GET_NOTIFYPARENT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NOTIFYPARENTPROPERTYATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

