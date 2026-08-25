#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::TableBoard { class TBGHexaObjectDB; }
class ShaderBaseAnimationData;
namespace UnityEngine { class Transform; }

#define TBGENCOUNTERVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x208C000)
#define TBGENCOUNTERVISUAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x208C400)
#define TBGENCOUNTERVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x208C440)
#define TBGENCOUNTERVISUAL_SHOW_OFFSET UNITYSDK_OFFSET(0x208C590)
#define TBGENCOUNTERVISUAL_HIDE_OFFSET UNITYSDK_OFFSET(0x208C6D0)
#define TBGENCOUNTERVISUAL_SETLAYER_OFFSET UNITYSDK_OFFSET(0x208C800)
#define TBGENCOUNTERVISUAL_SETLAYER_OFFSET UNITYSDK_OFFSET(0x208C910)
#define TBGENCOUNTERVISUAL_GETSHADERANIMATIONMATLIST_OFFSET UNITYSDK_OFFSET(0x208C110)
#define TBGENCOUNTERVISUAL_SETTREASUREBOXLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x208CA00)
#define TBGENCOUNTERVISUAL_SETTREASUREBOXFXSTATE_OFFSET UNITYSDK_OFFSET(0x208CAC0)
#define TBGENCOUNTERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x208CB80)

	inline static constexpr unsigned int TBGEncounterVisual_TypeDefinitionIndex = 3472;

	class TBGEncounterVisual : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* lockObject; // 0x18
		::UnityEngine::GameObject* openObject; // 0x20
		::UnityEngine::GameObject* normalFx; // 0x28
		::UnityEngine::GameObject* specialFx; // 0x30
		::MX::TableBoard::TBGHexaObjectDB* Data; // 0x38
		Il2CppObject* renderers; // 0x40
		::Il2CppArray<::System::Object*>* shaderAnimationMats; // 0x48
		ShaderBaseAnimationData* showAni; // 0x50
		ShaderBaseAnimationData* hideAni; // 0x58
		::System::Action* onEnable; // 0x60

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Show(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void Hide(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_HIDE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_SETLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayer(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_SETLAYER_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetShaderAnimationMatList(Il2CppObject* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_GETSHADERANIMATIONMATLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetTreasureBoxLockState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_SETTREASUREBOXLOCKSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTreasureBoxFxState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_SETTREASUREBOXFXSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGENCOUNTERVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

