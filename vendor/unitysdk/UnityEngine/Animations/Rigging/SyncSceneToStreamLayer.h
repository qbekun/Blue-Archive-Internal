#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations { class IAnimationJob; }
namespace UnityEngine::Animations::Rigging { class IAnimationJobData; }
namespace UnityEngine { class Animator; }

#define UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_RESET_OFFSET UNITYSDK_OFFSET(0x9E26780)
#define UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E2B300)
#define UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E27190)
#define UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9E2B310)
#define UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E26570)
#define UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9E27680)
#define UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9E248A0)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int SyncSceneToStreamLayer_TypeDefinitionIndex = 37183;

	class SyncSceneToStreamLayer : public Il2CppObject
	{
	public:
		::System::Boolean _isInitialized_k__BackingField; // 0x10
		::UnityEngine::Animations::IAnimationJob* job; // 0x18
		::UnityEngine::Animations::Rigging::IAnimationJobData* m_Data; // 0x20
		Il2CppObject* m_RigIndices; // 0x28

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_isInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Boolean Initialize(::UnityEngine::Animator* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animator*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_isInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_ISVALID_OFFSET))(nullptr);
		}

		::System::Void Update(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_SYNCSCENETOSTREAMLAYER_UPDATE_OFFSET))(arg, nullptr);
		}

	};
}

