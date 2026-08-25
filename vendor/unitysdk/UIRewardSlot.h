#pragma once
#include "unitysdk.h"

class UIRewardInfo;
namespace UnityEngine { class Vector3; }
class UIWrapContent;
namespace UnityEngine { class Animation; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class RewardTag; }
namespace UnityEngine { class GameObject; }

#define UIREWARDSLOT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x27B87D0)
#define UIREWARDSLOT_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x27B8860)
#define UIREWARDSLOT_GET_ANIMATIONPLAYED_OFFSET UNITYSDK_OFFSET(0x27B88F0)
#define UIREWARDSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x27B8940)
#define UIREWARDSLOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27B8A70)
#define UIREWARDSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27B5C90)
#define UIREWARDSLOT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27B8BC0)
#define UIREWARDSLOT_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x27B7BB0)
#define UIREWARDSLOT_REFRESH_OFFSET UNITYSDK_OFFSET(0x27B75F0)
#define UIREWARDSLOT_REFRESH_OFFSET UNITYSDK_OFFSET(0x27B8C00)
#define UIREWARDSLOT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x27B8AD0)
#define UIREWARDSLOT_FILLREWARD_OFFSET UNITYSDK_OFFSET(0x27B8BE0)
#define UIREWARDSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B8EA0)

	inline static constexpr unsigned int UIRewardSlot_TypeDefinitionIndex = 7539;

	class UIRewardSlot : public Il2CppObject
	{
	public:
		UIRewardInfo* RewardInfo; // 0x18
		Il2CppObject* parcels; // 0x20
		::UnityEngine::Vector3* initialLocalPosition; // 0x28
		UIWrapContent* _parent; // 0x38
		::System::Int32 scrollIndex; // 0x40
		::UnityEngine::Animation* anim; // 0x48
		Il2CppObject* playedIndex; // 0x50

		UIWrapContent* get_parent()
		{
			return ((UIWrapContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_GET_PARENT_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_Anim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_GET_ANIM_OFFSET))(nullptr);
		}

		::System::Boolean get_AnimationPlayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_GET_ANIMATIONPLAYED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::Parcel::ParcelInfo* arg, ::FlatData::RewardTag* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_RESETPOSITION_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Refresh(::UnityEngine::GameObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_REFRESH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_PLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void FillReward(::MX::GameLogic::Parcel::ParcelInfo* arg, ::FlatData::RewardTag* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_FILLREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

