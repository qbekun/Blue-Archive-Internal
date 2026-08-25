#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class IAnimationJobBinder; }
namespace UnityEngine::Animations::Rigging { class IAnimationJobData; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Animations::Rigging { class Rig; }

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9E28010)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_CREATESYNCSCENETOSTREAMDATA_OFFSET UNITYSDK_OFFSET(0x9E281F0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_GETSYNCABLERIGTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x9E29410)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_GETCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x9E27C10)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTNESTEDPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x9E29540)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTALLSYNCABLEDATA_OFFSET UNITYSDK_OFFSET(0x9E28380)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTTRANSFORMTYPE_OFFSET UNITYSDK_OFFSET(0x9E29B70)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTWEIGHTEDTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x9E2A250)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_CREATEANIMATIONJOBS_OFFSET UNITYSDK_OFFSET(0x9E27E10)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_DESTROYANIMATIONJOBS_OFFSET UNITYSDK_OFFSET(0x9E277F0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_GET_SYNCSCENETOSTREAMBINDER_OFFSET UNITYSDK_OFFSET(0x9E2AC80)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E2ACD0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigUtils_TypeDefinitionIndex = 37182;

	class RigUtils : public Il2CppObject
	{
	public:
		Il2CppObject* s_SupportedPropertyTypeToDescriptor; // 0x0
		::UnityEngine::Animations::Rigging::IAnimationJobBinder* _syncSceneToStreamBinder_k__BackingField; // 0x8

		::System::Boolean ExtractPropertyType(::System::Reflection::FieldInfo* arg, ::System::Object* arg, Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Object*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTPROPERTYTYPE_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Animations::Rigging::IAnimationJobData* CreateSyncSceneToStreamData(::UnityEngine::Animator* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::Animations::Rigging::IAnimationJobData*(*)(::UnityEngine::Animator*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_CREATESYNCSCENETOSTREAMDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSyncableRigTransforms(::UnityEngine::Animator* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_GETSYNCABLERIGTRANSFORMS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetConstraints(::UnityEngine::Animations::Rigging::Rig* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Animations::Rigging::Rig*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_GETCONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ExtractNestedPropertyType(::UnityEngine::Animator* arg, ::System::Reflection::FieldInfo* arg, ::System::Object* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animator*, ::System::Reflection::FieldInfo*, ::System::Object*, Il2CppObject*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTNESTEDPROPERTYTYPE_OFFSET))(arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Void ExtractAllSyncableData(::UnityEngine::Animator* arg, Il2CppObject* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, Il2CppObject*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTALLSYNCABLEDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ExtractTransformType(::UnityEngine::Animator* arg, ::System::Reflection::FieldInfo* arg, ::System::Object* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animator*, ::System::Reflection::FieldInfo*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTTRANSFORMTYPE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ExtractWeightedTransforms(::UnityEngine::Animator* arg, ::System::Reflection::FieldInfo* arg, ::System::Object* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animator*, ::System::Reflection::FieldInfo*, ::System::Object*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_EXTRACTWEIGHTEDTRANSFORMS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateAnimationJobs(::UnityEngine::Animator* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Animator*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_CREATEANIMATIONJOBS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroyAnimationJobs(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_DESTROYANIMATIONJOBS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::IAnimationJobBinder* get_syncSceneToStreamBinder()
		{
			return (return (::UnityEngine::Animations::Rigging::IAnimationJobBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_GET_SYNCSCENETOSTREAMBINDER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

