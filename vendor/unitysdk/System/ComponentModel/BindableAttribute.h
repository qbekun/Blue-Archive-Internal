#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B240E0)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B24110)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B24140)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B24170)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GET_BINDABLE_OFFSET UNITYSDK_OFFSET(0x9B241A0)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x9B241B0)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B241C0)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B24220)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B24280)
#define SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B242F0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BindableAttribute_TypeDefinitionIndex = 29351;

	class BindableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::BindableAttribute* Yes; // 0x0
		::System::ComponentModel::BindableAttribute* No; // 0x8
		::System::ComponentModel::BindableAttribute* Default; // 0x10
		::System::Boolean _isDefault; // 0x10
		::System::Boolean _Bindable_k__BackingField; // 0x11
		::System::ComponentModel::BindingDirection* _Direction_k__BackingField; // 0x14

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::ComponentModel::BindingDirection* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::ComponentModel::BindingDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::BindableSupport* arg)
		{
			((::System::Void(*)(::System::ComponentModel::BindableSupport*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::BindableSupport* arg, ::System::ComponentModel::BindingDirection* arg)
		{
			((::System::Void(*)(::System::ComponentModel::BindableSupport*, ::System::ComponentModel::BindingDirection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_Bindable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GET_BINDABLE_OFFSET))(nullptr);
		}

		::System::ComponentModel::BindingDirection* get_Direction()
		{
			return (return (::System::ComponentModel::BindingDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BINDABLEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

