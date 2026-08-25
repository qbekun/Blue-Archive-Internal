#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class MXButton;
class UIWidget;
namespace UnityEngine { class Coroutine; }
class FloatingUIPositionComponent;
namespace FlatData { class FurnitureFunctionType; }
class UIPopup_VideoPlay;

#define FUNCTIONALFURNITUREBUBBLE_SETACTIVEOBJECTPAIRS_OFFSET UNITYSDK_OFFSET(0x2261580)
#define FUNCTIONALFURNITUREBUBBLE_SET_FUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x2261620)
#define FUNCTIONALFURNITUREBUBBLE_SETEVENTCOLLECTION_OFFSET UNITYSDK_OFFSET(0x2261690)
#define FUNCTIONALFURNITUREBUBBLE_GET_FURNITUREID_OFFSET UNITYSDK_OFFSET(0x2261750)
#define FUNCTIONALFURNITUREBUBBLE_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2261760)
#define FUNCTIONALFURNITUREBUBBLE_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x2261770)
#define FUNCTIONALFURNITUREBUBBLE_GET_WIDGETTRANSLATOR_OFFSET UNITYSDK_OFFSET(0x22619C0)
#define FUNCTIONALFURNITUREBUBBLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2261A50)
#define FUNCTIONALFURNITUREBUBBLE_SET_FURNITUREID_OFFSET UNITYSDK_OFFSET(0x2261AA0)
#define FUNCTIONALFURNITUREBUBBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2261AB0)
#define FUNCTIONALFURNITUREBUBBLE_WAIT_OFFSET UNITYSDK_OFFSET(0x2261AC0)
#define FUNCTIONALFURNITUREBUBBLE_ONCLICKOPENUI_OFFSET UNITYSDK_OFFSET(0x2261B60)
#define FUNCTIONALFURNITUREBUBBLE_SETFUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x2261EF0)
#define FUNCTIONALFURNITUREBUBBLE_PLAY_OFFSET UNITYSDK_OFFSET(0x2261F60)
#define FUNCTIONALFURNITUREBUBBLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2262000)
#define FUNCTIONALFURNITUREBUBBLE_ONPLAYANIEND_OFFSET UNITYSDK_OFFSET(0x2262210)
#define FUNCTIONALFURNITUREBUBBLE_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x22622B0)
#define FUNCTIONALFURNITUREBUBBLE_SETORDERBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x22622C0)
#define FUNCTIONALFURNITUREBUBBLE_HIDE_OFFSET UNITYSDK_OFFSET(0x2261DA0)
#define FUNCTIONALFURNITUREBUBBLE_GET_FUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x2262430)
#define FUNCTIONALFURNITUREBUBBLE__ONCLICKOPENUI_B__31_0_OFFSET UNITYSDK_OFFSET(0x2262440)

	inline static constexpr unsigned int FunctionalFurnitureBubble_TypeDefinitionIndex = 4580;

	class FunctionalFurnitureBubble : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* myAnimation; // 0x18
		MXButton* openButton; // 0x20
		MXButton* closeButton; // 0x28
		::Il2CppArray<::System::Object*>* ObjectPairs; // 0x30
		UIWidget* Bg; // 0x38
		::UnityEngine::Coroutine* animationCoroutine; // 0x40
		FloatingUIPositionComponent* _widgetTranslator; // 0x48
		::FlatData::FurnitureFunctionType* _functionType; // 0x50
		Il2CppObject* eventContentId; // 0x58
		::System::Int64 _FurnitureId_k__BackingField; // 0x68
		::System::Int64 _ServerId_k__BackingField; // 0x70

		::System::Void SetActiveObjectPairs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_SETACTIVEOBJECTPAIRS_OFFSET))(nullptr);
		}

		::System::Void set_FunctionType(::FlatData::FurnitureFunctionType* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureFunctionType*, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_SET_FUNCTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEventCollection(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_SETEVENTCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FurnitureId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_GET_FURNITUREID_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void PlayAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		FloatingUIPositionComponent* get_widgetTranslator()
		{
			return ((FloatingUIPositionComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_GET_WIDGETTRANSLATOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_FurnitureId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_SET_FURNITUREID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Wait(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_WAIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_ONCLICKOPENUI_OFFSET))(nullptr);
		}

		::System::Void SetFunctionType(::FlatData::FurnitureFunctionType* arg)
		{
			((::System::Void(*)(::FlatData::FurnitureFunctionType*, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_SETFUNCTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_PLAY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnPlayAniEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_ONPLAYANIEND_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void SetOrderByDistance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_SETORDERBYDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_HIDE_OFFSET))(nullptr);
		}

		::FlatData::FurnitureFunctionType* get_FunctionType()
		{
			return ((::FlatData::FurnitureFunctionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE_GET_FUNCTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void _OnClickOpenUI_b__31_0(UIPopup_VideoPlay* arg)
		{
			((::System::Void(*)(UIPopup_VideoPlay*, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONALFURNITUREBUBBLE__ONCLICKOPENUI_B__31_0_OFFSET))(arg, nullptr);
		}

	};

