#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1F6C0)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_GET_ISDESIGNONLY_OFFSET UNITYSDK_OFFSET(0x9B1F6E0)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B1F6F0)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B1F7B0)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B1F810)
#define SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B1F8B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignOnlyAttribute_TypeDefinitionIndex = 29324;

	class DesignOnlyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _IsDesignOnly_k__BackingField; // 0x10
		::System::ComponentModel::DesignOnlyAttribute* Yes; // 0x0
		::System::ComponentModel::DesignOnlyAttribute* No; // 0x8
		::System::ComponentModel::DesignOnlyAttribute* Default; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDesignOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_GET_ISDESIGNONLY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNONLYATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

