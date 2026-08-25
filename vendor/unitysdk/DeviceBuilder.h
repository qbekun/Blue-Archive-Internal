#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputStateBlock; }

#define DEVICEBUILDER_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x9EA0070)
#define DEVICEBUILDER_WITHCHILDREN_OFFSET UNITYSDK_OFFSET(0x9EA0080)
#define DEVICEBUILDER_WITHSHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9EA00B0)
#define DEVICEBUILDER_WITHCONTROLUSAGE_OFFSET UNITYSDK_OFFSET(0x9EA0110)
#define DEVICEBUILDER_ISNOISY_OFFSET UNITYSDK_OFFSET(0x9EA01E0)
#define DEVICEBUILDER_WITHCONTROLTREE_OFFSET UNITYSDK_OFFSET(0x9EA0210)
#define DEVICEBUILDER_WITHDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9EA0360)
#define DEVICEBUILDER_WITHCONTROLALIAS_OFFSET UNITYSDK_OFFSET(0x9EA03C0)
#define DEVICEBUILDER_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x9EA0420)
#define DEVICEBUILDER_WITHLAYOUT_OFFSET UNITYSDK_OFFSET(0x9EA0430)
#define DEVICEBUILDER_WITHSTATEBLOCK_OFFSET UNITYSDK_OFFSET(0x9EA0470)
#define DEVICEBUILDER_WITHNAME_OFFSET UNITYSDK_OFFSET(0x9EA04A0)
#define DEVICEBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0x9EA04F0)
#define DEVICEBUILDER_WITHSTATEOFFSETTOCONTROLINDEXMAP_OFFSET UNITYSDK_OFFSET(0x9EA0510)

	inline static constexpr unsigned int DeviceBuilder_TypeDefinitionIndex = 28467;

	class DeviceBuilder : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputDevice* _device_k__BackingField; // 0x10

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_GET_DEVICE_OFFSET))(nullptr);
		}

		DeviceBuilder* WithChildren(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (DeviceBuilder*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHCHILDREN_OFFSET))(arg, arg, nullptr);
		}

		DeviceBuilder* WithShortDisplayName(::System::String* str)
		{
			return (return (DeviceBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHSHORTDISPLAYNAME_OFFSET))(str, nullptr);
		}

		DeviceBuilder* WithControlUsage(::System::Int32 arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (DeviceBuilder*(*)(::System::Int32, ::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHCONTROLUSAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		DeviceBuilder* IsNoisy(::System::Boolean arg)
		{
			return (return (DeviceBuilder*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_ISNOISY_OFFSET))(arg, nullptr);
		}

		DeviceBuilder* WithControlTree(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (DeviceBuilder*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHCONTROLTREE_OFFSET))(arg, arg, nullptr);
		}

		DeviceBuilder* WithDisplayName(::System::String* str)
		{
			return (return (DeviceBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHDISPLAYNAME_OFFSET))(str, nullptr);
		}

		DeviceBuilder* WithControlAlias(::System::Int32 arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (DeviceBuilder*(*)(::System::Int32, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHCONTROLALIAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_device(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_SET_DEVICE_OFFSET))(arg, nullptr);
		}

		DeviceBuilder* WithLayout(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (DeviceBuilder*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHLAYOUT_OFFSET))(arg, nullptr);
		}

		DeviceBuilder* WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock* arg)
		{
			return (return (DeviceBuilder*(*)(::UnityEngine::InputSystem::LowLevel::InputStateBlock*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHSTATEBLOCK_OFFSET))(arg, nullptr);
		}

		DeviceBuilder* WithName(::System::String* str)
		{
			return (return (DeviceBuilder*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHNAME_OFFSET))(str, nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_FINISH_OFFSET))(nullptr);
		}

		DeviceBuilder* WithStateOffsetToControlIndexMap(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (DeviceBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEBUILDER_WITHSTATEOFFSETTOCONTROLINDEXMAP_OFFSET))(arg, nullptr);
		}

	};

