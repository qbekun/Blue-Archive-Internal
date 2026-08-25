#pragma once
#include "unitysdk.h"

class CafeFurnitureLoader;
class UICafe;
class CafeInputState;
namespace UnityEngine { class Vector2; }
namespace FlatData { class FurnitureLocation; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define CAFEINPUTHANDLER_SET_SELECTEDFURNITURE_OFFSET UNITYSDK_OFFSET(0x19C2BA0)
#define CAFEINPUTHANDLER_GET_CANTRANSLATECAMERA_OFFSET UNITYSDK_OFFSET(0x19ABB40)
#define CAFEINPUTHANDLER_GET_SELECTEDFURNITURE_OFFSET UNITYSDK_OFFSET(0x19C2E10)
#define CAFEINPUTHANDLER_HANDLETRYFURNITUREPLACEMESSAGE_OFFSET UNITYSDK_OFFSET(0x19C2E20)
#define CAFEINPUTHANDLER_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x19C2F50)
#define CAFEINPUTHANDLER_REFRESHEDITCONTROL_OFFSET UNITYSDK_OFFSET(0x19C2C30)
#define CAFEINPUTHANDLER_TRYGETINPUTPOSITIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19C3D30)
#define CAFEINPUTHANDLER_CANCELEDIT_OFFSET UNITYSDK_OFFSET(0x19C42D0)
#define CAFEINPUTHANDLER_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x19C44E0)
#define CAFEINPUTHANDLER_ISTEMPORARYFURNITURE_OFFSET UNITYSDK_OFFSET(0x19C44F0)
#define CAFEINPUTHANDLER_HANDLECAFEREMOVEFURNITURERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x19C4570)
#define CAFEINPUTHANDLER_GET_ISMOVINGFURNITURE_OFFSET UNITYSDK_OFFSET(0x19C4880)
#define CAFEINPUTHANDLER_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x19C4890)
#define CAFEINPUTHANDLER_SETINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x19C48A0)
#define CAFEINPUTHANDLER_CANROTATE_OFFSET UNITYSDK_OFFSET(0x19C4960)
#define CAFEINPUTHANDLER_SET_ISMOVINGFURNITURE_OFFSET UNITYSDK_OFFSET(0x19C49E0)
#define CAFEINPUTHANDLER_ROTATEFURNITURE_OFFSET UNITYSDK_OFFSET(0x19C49F0)
#define CAFEINPUTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C4B00)
#define CAFEINPUTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C4BC0)
#define CAFEINPUTHANDLER_TRYDEPLOYFURNITUREFROMINVENTORY_OFFSET UNITYSDK_OFFSET(0x19C2EA0)
#define CAFEINPUTHANDLER_SET_PRESSEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19C4C30)
#define CAFEINPUTHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19C4C40)
#define CAFEINPUTHANDLER_HANDLECAFEDEPLOYRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x19C4F30)
#define CAFEINPUTHANDLER_GET_SELECTFURNITUREFROMINVENTORY_OFFSET UNITYSDK_OFFSET(0x19C5130)
#define CAFEINPUTHANDLER_GET_UICAFE_OFFSET UNITYSDK_OFFSET(0x19C2D30)
#define CAFEINPUTHANDLER__GETINPUTPOSITIONHITS_G__FINDNEARESTANDADD|34_0_OFFSET UNITYSDK_OFFSET(0x19C5140)
#define CAFEINPUTHANDLER_REMOVESELECTEDFURNITURE_OFFSET UNITYSDK_OFFSET(0x19C5410)
#define CAFEINPUTHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C5560)
#define CAFEINPUTHANDLER_ONCAMERADRAG_OFFSET UNITYSDK_OFFSET(0x19ABBD0)
#define CAFEINPUTHANDLER_TOGGLEEDITMODE_OFFSET UNITYSDK_OFFSET(0x19C57E0)
#define CAFEINPUTHANDLER_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0x19C5AE0)
#define CAFEINPUTHANDLER_GETSELECTEDFURNITURENAME_OFFSET UNITYSDK_OFFSET(0x19C4250)
#define CAFEINPUTHANDLER_GET_PRESSEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19C5B60)
#define CAFEINPUTHANDLER_SET_SELECTFURNITUREFROMINVENTORY_OFFSET UNITYSDK_OFFSET(0x19C5B70)
#define CAFEINPUTHANDLER_HANDLECAFERELOCATERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x19C5B80)
#define CAFEINPUTHANDLER_GETINPUTPOSITIONHITS_OFFSET UNITYSDK_OFFSET(0x19C3F00)
#define CAFEINPUTHANDLER_ONCONFIRMEDIT_OFFSET UNITYSDK_OFFSET(0x19C5C60)
#define CAFEINPUTHANDLER__TRYDEPLOYFURNITUREFROMINVENTORY_B__47_0_OFFSET UNITYSDK_OFFSET(0x19C5EB0)

