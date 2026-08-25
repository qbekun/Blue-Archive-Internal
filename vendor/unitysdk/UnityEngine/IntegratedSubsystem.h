#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ISubsystemDescriptor; }
namespace UnityEngine { class IntegratedSubsystem; }

#define UNITYENGINE_INTEGRATEDSUBSYSTEM_SETHANDLE_OFFSET UNITYSDK_OFFSET(0xA2A66A0)
#define UNITYENGINE_INTEGRATEDSUBSYSTEM_GET_RUNNING_OFFSET UNITYSDK_OFFSET(0xA2A66E0)
#define UNITYENGINE_INTEGRATEDSUBSYSTEM_GET_VALID_OFFSET UNITYSDK_OFFSET(0xA2A6760)
#define UNITYENGINE_INTEGRATEDSUBSYSTEM_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xA2A67B0)
#define UNITYENGINE_INTEGRATEDSUBSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A67F0)

namespace UnityEngine
{
	inline static constexpr unsigned int IntegratedSubsystem_TypeDefinitionIndex = 37944;

	class IntegratedSubsystem : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::UnityEngine::ISubsystemDescriptor* m_SubsystemDescriptor; // 0x18

		::System::Void SetHandle(::UnityEngine::IntegratedSubsystem* arg)
		{
			((::System::Void(*)(::UnityEngine::IntegratedSubsystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEM_SETHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_running()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEM_GET_RUNNING_OFFSET))(nullptr);
		}

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEM_GET_VALID_OFFSET))(nullptr);
		}

		::System::Boolean IsRunning()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEM_ISRUNNING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

