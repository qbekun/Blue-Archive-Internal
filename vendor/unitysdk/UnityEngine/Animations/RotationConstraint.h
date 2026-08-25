#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class RotationConstraint; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Animations { class Axis; }
namespace UnityEngine::Animations { class ConstraintSource; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine::Animations { class ConstraintSource&; }

#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D7A60)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1D7AA0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D7AE0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D7B20)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONATREST_OFFSET UNITYSDK_OFFSET(0xA1D7B70)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONATREST_OFFSET UNITYSDK_OFFSET(0xA1D7C10)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xA1D7C90)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xA1D7D30)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONAXIS_OFFSET UNITYSDK_OFFSET(0xA1D7DB0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONAXIS_OFFSET UNITYSDK_OFFSET(0xA1D7DF0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0xA1D7E30)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0xA1D7E70)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA1D7EB0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA1D7EF0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_SOURCECOUNT_OFFSET UNITYSDK_OFFSET(0xA1D7F30)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D7F70)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCES_OFFSET UNITYSDK_OFFSET(0xA1D7FB0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCES_OFFSET UNITYSDK_OFFSET(0xA1D7FF0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D8090)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D80D0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_REMOVESOURCE_OFFSET UNITYSDK_OFFSET(0xA1D8150)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D8310)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D8350)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D83C0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D8470)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D84C0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_VALIDATESOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xA1D8190)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D7BD0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D7C50)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D7CF0)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D7D70)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_ADDSOURCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D8110)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D8420)
#define UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D8510)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int RotationConstraint_TypeDefinitionIndex = 36520;

	class RotationConstraint : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::Animations::RotationConstraint* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::RotationConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_weight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_WEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_rotationAtRest()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONATREST_OFFSET))(nullptr);
		}

		::System::Void set_rotationAtRest(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONATREST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_rotationOffset()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_rotationOffset(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONOFFSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Axis* get_rotationAxis()
		{
			return (return (::UnityEngine::Animations::Axis*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONAXIS_OFFSET))(nullptr);
		}

		::System::Void set_rotationAxis(::UnityEngine::Animations::Axis* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Axis*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONAXIS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_constraintActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_constraintActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_locked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_LOCKED_OFFSET))(nullptr);
		}

		::System::Void set_locked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_LOCKED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sourceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_SOURCECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetSourceCountInternal(::UnityEngine::Animations::RotationConstraint* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::RotationConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetSources(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetSources(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetSourcesInternal(::UnityEngine::Animations::RotationConstraint* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::RotationConstraint*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCESINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddSource(::UnityEngine::Animations::ConstraintSource* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_ADDSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSource(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_REMOVESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSourceInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::ConstraintSource* GetSource(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::ConstraintSource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::ConstraintSource* GetSourceInternal(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::ConstraintSource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetSource(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourceInternal(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateSourceIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_VALIDATESOURCEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void get_rotationAtRest_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONATREST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_rotationAtRest_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONATREST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_rotationOffset_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GET_ROTATIONOFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_rotationOffset_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SET_ROTATIONOFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddSource_Injected(::UnityEngine::Animations::ConstraintSource&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_ADDSOURCE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetSourceInternal_Injected(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourceInternal_Injected(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ROTATIONCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

