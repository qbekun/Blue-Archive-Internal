#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine::Animations::Rigging { class Rig; }

#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_RIG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_JOBS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int IRigLayer_TypeDefinitionIndex = 37170;

	class IRigLayer : public Il2CppObject
	{
	public:
		::System::Boolean Initialize(::UnityEngine::Animator* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_RESET_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_UPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::Rigging::Rig* get_rig()
		{
			return (return (::UnityEngine::Animations::Rigging::Rig*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_RIG_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_jobs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_JOBS_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_ISVALID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_constraints()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGLAYER_GET_CONSTRAINTS_OFFSET))(nullptr);
		}

	};
}

