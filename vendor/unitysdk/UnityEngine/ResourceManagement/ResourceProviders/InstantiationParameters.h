#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA0EA930)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA0EA940)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xA0EA950)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_INSTANTIATEINWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xA0EA960)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_SETPOSITIONROTATION_OFFSET UNITYSDK_OFFSET(0xA0EA970)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EA980)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EAA20)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int InstantiationParameters_TypeDefinitionIndex = 36396;

	class InstantiationParameters : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Position; // 0x10
		::UnityEngine::Quaternion* m_Rotation; // 0x1C
		::UnityEngine::Transform* m_Parent; // 0x30
		::System::Boolean m_InstantiateInWorldPosition; // 0x38
		::System::Boolean m_SetPositionRotation; // 0x39

		::UnityEngine::Vector3* get_Position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_POSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_Rotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_ROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_Parent()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Boolean get_InstantiateInWorldPosition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_INSTANTIATEINWORLDPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_SetPositionRotation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_GET_SETPOSITIONROTATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANTIATIONPARAMETERS_INSTANTIATE_OFFSET))(arg, nullptr);
		}

	};
}

