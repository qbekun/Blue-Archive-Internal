#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define UIINTERACTIVEWORLDRAIDCARRIERCORE_SHOW_OFFSET UNITYSDK_OFFSET(0x2611B60)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_PLAYAPPEARFX_OFFSET UNITYSDK_OFFSET(0x2611BD0)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_STARTMANUALROTATION_OFFSET UNITYSDK_OFFSET(0x2611CA0)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_UPDATE_OFFSET UNITYSDK_OFFSET(0x2611D30)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_ADD_MANUALROTATIONUPDATED_OFFSET UNITYSDK_OFFSET(0x2612130)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26121D0)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_CO_ROTATETOWARDSCREEN_OFFSET UNITYSDK_OFFSET(0x26121F0)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_ADD_ROTATEFINISHED_OFFSET UNITYSDK_OFFSET(0x2612280)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_ADD_MANUALROTATIONFINISHED_OFFSET UNITYSDK_OFFSET(0x2612320)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x26123C0)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_REMOVE_MANUALROTATIONUPDATED_OFFSET UNITYSDK_OFFSET(0x26124D0)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_STOPMANUALROTATION_OFFSET UNITYSDK_OFFSET(0x2612020)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_ROTATETOWARDSCREEN_OFFSET UNITYSDK_OFFSET(0x2612570)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_APPLYMANUALROTATION_OFFSET UNITYSDK_OFFSET(0x2612040)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_REMOVE_MANUALROTATIONFINISHED_OFFSET UNITYSDK_OFFSET(0x26127C0)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_UPDATEMANUALROTATION_OFFSET UNITYSDK_OFFSET(0x2611DA0)
#define UIINTERACTIVEWORLDRAIDCARRIERCORE_REMOVE_ROTATEFINISHED_OFFSET UNITYSDK_OFFSET(0x2612860)

	inline static constexpr unsigned int UIInteractiveWorldRaidCarrierCore_TypeDefinitionIndex = 6503;

	class UIInteractiveWorldRaidCarrierCore : public Il2CppObject
	{
	public:
		Il2CppObject* RotateFinished; // 0x18
		Il2CppObject* ManualRotationUpdated; // 0x20
		::System::Action* ManualRotationFinished; // 0x28
		::Il2CppArray<::System::Object*>* elements; // 0x30
		::System::Single rotateDuration; // 0x38
		::System::Single manualRotateSpeed; // 0x3C
		::System::Int32 _coreLevel; // 0x40
		::System::Boolean _isInManualRotation; // 0x44
		::UnityEngine::Vector2* _lastInputPosition; // 0x48
		::UnityEngine::Vector2* _rotationVelocity; // 0x50
		::UnityEngine::Vector3* _targetEulerRotation; // 0x58
		::UnityEngine::Quaternion* _targetRotation; // 0x64

		::System::Void Show(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAppearFx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_PLAYAPPEARFX_OFFSET))(nullptr);
		}

		::System::Void StartManualRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_STARTMANUALROTATION_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void add_ManualRotationUpdated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_ADD_MANUALROTATIONUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RotateTowardScreen()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_CO_ROTATETOWARDSCREEN_OFFSET))(nullptr);
		}

		::System::Void add_RotateFinished(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_ADD_ROTATEFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void add_ManualRotationFinished(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_ADD_MANUALROTATIONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_GET_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void remove_ManualRotationUpdated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_REMOVE_MANUALROTATIONUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void StopManualRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_STOPMANUALROTATION_OFFSET))(nullptr);
		}

		::System::Void RotateTowardScreen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_ROTATETOWARDSCREEN_OFFSET))(nullptr);
		}

		::System::Void ApplyManualRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_APPLYMANUALROTATION_OFFSET))(nullptr);
		}

		::System::Void remove_ManualRotationFinished(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_REMOVE_MANUALROTATIONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateManualRotation(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_UPDATEMANUALROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_RotateFinished(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDCARRIERCORE_REMOVE_ROTATEFINISHED_OFFSET))(arg, nullptr);
		}

	};

