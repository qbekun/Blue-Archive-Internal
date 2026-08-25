#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class LookAtConstraint; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Animations { class ConstraintSource; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine::Animations { class ConstraintSource&; }

#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D9060)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1D90A0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D90E0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1D9120)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROLL_OFFSET UNITYSDK_OFFSET(0xA1D9170)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROLL_OFFSET UNITYSDK_OFFSET(0xA1D91B0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0xA1D9200)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET UNITYSDK_OFFSET(0xA1D9240)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA1D9280)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0xA1D92C0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROTATIONATREST_OFFSET UNITYSDK_OFFSET(0xA1D9300)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROTATIONATREST_OFFSET UNITYSDK_OFFSET(0xA1D93A0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xA1D9420)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xA1D94C0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_WORLDUPOBJECT_OFFSET UNITYSDK_OFFSET(0xA1D9540)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_WORLDUPOBJECT_OFFSET UNITYSDK_OFFSET(0xA1D9580)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_USEUPOBJECT_OFFSET UNITYSDK_OFFSET(0xA1D95C0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_USEUPOBJECT_OFFSET UNITYSDK_OFFSET(0xA1D9600)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_SOURCECOUNT_OFFSET UNITYSDK_OFFSET(0xA1D9640)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D9680)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCES_OFFSET UNITYSDK_OFFSET(0xA1D96C0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCES_OFFSET UNITYSDK_OFFSET(0xA1D9700)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D97A0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D97E0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_REMOVESOURCE_OFFSET UNITYSDK_OFFSET(0xA1D9860)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D9A20)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D9A60)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D9AD0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCE_OFFSET UNITYSDK_OFFSET(0xA1D9B80)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D9BD0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_VALIDATESOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xA1D98A0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROTATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D9360)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROTATIONATREST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D93E0)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROTATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D9480)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROTATIONOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D9500)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_ADDSOURCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D9820)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D9B30)
#define UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D9C20)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int LookAtConstraint_TypeDefinitionIndex = 36522;

	class LookAtConstraint : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::Animations::LookAtConstraint* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::LookAtConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_weight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_WEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_roll()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROLL_OFFSET))(nullptr);
		}

		::System::Void set_roll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROLL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_constraintActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_CONSTRAINTACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_constraintActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_CONSTRAINTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_locked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_LOCKED_OFFSET))(nullptr);
		}

		::System::Void set_locked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_LOCKED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_rotationAtRest()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROTATIONATREST_OFFSET))(nullptr);
		}

		::System::Void set_rotationAtRest(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROTATIONATREST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_rotationOffset()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROTATIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_rotationOffset(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROTATIONOFFSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_worldUpObject()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_WORLDUPOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_worldUpObject(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_WORLDUPOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useUpObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_USEUPOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_useUpObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_USEUPOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_sourceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_SOURCECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetSourceCountInternal(::UnityEngine::Animations::LookAtConstraint* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::LookAtConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void GetSources(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetSources(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void SetSourcesInternal(::UnityEngine::Animations::LookAtConstraint* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::LookAtConstraint*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCESINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 AddSource(::UnityEngine::Animations::ConstraintSource* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_ADDSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSource(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_REMOVESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSourceInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_REMOVESOURCEINTERNAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::ConstraintSource* GetSource(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::ConstraintSource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::ConstraintSource* GetSourceInternal(::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::ConstraintSource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetSource(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourceInternal(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateSourceIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_VALIDATESOURCEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void get_rotationAtRest_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROTATIONATREST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_rotationAtRest_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROTATIONATREST_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_rotationOffset_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GET_ROTATIONOFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_rotationOffset_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SET_ROTATIONOFFSET_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 AddSource_Injected(::UnityEngine::Animations::ConstraintSource&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_ADDSOURCE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetSourceInternal_Injected(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourceInternal_Injected(::System::Int32 arg, ::UnityEngine::Animations::ConstraintSource&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Animations::ConstraintSource&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_LOOKATCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

