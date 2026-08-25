#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class PositionConstraint; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Animations { class Axis; }
namespace UnityEngine::Animations { class ConstraintSource; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine::Animations { class ConstraintSource&; }

#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D6F60)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1D6FA0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D6FE0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D7020)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONATREST_OFFSET UNITYSDK_OFFSET(0xA1D7070)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONATREST_OFFSET UNITYSDK_OFFSET(0xA1D7110)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xA1D7190)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xA1D7230)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONAXIS_OFFSET UNITYSDK_OFFSET(0xA1D72B0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONAXIS_OFFSET UNITYSDK_OFFSET(0xA1D72F0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0xA1D7330)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0xA1D7370)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA1D73B0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA1D73F0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_SOURCECOUNT_OFFSET UNITYSDK_OFFSET(0xA1D7430)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D7470)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCES_OFFSET UNITYSDK_OFFSET(0xA1D74B0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCES_OFFSET UNITYSDK_OFFSET(0xA1D74F0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D7590)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D75D0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_REMOVESOURCE_OFFSET UNITYSDK_OFFSET(0xA1D7650)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D7810)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D7850)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D78C0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D7970)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D79C0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_VALIDATESOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xA1D7690)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D70D0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D7150)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D71F0)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D7270)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_ADDSOURCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D7610)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D7920)
#define UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D7A10)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int PositionConstraint_TypeDefinitionIndex = 36519;

	class PositionConstraint : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::Animations::PositionConstraint* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::PositionConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_weight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_WEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_translationAtRest()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONATREST_OFFSET))(nullptr);
		}

		::System::Void set_translationAtRest(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONATREST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_translationOffset()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_translationOffset(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONOFFSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Axis* get_translationAxis()
		{
			return (return (::UnityEngine::Animations::Axis*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONAXIS_OFFSET))(nullptr);
		}

		::System::Void set_translationAxis(::UnityEngine::Animations::Axis* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Axis*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONAXIS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_constraintActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_constraintActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_locked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_LOCKED_OFFSET))(nullptr);
		}

		::System::Void set_locked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_LOCKED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sourceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_SOURCECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetSourceCountInternal(::UnityEngine::Animations::PositionConstraint* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::PositionConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetSources(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetSources(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetSourcesInternal(::UnityEngine::Animations::PositionConstraint* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::PositionConstraint*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCESINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddSource(::UnityEngine::Animations::ConstraintSource* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_ADDSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSource(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_REMOVESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSourceInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::ConstraintSource* GetSource(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::ConstraintSource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::ConstraintSource* GetSourceInternal(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::ConstraintSource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetSource(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourceInternal(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateSourceIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_VALIDATESOURCEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void get_translationAtRest_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONATREST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_translationAtRest_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONATREST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_translationOffset_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GET_TRANSLATIONOFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_translationOffset_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SET_TRANSLATIONOFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddSource_Injected(::UnityEngine::Animations::ConstraintSource&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_ADDSOURCE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetSourceInternal_Injected(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourceInternal_Injected(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_POSITIONCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

