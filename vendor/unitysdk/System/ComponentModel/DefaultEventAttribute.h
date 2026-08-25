#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2D3D0)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B2D400)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2D410)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2D470)
#define SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B2D480)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DefaultEventAttribute_TypeDefinitionIndex = 29376;

	class DefaultEventAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::ComponentModel::DefaultEventAttribute* Default; // 0x0

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DEFAULTEVENTATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

