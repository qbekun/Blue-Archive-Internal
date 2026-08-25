#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2BE00)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2BE20)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_GET_ISDATAOBJECT_OFFSET UNITYSDK_OFFSET(0x9B2BE40)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2BE50)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2BEC0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B2BF20)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B2BF90)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataObjectAttribute_TypeDefinitionIndex = 29369;

	class DataObjectAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::DataObjectAttribute* DataObject; // 0x0
		::System::ComponentModel::DataObjectAttribute* NonDataObject; // 0x8
		::System::ComponentModel::DataObjectAttribute* Default; // 0x10
		::System::Boolean _IsDataObject_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDataObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_GET_ISDATAOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

