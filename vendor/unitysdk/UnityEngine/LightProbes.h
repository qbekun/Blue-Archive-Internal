#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class SphericalHarmonicsL2&; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_LIGHTPROBES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F49A0)
#define UNITYENGINE_LIGHTPROBES_ADD_TETRAHEDRALIZATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA1F49F0)
#define UNITYENGINE_LIGHTPROBES_REMOVE_TETRAHEDRALIZATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA1F4AA0)
#define UNITYENGINE_LIGHTPROBES_INTERNAL_CALLTETRAHEDRALIZATIONCOMPLETEDFUNCTION_OFFSET UNITYSDK_OFFSET(0xA1F4B50)
#define UNITYENGINE_LIGHTPROBES_ADD_NEEDSRETETRAHEDRALIZATION_OFFSET UNITYSDK_OFFSET(0xA1F4BA0)
#define UNITYENGINE_LIGHTPROBES_REMOVE_NEEDSRETETRAHEDRALIZATION_OFFSET UNITYSDK_OFFSET(0xA1F4C60)
#define UNITYENGINE_LIGHTPROBES_INTERNAL_CALLNEEDSRETETRAHEDRALIZATIONFUNCTION_OFFSET UNITYSDK_OFFSET(0xA1F4D20)
#define UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZE_OFFSET UNITYSDK_OFFSET(0xA1F4D70)
#define UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xA1F4DB0)
#define UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_OFFSET UNITYSDK_OFFSET(0xA1F4DF0)
#define UNITYENGINE_LIGHTPROBES_ARELIGHTPROBESALLOWED_OFFSET UNITYSDK_OFFSET(0xA1F4E90)
#define UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_OFFSET UNITYSDK_OFFSET(0xA1F4ED0)
#define UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_OFFSET UNITYSDK_OFFSET(0xA1F50E0)
#define UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1F5090)
#define UNITYENGINE_LIGHTPROBES_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0xA1F5360)
#define UNITYENGINE_LIGHTPROBES_GET_BAKEDPROBES_OFFSET UNITYSDK_OFFSET(0xA1F53A0)
#define UNITYENGINE_LIGHTPROBES_SET_BAKEDPROBES_OFFSET UNITYSDK_OFFSET(0xA1F53E0)
#define UNITYENGINE_LIGHTPROBES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA1F5420)
#define UNITYENGINE_LIGHTPROBES_GET_CELLCOUNT_OFFSET UNITYSDK_OFFSET(0xA1F5460)
#define UNITYENGINE_LIGHTPROBES_GETCOUNT_OFFSET UNITYSDK_OFFSET(0xA1F54A0)
#define UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDLIGHTPROBE_OFFSET UNITYSDK_OFFSET(0xA1F54E0)
#define UNITYENGINE_LIGHTPROBES_GET_COEFFICIENTS_OFFSET UNITYSDK_OFFSET(0xA1F54F0)
#define UNITYENGINE_LIGHTPROBES_SET_COEFFICIENTS_OFFSET UNITYSDK_OFFSET(0xA1F5530)
#define UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1F4E40)

namespace UnityEngine
{
	inline static constexpr unsigned int LightProbes_TypeDefinitionIndex = 31001;

	class LightProbes : public Il2CppObject
	{
	public:
		::System::Action* tetrahedralizationCompleted; // 0x0
		::System::Action* needsRetetrahedralization; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void add_tetrahedralizationCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_ADD_TETRAHEDRALIZATIONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_tetrahedralizationCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_REMOVE_TETRAHEDRALIZATIONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_CallTetrahedralizationCompletedFunction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_INTERNAL_CALLTETRAHEDRALIZATIONCOMPLETEDFUNCTION_OFFSET))(nullptr);
		}

		::System::Void add_needsRetetrahedralization(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_ADD_NEEDSRETETRAHEDRALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_needsRetetrahedralization(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_REMOVE_NEEDSRETETRAHEDRALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_CallNeedsRetetrahedralizationFunction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_INTERNAL_CALLNEEDSRETETRAHEDRALIZATIONFUNCTION_OFFSET))(nullptr);
		}

		::System::Void Tetrahedralize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZE_OFFSET))(nullptr);
		}

		::System::Void TetrahedralizeAsync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZEASYNC_OFFSET))(nullptr);
		}

		::System::Void GetInterpolatedProbe(::UnityEngine::Vector3* arg, ::UnityEngine::Renderer* arg, ::UnityEngine::Rendering::SphericalHarmonicsL2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Renderer*, ::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AreLightProbesAllowed(::UnityEngine::Renderer* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Renderer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_ARELIGHTPROBESALLOWED_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateInterpolatedLightAndOcclusionProbes(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CalculateInterpolatedLightAndOcclusionProbes(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CalculateInterpolatedLightAndOcclusionProbes_Internal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_INTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_positions()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_POSITIONS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_bakedProbes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_BAKEDPROBES_OFFSET))(nullptr);
		}

		::System::Void set_bakedProbes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_SET_BAKEDPROBES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_cellCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_CELLCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETCOUNT_OFFSET))(nullptr);
		}

		::System::Void GetInterpolatedLightProbe(::UnityEngine::Vector3* arg, ::UnityEngine::Renderer* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Renderer*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDLIGHTPROBE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_coefficients()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_COEFFICIENTS_OFFSET))(nullptr);
		}

		::System::Void set_coefficients(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_SET_COEFFICIENTS_OFFSET))(arg, nullptr);
		}

		::System::Void GetInterpolatedProbe_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Renderer* arg, ::UnityEngine::Rendering::SphericalHarmonicsL2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Renderer*, ::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

