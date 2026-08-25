#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }

#define ANIMATIONEVENTRECEIVERWITHBONES_ANIEVT_DISABLETURRETROTATION_OFFSET UNITYSDK_OFFSET(0x20B0BA0)
#define ANIMATIONEVENTRECEIVERWITHBONES_GETCHILDCHARACTERRENDERER_OFFSET UNITYSDK_OFFSET(0x20B0C40)
#define ANIMATIONEVENTRECEIVERWITHBONES_ANIEVT_ENABLETURRETROTATION_OFFSET UNITYSDK_OFFSET(0x20B0D30)
#define ANIMATIONEVENTRECEIVERWITHBONES_REFRESHCACHEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x20B0DD0)
#define ANIMATIONEVENTRECEIVERWITHBONES_ANIEVT_INSTANTIATEFX_OFFSET UNITYSDK_OFFSET(0x20B1070)
#define ANIMATIONEVENTRECEIVERWITHBONES_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B1750)
#define ANIMATIONEVENTRECEIVERWITHBONES_FOREACHCHARACTERRENDERER_OFFSET UNITYSDK_OFFSET(0x20B0F10)

	inline static constexpr unsigned int AnimationEventReceiverWithBones_TypeDefinitionIndex = 3579;

	class AnimationEventReceiverWithBones : public ::UnityEngine::Animations::TransformSceneHandle
	{
	public:
		::Il2CppArray<::System::Object*>* fxParentBones; // 0x30

		::System::Void AniEvt_DisableTurretRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVERWITHBONES_ANIEVT_DISABLETURRETROTATION_OFFSET))(nullptr);
		}

		::UnityEngine::Renderer* GetChildCharacterRenderer(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::Renderer*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVERWITHBONES_GETCHILDCHARACTERRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void AniEvt_EnableTurretRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVERWITHBONES_ANIEVT_ENABLETURRETROTATION_OFFSET))(nullptr);
		}

		::System::Void RefreshCachedRenderers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVERWITHBONES_REFRESHCACHEDRENDERERS_OFFSET))(nullptr);
		}

		::System::Void AniEvt_InstantiateFx(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVERWITHBONES_ANIEVT_INSTANTIATEFX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVERWITHBONES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ForeachCharacterRenderer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONEVENTRECEIVERWITHBONES_FOREACHCHARACTERRENDERER_OFFSET))(arg, nullptr);
		}

	};

