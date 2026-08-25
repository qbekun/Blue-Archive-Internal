#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class ScaleConstraint; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Animations { class Axis; }
namespace UnityEngine::Animations { class ConstraintSource; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine::Animations { class ConstraintSource&; }

#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D8560)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1D85A0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D85E0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D8620)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEATREST_OFFSET UNITYSDK_OFFSET(0xA1D8670)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEATREST_OFFSET UNITYSDK_OFFSET(0xA1D8710)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEOFFSET_OFFSET UNITYSDK_OFFSET(0xA1D8790)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEOFFSET_OFFSET UNITYSDK_OFFSET(0xA1D8830)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALINGAXIS_OFFSET UNITYSDK_OFFSET(0xA1D88B0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALINGAXIS_OFFSET UNITYSDK_OFFSET(0xA1D88F0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0xA1D8930)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0xA1D8970)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA1D89B0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA1D89F0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SOURCECOUNT_OFFSET UNITYSDK_OFFSET(0xA1D8A30)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D8A70)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCES_OFFSET UNITYSDK_OFFSET(0xA1D8AB0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCES_OFFSET UNITYSDK_OFFSET(0xA1D8AF0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D8B90)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D8BD0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_REMOVESOURCE_OFFSET UNITYSDK_OFFSET(0xA1D8C50)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_REMOVESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D8E10)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D8E50)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D8EC0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D8F70)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D8FC0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_VALIDATESOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xA1D8C90)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D86D0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D8750)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D87F0)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D8870)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_ADDSOURCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D8C10)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D8F20)
#define UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D9010)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int ScaleConstraint_TypeDefinitionIndex = 36521;

	class ScaleConstraint : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::Animations::ScaleConstraint* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::ScaleConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_weight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_WEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_scaleAtRest()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEATREST_OFFSET))(nullptr);
		}

		::System::Void set_scaleAtRest(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEATREST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_scaleOffset()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_scaleOffset(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEOFFSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Axis* get_scalingAxis()
		{
			return (return (::UnityEngine::Animations::Axis*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALINGAXIS_OFFSET))(nullptr);
		}

		::System::Void set_scalingAxis(::UnityEngine::Animations::Axis* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Axis*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALINGAXIS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_constraintActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_constraintActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_locked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_LOCKED_OFFSET))(nullptr);
		}

		::System::Void set_locked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_LOCKED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sourceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SOURCECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetSourceCountInternal(::UnityEngine::Animations::ScaleConstraint* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::ScaleConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetSources(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetSources(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetSourcesInternal(::UnityEngine::Animations::ScaleConstraint* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::ScaleConstraint*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCESINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddSource(::UnityEngine::Animations::ConstraintSource* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_ADDSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSource(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_REMOVESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSourceInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_REMOVESOURCEINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::ConstraintSource* GetSource(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::ConstraintSource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::ConstraintSource* GetSourceInternal(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::ConstraintSource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetSource(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourceInternal(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateSourceIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_VALIDATESOURCEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void get_scaleAtRest_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEATREST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_scaleAtRest_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEATREST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_scaleOffset_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GET_SCALEOFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_scaleOffset_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SET_SCALEOFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddSource_Injected(::UnityEngine::Animations::ConstraintSource&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_ADDSOURCE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetSourceInternal_Injected(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourceInternal_Injected(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_SCALECONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

