#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class Rig; }
namespace UnityEngine { class Animator; }

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9E276E0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_JOBS_OFFSET UNITYSDK_OFFSET(0x9E27740)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_RESET_OFFSET UNITYSDK_OFFSET(0x9E27750)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E27900)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_RIG_OFFSET UNITYSDK_OFFSET(0x9E279A0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x9E279B0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x9E279C0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9E279D0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E27B10)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E27FE0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E27FF0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigLayer_TypeDefinitionIndex = 37178;

	class RigLayer : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::Rigging::Rig* m_Rig; // 0x10
		::System::Boolean m_Active; // 0x18
		::Il2CppArray<::System::Object*>* m_Constraints; // 0x20
		::Il2CppArray<::System::Object*>* m_Jobs; // 0x28
		::System::Boolean _isInitialized_k__BackingField; // 0x30

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_ISVALID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_jobs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_JOBS_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_RESET_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_NAME_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::Rigging::Rig* get_rig()
		{
			return (return (::UnityEngine::Animations::Rigging::Rig*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_RIG_OFFSET))(nullptr);
		}

		::System::Boolean get_active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_ACTIVE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_constraints()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_CONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean Initialize(::UnityEngine::Animator* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_isInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGLAYER_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

	};
}

