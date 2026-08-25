#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
class SpineRawPlayCommander;
namespace MX::GameLogic::DBModel { class EventContentCollectionDB; }
namespace UnityEngine { class AnimationState; }

#define UIEVENTCOLLECTIONBGOBJECT_GET_SCROLLANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x24A3390)
#define UIEVENTCOLLECTIONBGOBJECT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x24A33A0)
#define UIEVENTCOLLECTIONBGOBJECT_CO_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x24A33B0)
#define UIEVENTCOLLECTIONBGOBJECT_SET_ISUNLOCKANIMATIONSEEN_OFFSET UNITYSDK_OFFSET(0x24A3440)
#define UIEVENTCOLLECTIONBGOBJECT_SETUI_OFFSET UNITYSDK_OFFSET(0x24A03D0)
#define UIEVENTCOLLECTIONBGOBJECT__SETDATA_B__19_0_OFFSET UNITYSDK_OFFSET(0x24A3450)
#define UIEVENTCOLLECTIONBGOBJECT_GETRESETEDANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x24A3470)
#define UIEVENTCOLLECTIONBGOBJECT_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x24A3540)
#define UIEVENTCOLLECTIONBGOBJECT_GET_ISUNLOCKANIMATIONSEEN_OFFSET UNITYSDK_OFFSET(0x24A3550)
#define UIEVENTCOLLECTIONBGOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A3560)
#define UIEVENTCOLLECTIONBGOBJECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x249F9F0)
#define UIEVENTCOLLECTIONBGOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A3570)
#define UIEVENTCOLLECTIONBGOBJECT_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x24A36E0)
#define UIEVENTCOLLECTIONBGOBJECT_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x24A1C90)

	inline static constexpr unsigned int UIEventCollectionBGObject_TypeDefinitionIndex = 5791;

	class UIEventCollectionBGObject : public Il2CppObject
	{
	public:
		::System::Int64 uniqueId; // 0x18
		::UnityEngine::Animation* bgAnimation; // 0x20
		::UnityEngine::Transform* scrollAnchorPosition; // 0x28
		SpineRawPlayCommander* spinePlayCommander; // 0x30
		::Il2CppArray<::System::Object*>* animationClipNames; // 0x38
		::System::Int64 eventContentId; // 0x40
		::System::Boolean _IsOpened_k__BackingField; // 0x48
		::System::Boolean _IsUnlockAnimationSeen_k__BackingField; // 0x49

		::UnityEngine::Transform* get_ScrollAnchorPosition()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_GET_SCROLLANCHORPOSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayUnlockAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_CO_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void set_IsUnlockAnimationSeen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_SET_ISUNLOCKANIMATIONSEEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_SETUI_OFFSET))(nullptr);
		}

		::System::Boolean _SetData_b__19_0(::MX::GameLogic::DBModel::EventContentCollectionDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EventContentCollectionDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT__SETDATA_B__19_0_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationState* GetResetedAnimationState(::System::Int32 arg)
		{
			return ((::UnityEngine::AnimationState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_GETRESETEDANIMATIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_GET_ISOPENED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnlockAnimationSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_GET_ISUNLOCKANIMATIONSEEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_IsOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_SET_ISOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayUnlockAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONBGOBJECT_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

	};

