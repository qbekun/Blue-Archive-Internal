#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MXField::Core { class IFieldInteractable; }

#define MXFIELD_CORE_IFIELDINTERACTABLE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_IFIELDINTERACTABLE_GET_IGNOREPLAYERDIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_IFIELDINTERACTABLE_ONINTERACTIONENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_IFIELDINTERACTABLE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_IFIELDINTERACTABLE_ONINTERACTIONEXIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_CORE_IFIELDINTERACTABLE_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Core
{
	inline static constexpr unsigned int IFieldInteractable_TypeDefinitionIndex = 10968;

	class IFieldInteractable : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDINTERACTABLE_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnorePlayerDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDINTERACTABLE_GET_IGNOREPLAYERDIRECTION_OFFSET))(nullptr);
		}

		::System::Void OnInteractionEnter(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDINTERACTABLE_ONINTERACTIONENTER_OFFSET))(arg, nullptr);
		}

		::MXField::Core::IFieldInteractable* get_Target()
		{
			return ((::MXField::Core::IFieldInteractable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDINTERACTABLE_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void OnInteractionExit(::MXField::Core::IFieldInteractable* arg)
		{
			((::System::Void(*)(::MXField::Core::IFieldInteractable*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDINTERACTABLE_ONINTERACTIONEXIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_IFIELDINTERACTABLE_GET_CANTRIGGER_OFFSET))(nullptr);
		}

	};
}

