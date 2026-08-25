#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class RigSyncSceneToStreamJob; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigSyncSceneToStreamJobBinder`1_TypeDefinitionIndex = 37161;

	class RigSyncSceneToStreamJobBinder`1 : public ::FlatData::CouponStuffExcel
	{
	public:
		::Il2CppArray<::System::Object*>* s_PropertyElementNames; // 0x0

		::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob* Create(::UnityEngine::Animator* arg, Il2CppObject&* arg, ::UnityEngine::Component* arg)
		{
			return (return (::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob*(*)(::UnityEngine::Animator*, Il2CppObject&*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Destroy(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGSYNCSCENETOSTREAMJOBBINDER`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

