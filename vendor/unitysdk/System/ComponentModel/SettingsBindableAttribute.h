#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B479A0)
#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_GET_BINDABLE_OFFSET UNITYSDK_OFFSET(0x9B479C0)
#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B479D0)
#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B47A30)
#define SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B47A90)

namespace System::ComponentModel
{
	inline static constexpr unsigned int SettingsBindableAttribute_TypeDefinitionIndex = 29456;

	class SettingsBindableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::SettingsBindableAttribute* Yes; // 0x0
		::System::ComponentModel::SettingsBindableAttribute* No; // 0x8
		::System::Boolean _Bindable_k__BackingField; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Bindable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_GET_BINDABLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SETTINGSBINDABLEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

