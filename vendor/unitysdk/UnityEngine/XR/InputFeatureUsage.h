#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class InputFeatureType; }
namespace UnityEngine::XR { class InputFeatureUsage; }

#define UNITYENGINE_XR_INPUTFEATUREUSAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA4AB6B0)
#define UNITYENGINE_XR_INPUTFEATUREUSAGE_GET_INTERNALTYPE_OFFSET UNITYSDK_OFFSET(0xA4AB6C0)
#define UNITYENGINE_XR_INPUTFEATUREUSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4AB6D0)
#define UNITYENGINE_XR_INPUTFEATUREUSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4AB760)
#define UNITYENGINE_XR_INPUTFEATUREUSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4AB7A0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputFeatureUsage_TypeDefinitionIndex = 37594;

	class InputFeatureUsage : public Il2CppObject
	{
	public:
		::System::String* m_Name; // 0x10
		::UnityEngine::XR::InputFeatureType* m_InternalType; // 0x18

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_GET_NAME_OFFSET))(nullptr);
		}

		::UnityEngine::XR::InputFeatureType* get_internalType()
		{
			return (return (::UnityEngine::XR::InputFeatureType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_GET_INTERNALTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::XR::InputFeatureUsage* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::XR::InputFeatureUsage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTFEATUREUSAGE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

