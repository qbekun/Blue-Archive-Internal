#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VolumeParameter; }

#define UNITYENGINE_RENDERING_OBJECTPARAMETER`1_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBJECTPARAMETER`1__SET_VALUE_B__9_2_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBJECTPARAMETER`1_GET_OVERRIDESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBJECTPARAMETER`1_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBJECTPARAMETER`1_SET_OVERRIDESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBJECTPARAMETER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBJECTPARAMETER`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBJECTPARAMETER`1_INTERP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_OBJECTPARAMETER`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ObjectParameter`1_TypeDefinitionIndex = 34131;

	class ObjectParameter`1 : public ::System::Net::NetworkInformation::AlignmentUnion
	{
	public:
		Il2CppObject* _parameters_k__BackingField; // 0x0

		::System::Void set_parameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBJECTPARAMETER`1_SET_PARAMETERS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::VolumeParameter* _set_value_b__9_2(::System::Reflection::FieldInfo* arg)
		{
			return (return (::UnityEngine::Rendering::VolumeParameter*(*)(::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBJECTPARAMETER`1__SET_VALUE_B__9_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_overrideState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBJECTPARAMETER`1_GET_OVERRIDESTATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_parameters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBJECTPARAMETER`1_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_overrideState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBJECTPARAMETER`1_SET_OVERRIDESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBJECTPARAMETER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBJECTPARAMETER`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void Interp(::UnityEngine::Rendering::VolumeParameter* arg, ::UnityEngine::Rendering::VolumeParameter* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBJECTPARAMETER`1_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_OBJECTPARAMETER`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

