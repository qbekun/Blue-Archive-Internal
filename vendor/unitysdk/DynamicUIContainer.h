#pragma once
#include "unitysdk.h"

class DynamicUIContainerDirection;
class Pivot;
namespace UnityEngine { class Vector3; }
class DynamicUISlot;

#define DYNAMICUICONTAINER_UPDATE_OFFSET UNITYSDK_OFFSET(0x218CC30)
#define DYNAMICUICONTAINER_SLOTSSORT_OFFSET UNITYSDK_OFFSET(0x218D3B0)
#define DYNAMICUICONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x218D440)
#define DYNAMICUICONTAINER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x218D4D0)
#define DYNAMICUICONTAINER_GETNEWSLOTINITIALPOSITION_OFFSET UNITYSDK_OFFSET(0x218D600)
#define DYNAMICUICONTAINER_COTESTONOFF_OFFSET UNITYSDK_OFFSET(0x218D8B0)
#define DYNAMICUICONTAINER_REGISTER_OFFSET UNITYSDK_OFFSET(0x218D940)
#define DYNAMICUICONTAINER_HIGHPRIORITYFIRST_OFFSET UNITYSDK_OFFSET(0x218DCB0)
#define DYNAMICUICONTAINER_SLOTSCULL_OFFSET UNITYSDK_OFFSET(0x218CEB0)
#define DYNAMICUICONTAINER_SLOTSALIGNPIVOT_OFFSET UNITYSDK_OFFSET(0x218DBD0)
#define DYNAMICUICONTAINER_STARTMOVING_OFFSET UNITYSDK_OFFSET(0x218D550)
#define DYNAMICUICONTAINER_TESTONOFF_OFFSET UNITYSDK_OFFSET(0x218DF00)
#define DYNAMICUICONTAINER_CALCOFFSETANDSETPOSITION_OFFSET UNITYSDK_OFFSET(0x218DCF0)
#define DYNAMICUICONTAINER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x218E0D0)
#define DYNAMICUICONTAINER_GETNEWSLOTINITIALSCALE_OFFSET UNITYSDK_OFFSET(0x218DC60)
#define DYNAMICUICONTAINER_IMMEDIATEFINISHMOVING_OFFSET UNITYSDK_OFFSET(0x218CFD0)
#define DYNAMICUICONTAINER_EASEINOUT_OFFSET UNITYSDK_OFFSET(0x218D160)

	inline static constexpr unsigned int DynamicUIContainer_TypeDefinitionIndex = 4095;

	class DynamicUIContainer : public Il2CppObject
	{
	public:
		::System::Single _repositionDuration; // 0x18
		DynamicUIContainerDirection* _direction; // 0x1C
		Pivot* _slotPivot; // 0x20
		::System::Single _spacing; // 0x24
		Il2CppObject* _slots; // 0x28
		::System::Single _timeStartMove; // 0x30
		::System::Boolean _isMoving; // 0x34

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SlotsSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_SLOTSSORT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetNewSlotInitialPosition(DynamicUISlot* arg)
		{
			return ((::UnityEngine::Vector3*(*)(DynamicUISlot*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_GETNEWSLOTINITIALPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoTestOnOff()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_COTESTONOFF_OFFSET))(nullptr);
		}

		::System::Void Register(DynamicUISlot* arg)
		{
			((::System::Void(*)(DynamicUISlot*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Int32 HighPriorityFirst(DynamicUISlot* arg, DynamicUISlot* arg2)
		{
			return ((::System::Int32(*)(DynamicUISlot*, DynamicUISlot*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_HIGHPRIORITYFIRST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SlotsCull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_SLOTSCULL_OFFSET))(nullptr);
		}

		::System::Void SlotsAlignPivot(DynamicUISlot* arg)
		{
			((::System::Void(*)(DynamicUISlot*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_SLOTSALIGNPIVOT_OFFSET))(arg, nullptr);
		}

		::System::Void StartMoving(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_STARTMOVING_OFFSET))(arg, nullptr);
		}

		::System::Void TestOnOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_TESTONOFF_OFFSET))(nullptr);
		}

		::System::Void CalcOffsetAndSetPosition(::System::Int32 arg, float&* arg2)
		{
			((::System::Void(*)(::System::Int32, float&*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_CALCOFFSETANDSETPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Unregister(DynamicUISlot* arg)
		{
			((::System::Void(*)(DynamicUISlot*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_UNREGISTER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetNewSlotInitialScale()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_GETNEWSLOTINITIALSCALE_OFFSET))(nullptr);
		}

		::System::Void ImmediateFinishMoving()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_IMMEDIATEFINISHMOVING_OFFSET))(nullptr);
		}

		::System::Single EaseInOut(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUICONTAINER_EASEINOUT_OFFSET))(arg, nullptr);
		}

	};

