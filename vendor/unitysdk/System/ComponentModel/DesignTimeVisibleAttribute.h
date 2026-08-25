#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2F360)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2F380)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x9B2F390)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2F3A0)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2F410)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B2F4A0)
#define SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B2F540)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignTimeVisibleAttribute_TypeDefinitionIndex = 29384;

	class DesignTimeVisibleAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _Visible_k__BackingField; // 0x10
		::System::ComponentModel::DesignTimeVisibleAttribute* Yes; // 0x0
		::System::ComponentModel::DesignTimeVisibleAttribute* No; // 0x8
		::System::ComponentModel::DesignTimeVisibleAttribute* Default; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Visible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_GET_VISIBLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNTIMEVISIBLEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

