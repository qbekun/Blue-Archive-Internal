#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class IntegratedSubsystemDescriptor; }
namespace UnityEngine { class SubsystemDescriptor; }

#define UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_INITIALIZEMANAGEDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA2A73D0)
#define UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_CLEARMANAGEDDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0xA2A74B0)
#define UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_REPORTSINGLESUBSYSTEMANALYTICS_OFFSET UNITYSDK_OFFSET(0xA2A76C0)
#define UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_REGISTERDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_REGISTERDEPRECATEDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA2A6990)
#define UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2A7700)

namespace UnityEngine::SubsystemsImplementation
{
	inline static constexpr unsigned int SubsystemDescriptorStore_TypeDefinitionIndex = 37955;

	class SubsystemDescriptorStore : public Il2CppObject
	{
	public:
		Il2CppObject* s_IntegratedDescriptors; // 0x0
		Il2CppObject* s_StandaloneDescriptors; // 0x8
		Il2CppObject* s_DeprecatedDescriptors; // 0x10

		::System::Void InitializeManagedDescriptor(::System::Int32 arg, ::UnityEngine::IntegratedSubsystemDescriptor* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::IntegratedSubsystemDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_INITIALIZEMANAGEDDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearManagedDescriptors()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_CLEARMANAGEDDESCRIPTORS_OFFSET))(nullptr);
		}

		::System::Void ReportSingleSubsystemAnalytics(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_REPORTSINGLESUBSYSTEMANALYTICS_OFFSET))(str, nullptr);
		}

		::System::Void RegisterDescriptor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_REGISTERDESCRIPTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterDeprecatedDescriptor(::UnityEngine::SubsystemDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::SubsystemDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_REGISTERDEPRECATEDDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMSIMPLEMENTATION_SUBSYSTEMDESCRIPTORSTORE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

