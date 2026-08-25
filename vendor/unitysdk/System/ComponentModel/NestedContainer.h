#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B3D830)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x9B3D990)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GET_OWNERNAME_OFFSET UNITYSDK_OFFSET(0x9B3D9A0)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_CREATESITE_OFFSET UNITYSDK_OFFSET(0x9B3DC10)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B3DD60)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x9B3DE60)
#define SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_ONOWNERDISPOSED_OFFSET UNITYSDK_OFFSET(0x9B3DEF0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NestedContainer_TypeDefinitionIndex = 29441;

	class NestedContainer : public Il2CppObject
	{
	public:
		::System::ComponentModel::IComponent* _Owner_k__BackingField; // 0x40

		::System::Void .ctor(::System::ComponentModel::IComponent* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::IComponent* get_Owner()
		{
			return (return (::System::ComponentModel::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GET_OWNER_OFFSET))(nullptr);
		}

		::System::String* get_OwnerName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GET_OWNERNAME_OFFSET))(nullptr);
		}

		::System::ComponentModel::ISite* CreateSite(::System::ComponentModel::IComponent* arg, ::System::String* str)
		{
			return (return (::System::ComponentModel::ISite*(*)(::System::ComponentModel::IComponent*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_CREATESITE_OFFSET))(arg, str, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetService(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_GETSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOwnerDisposed(::System::Object* arg, ::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NESTEDCONTAINER_ONOWNERDISPOSED_OFFSET))(arg, arg, nullptr);
		}

	};
}

