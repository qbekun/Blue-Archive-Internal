#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Coroutine; }

#define UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_ONCLICKSELECT_OFFSET UNITYSDK_OFFSET(0x26A34D0)
#define UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A3A70)
#define UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_GETUNLOCKANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x26A3430)
#define UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26A3AB0)
#define UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_WAIT_OFFSET UNITYSDK_OFFSET(0x26A3AF0)
#define UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_GET_FLOORNUMBER_OFFSET UNITYSDK_OFFSET(0x26A39F0)
#define UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26A3B80)
#define UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26A3CC0)

	inline static constexpr unsigned int UIMultiFloorRaidFloorScrollViewElement_TypeDefinitionIndex = 6850;

	class UIMultiFloorRaidFloorScrollViewElement : public ::System::Xml::XPath::XPathExpression
	{
	public:
		::UnityEngine::Animation* UnlockAnimation; // 0x28
		::UnityEngine::GameObject* LockCover; // 0x30
		MXButton* selectButton; // 0x38
		::Il2CppArray<::System::Object*>* FloorNumberLabels; // 0x40
		::UnityEngine::GameObject* NormalObject; // 0x48
		::UnityEngine::GameObject* NormalObject_Clear; // 0x50
		::UnityEngine::GameObject* SelectObject; // 0x58
		::UnityEngine::GameObject* ClearMark; // 0x60
		::UnityEngine::Coroutine* waitCoroutine; // 0x68
		::System::String* unlockAniName; // 0x0

		::System::Void OnClickSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_ONCLICKSELECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Single GetUnlockAnimationLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_GETUNLOCKANIMATIONLENGTH_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Wait(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_WAIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_floorNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_GET_FLOORNUMBER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDFLOORSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

