#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VolumeParameter; }

#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_INTERP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_INTERP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_OVERRIDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeParameter`1_TypeDefinitionIndex = 34093;

	class VolumeParameter`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Value; // 0x0

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Interp(::UnityEngine::Rendering::VolumeParameter* arg, ::UnityEngine::Rendering::VolumeParameter* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeParameter*, ::UnityEngine::Rendering::VolumeParameter*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Interp(Il2CppObject* arg, Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Override(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_OVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::UnityEngine::Rendering::VolumeParameter* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeParameter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_SETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_EQUALS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPARAMETER`1_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

