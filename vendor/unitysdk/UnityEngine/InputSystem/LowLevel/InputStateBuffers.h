#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputStateBuffers; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEALL_OFFSET UNITYSDK_OFFSET(0x9F642D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_ALLOCATEALL_OFFSET UNITYSDK_OFFSET(0x9F648C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_NEXTDEVICEOFFSET_OFFSET UNITYSDK_OFFSET(0x9F64780)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SWITCHTO_OFFSET UNITYSDK_OFFSET(0x9F64AD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEDOUBLEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F64430)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SETUPDEVICETOBUFFERMAPPINGS_OFFSET UNITYSDK_OFFSET(0x9F64A50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETBACKBUFFERFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9F64C50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATESINGLEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F64610)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_COMPUTESIZEOFSINGLESTATEBUFFER_OFFSET UNITYSDK_OFFSET(0x9F64A00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETDOUBLEBUFFERSFOR_OFFSET UNITYSDK_OFFSET(0x9F64B20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_FREEALL_OFFSET UNITYSDK_OFFSET(0x9F64CA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETFRONTBUFFERFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9F64D70)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBuffers_TypeDefinitionIndex = 28819;

	class InputStateBuffers : public Il2CppObject
	{
	public:
		::System::UInt32 sizePerBuffer; // 0x10
		::System::UInt32 totalSize; // 0x14
		::System::Object** defaultStateBuffer; // 0x18
		::System::Object** noiseMaskBuffer; // 0x20
		::System::Object** resetMaskBuffer; // 0x28
		::System::Object** m_AllBuffers; // 0x30
		DoubleBuffers* m_PlayerStateBuffers; // 0x38
		::System::Object** s_DefaultStateBuffer; // 0x0
		::System::Object** s_NoiseMaskBuffer; // 0x8
		::System::Object** s_ResetMaskBuffer; // 0x10
		DoubleBuffers* s_CurrentBuffers; // 0x18

		::System::Void MigrateAll(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AllocateAll(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_ALLOCATEALL_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 NextDeviceOffset(::System::UInt32 arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_NEXTDEVICEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers* arg, ::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SWITCHTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MigrateDoubleBuffer(DoubleBuffers* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, DoubleBuffers* arg)
		{
			((::System::Void(*)(DoubleBuffers*, ::Il2CppArray<::System::Object*>*, ::System::Int32, DoubleBuffers*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEDOUBLEBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		DoubleBuffers* SetUpDeviceToBufferMappings(::System::Int32 arg, ::System::Object*&* arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (DoubleBuffers*(*)(::System::Int32, ::System::Object*&*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SETUPDEVICETOBUFFERMAPPINGS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object** GetBackBufferForDevice(::System::Int32 arg)
		{
			return (return (::System::Object**(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETBACKBUFFERFORDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Void MigrateSingleBuffer(::System::Object** arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATESINGLEBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 ComputeSizeOfSingleStateBuffer(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_COMPUTESIZEOFSINGLESTATEBUFFER_OFFSET))(arg, arg, nullptr);
		}

		DoubleBuffers* GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			return (return (DoubleBuffers*(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETDOUBLEBUFFERSFOR_OFFSET))(arg, nullptr);
		}

		::System::Void FreeAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_FREEALL_OFFSET))(nullptr);
		}

		::System::Object** GetFrontBufferForDevice(::System::Int32 arg)
		{
			return (return (::System::Object**(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETFRONTBUFFERFORDEVICE_OFFSET))(arg, nullptr);
		}

	};
}

