#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B353E0)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B35400)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_GET_LISTBINDABLE_OFFSET UNITYSDK_OFFSET(0x9B35430)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B35440)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B354B0)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B354C0)
#define SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B35530)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListBindableAttribute_TypeDefinitionIndex = 29425;

	class ListBindableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::ListBindableAttribute* Yes; // 0x0
		::System::ComponentModel::ListBindableAttribute* No; // 0x8
		::System::ComponentModel::ListBindableAttribute* Default; // 0x10
		::System::Boolean _isDefault; // 0x10
		::System::Boolean _ListBindable_k__BackingField; // 0x11

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::BindableSupport* arg)
		{
			((::System::Void(*)(::System::ComponentModel::BindableSupport*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ListBindable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_GET_LISTBINDABLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTBINDABLEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

