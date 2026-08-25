#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class ControlFxInstanceInfoBase;
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
class InstantiateFxInfoBase;

#define CHARACTERANIMATIONEVENTRECEIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10B0E90)
#define CHARACTERANIMATIONEVENTRECEIVER_INSTANTIATEFX_OFFSET UNITYSDK_OFFSET(0x10B0EC0)
#define CHARACTERANIMATIONEVENTRECEIVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10B15A0)
#define CHARACTERANIMATIONEVENTRECEIVER_CONTROLFXWITHINFO_OFFSET UNITYSDK_OFFSET(0x10B1790)
#define CHARACTERANIMATIONEVENTRECEIVER_REFRESHMAINRENDERERSARRAY_OFFSET UNITYSDK_OFFSET(0x10B1810)
#define CHARACTERANIMATIONEVENTRECEIVER_GETCHILDCHARACTERRENDERER_OFFSET UNITYSDK_OFFSET(0x10B1AB0)
#define CHARACTERANIMATIONEVENTRECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B1BA0)
#define CHARACTERANIMATIONEVENTRECEIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10B1CC0)
#define CHARACTERANIMATIONEVENTRECEIVER_ENABLESHADOWS_OFFSET UNITYSDK_OFFSET(0x10B1D60)
#define CHARACTERANIMATIONEVENTRECEIVER_FOREACHCHARACTERRENDERER_OFFSET UNITYSDK_OFFSET(0x10B1950)
#define CHARACTERANIMATIONEVENTRECEIVER_INSTANTIATEFXWITHINFO_OFFSET UNITYSDK_OFFSET(0x10B1DB0)
#define CHARACTERANIMATIONEVENTRECEIVER_DISABLESHADOWS_OFFSET UNITYSDK_OFFSET(0x10B1F00)
#define CHARACTERANIMATIONEVENTRECEIVER_DISABLEDITHERLINES_OFFSET UNITYSDK_OFFSET(0x10B1F50)
#define CHARACTERANIMATIONEVENTRECEIVER_ENABLEDITHERLINES_OFFSET UNITYSDK_OFFSET(0x10B2050)

	inline static constexpr unsigned int CharacterAnimationEventReceiver_TypeDefinitionIndex = 912;

	class CharacterAnimationEventReceiver : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* fxParentBones; // 0x40
		Il2CppObject* ComplexFxInstanceList; // 0x48
		::Il2CppArray<::System::Object*>* mainRenderers; // 0x50

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void InstantiateFx(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_INSTANTIATEFX_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ControlFxWithInfo(ControlFxInstanceInfoBase* arg)
		{
			((::System::Void(*)(ControlFxInstanceInfoBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_CONTROLFXWITHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMainRenderersArray()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_REFRESHMAINRENDERERSARRAY_OFFSET))(nullptr);
		}

		::UnityEngine::Renderer* GetChildCharacterRenderer(::UnityEngine::Transform* arg)
		{
			return ((::UnityEngine::Renderer*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_GETCHILDCHARACTERRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void EnableShadows()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_ENABLESHADOWS_OFFSET))(nullptr);
		}

		::System::Void ForeachCharacterRenderer(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_FOREACHCHARACTERRENDERER_OFFSET))(arg, nullptr);
		}

		::System::Void InstantiateFxWithInfo(InstantiateFxInfoBase* arg)
		{
			((::System::Void(*)(InstantiateFxInfoBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_INSTANTIATEFXWITHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void DisableShadows()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_DISABLESHADOWS_OFFSET))(nullptr);
		}

		::System::Void DisableDitherLines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_DISABLEDITHERLINES_OFFSET))(nullptr);
		}

		::System::Void EnableDitherLines()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERANIMATIONEVENTRECEIVER_ENABLEDITHERLINES_OFFSET))(nullptr);
		}

	};