	inline static constexpr unsigned int CafeInputHandler_TypeDefinitionIndex = 1387;

	class CafeInputHandler : public Il2CppObject
	{
	public:
		CafeFurnitureLoader* objectLoader; // 0x18
		UICafe* uiCafe; // 0x20
		CafeInputState* _CurrentState_k__BackingField; // 0x28
		::System::Int32 _PressedTransform_k__BackingField; // 0x2C
		::System::Int64 selectedFurniture; // 0x30
		::UnityEngine::Vector2* originalPosition; // 0x38
		::System::Single originalRotation; // 0x40
		::FlatData::FurnitureLocation* originalLocation; // 0x44
		::System::Boolean _SelectFurnitureFromInventory_k__BackingField; // 0x48
		::System::Boolean _IsMovingFurniture_k__BackingField; // 0x49

		::System::Void set_SelectedFurniture(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_SET_SELECTEDFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanTranslateCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_GET_CANTRANSLATECAMERA_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectedFurniture()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_GET_SELECTEDFURNITURE_OFFSET))(nullptr);
		}

		::System::Boolean HandleTryFurniturePlaceMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_HANDLETRYFURNITUREPLACEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_HANDLEINPUT_OFFSET))(nullptr);
		}

		::System::Void RefreshEditControl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_REFRESHEDITCONTROL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetInputPositionTransform(::UnityEngine::Transform&* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform&*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_TRYGETINPUTPOSITIONTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void CancelEdit(CafeInputState* arg)
		{
			((::System::Void(*)(CafeInputState*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_CANCELEDIT_OFFSET))(arg, nullptr);
		}

		CafeInputState* get_CurrentState()
		{
			return ((CafeInputState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Boolean IsTemporaryFurniture(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_ISTEMPORARYFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCafeRemoveFurnitureResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_HANDLECAFEREMOVEFURNITURERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMovingFurniture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_GET_ISMOVINGFURNITURE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentState(CafeInputState* arg)
		{
			((::System::Void(*)(CafeInputState*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_SET_CURRENTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetInputState(CafeInputState* arg)
		{
			((::System::Void(*)(CafeInputState*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_SETINPUTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanRotate(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_CANROTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsMovingFurniture(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_SET_ISMOVINGFURNITURE_OFFSET))(arg, nullptr);
		}

		::System::Void RotateFurniture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_ROTATEFURNITURE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void TryDeployFurnitureFromInventory(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_TRYDEPLOYFURNITUREFROMINVENTORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_PressedTransform(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_SET_PRESSEDTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean HandleCafeDeployResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_HANDLECAFEDEPLOYRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SelectFurnitureFromInventory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_GET_SELECTFURNITUREFROMINVENTORY_OFFSET))(nullptr);
		}

		UICafe* get_UICafe()
		{
			return ((UICafe*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_GET_UICAFE_OFFSET))(nullptr);
		}

		::System::Void _GetInputPositionHits_g__FindNearestAndAdd|34_0(Il2CppObject* arg, <>c__DisplayClass34_0&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, <>c__DisplayClass34_0&*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER__GETINPUTPOSITIONHITS_G__FINDNEARESTANDADD|34_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveSelectedFurniture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_REMOVESELECTEDFURNITURE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnCameraDrag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_ONCAMERADRAG_OFFSET))(nullptr);
		}

		::System::Void ToggleEditMode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_TOGGLEEDITMODE_OFFSET))(nullptr);
		}

		::System::Boolean IsInterior(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_ISINTERIOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetSelectedFurnitureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_GETSELECTEDFURNITURENAME_OFFSET))(nullptr);
		}

		::System::Int32 get_PressedTransform()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_GET_PRESSEDTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_SelectFurnitureFromInventory(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_SET_SELECTFURNITUREFROMINVENTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCafeRelocateResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_HANDLECAFERELOCATERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetInputPositionHits()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_GETINPUTPOSITIONHITS_OFFSET))(nullptr);
		}

		::System::Void OnConfirmEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER_ONCONFIRMEDIT_OFFSET))(nullptr);
		}

		::System::Void _TryDeployFurnitureFromInventory_b__47_0(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEINPUTHANDLER__TRYDEPLOYFURNITUREFROMINVENTORY_B__47_0_OFFSET))(arg, nullptr);
		}

	};

