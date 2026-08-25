#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_CONTAINER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9B4D1B0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x9B4D280)
#define SYSTEM_COMPONENTMODEL_CONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x9B4D2A0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_CREATESITE_OFFSET UNITYSDK_OFFSET(0x9B4D760)
#define SYSTEM_COMPONENTMODEL_CONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B4D860)
#define SYSTEM_COMPONENTMODEL_CONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B4D8C0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x9B4DC10)
#define SYSTEM_COMPONENTMODEL_CONTAINER_GET_COMPONENTS_OFFSET UNITYSDK_OFFSET(0x9B4DCA0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_REMOVE_OFFSET UNITYSDK_OFFSET(0x9B4E0B0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_REMOVE_OFFSET UNITYSDK_OFFSET(0x9B4E0C0)
#define SYSTEM_COMPONENTMODEL_CONTAINER_REMOVEWITHOUTUNSITING_OFFSET UNITYSDK_OFFSET(0x9B4E400)
#define SYSTEM_COMPONENTMODEL_CONTAINER_VALIDATENAME_OFFSET UNITYSDK_OFFSET(0x9B4E410)
#define SYSTEM_COMPONENTMODEL_CONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4E860)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Container_TypeDefinitionIndex = 29493;

	class Container : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* sites; // 0x10
		::System::Int32 siteCount; // 0x18
		::System::ComponentModel::ComponentCollection* components; // 0x20
		::System::ComponentModel::ContainerFilterService* filter; // 0x28
		::System::Boolean checkedFilter; // 0x30
		::System::Object* syncObj; // 0x38

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Add(::System::ComponentModel::IComponent* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::ComponentModel::IComponent* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_ADD_OFFSET))(arg, str, nullptr);
		}

		::System::ComponentModel::ISite* CreateSite(::System::ComponentModel::IComponent* arg, ::System::String* str)
		{
			return (return (::System::ComponentModel::ISite*(*)(::System::ComponentModel::IComponent*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_CREATESITE_OFFSET))(arg, str, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetService(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_GETSERVICE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::ComponentCollection* get_Components()
		{
			return (return (::System::ComponentModel::ComponentCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_GET_COMPONENTS_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::ComponentModel::IComponent* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(::System::ComponentModel::IComponent* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_REMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveWithoutUnsiting(::System::ComponentModel::IComponent* arg)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_REMOVEWITHOUTUNSITING_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateName(::System::ComponentModel::IComponent* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_VALIDATENAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CONTAINER_.CTOR_OFFSET))(nullptr);
		}

	};
}

