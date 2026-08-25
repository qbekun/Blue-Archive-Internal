#pragma once
#include "unitysdk.h"

#define RIGSYNCSCENETOSTREAMDATA_SET_SYNCABLETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x9E2AFD0)
#define RIGSYNCSCENETOSTREAMDATA_SET_RIGSTATES_OFFSET UNITYSDK_OFFSET(0x9E2AFE0)
#define RIGSYNCSCENETOSTREAMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E29210)
#define RIGSYNCSCENETOSTREAMDATA_GET_SYNCABLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9E2B190)
#define RIGSYNCSCENETOSTREAMDATA_UNIQUETRANSFORMINDICES_OFFSET UNITYSDK_OFFSET(0x9E2AFF0)
#define RIGSYNCSCENETOSTREAMDATA_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBDATA.ISVALID_OFFSET UNITYSDK_OFFSET(0x9E2B1A0)
#define RIGSYNCSCENETOSTREAMDATA_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBDATA.SETDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x9E2B1B0)
#define RIGSYNCSCENETOSTREAMDATA_GET_RIGSTATES_OFFSET UNITYSDK_OFFSET(0x9E2B200)
#define RIGSYNCSCENETOSTREAMDATA_SET_SYNCABLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9E2B210)
#define RIGSYNCSCENETOSTREAMDATA_GET_SYNCABLETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x9E2B220)

	inline static constexpr unsigned int RigSyncSceneToStreamData_TypeDefinitionIndex = 37180;

	class RigSyncSceneToStreamData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _syncableTransforms_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _syncableProperties_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _rigStates_k__BackingField; // 0x20
		::System::Boolean m_IsValid; // 0x28

		::System::Void set_syncableTransforms(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_SET_SYNCABLETRANSFORMS_OFFSET))(arg, nullptr);
		}

		::System::Void set_rigStates(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_SET_RIGSTATES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_syncableProperties()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_GET_SYNCABLEPROPERTIES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* UniqueTransformIndices(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_UNIQUETRANSFORMINDICES_OFFSET))(arg, nullptr);
		}

		::System::Boolean UnityEngine.Animations.Rigging.IAnimationJobData.IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBDATA.ISVALID_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.Animations.Rigging.IAnimationJobData.SetDefaultValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_UNITYENGINE.ANIMATIONS.RIGGING.IANIMATIONJOBDATA.SETDEFAULTVALUES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_rigStates()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_GET_RIGSTATES_OFFSET))(nullptr);
		}

		::System::Void set_syncableProperties(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_SET_SYNCABLEPROPERTIES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_syncableTransforms()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGSYNCSCENETOSTREAMDATA_GET_SYNCABLETRANSFORMS_OFFSET))(nullptr);
		}

	};

