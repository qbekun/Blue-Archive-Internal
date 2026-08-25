#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UIWidget;
class UILabel;
class UIEmblemParcel;
class UITexture;
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Material; }
class PortraitSpineCharacter;
namespace MX::GameLogic::DBModel { class FriendIdCardDB; }

#define UIIDCARDOBJECT__SETMYIDCARD_G__DESTROYEXISTINGSPINE|21_1_OFFSET UNITYSDK_OFFSET(0x25779E0)
#define UIIDCARDOBJECT_SETASPOPUP_OFFSET UNITYSDK_OFFSET(0x2575500)
#define UIIDCARDOBJECT_SETEMBLEM_OFFSET UNITYSDK_OFFSET(0x2577B80)
#define UIIDCARDOBJECT_SETMYIDCARD_OFFSET UNITYSDK_OFFSET(0x2575660)
#define UIIDCARDOBJECT__SETMYIDCARD_B__21_0_OFFSET UNITYSDK_OFFSET(0x2577D30)
#define UIIDCARDOBJECT_SETSPINESTENCIL_OFFSET UNITYSDK_OFFSET(0x2577AA0)
#define UIIDCARDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2577D80)
#define UIIDCARDOBJECT_SETMULTIFLOORRAIDCLEAREDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x2577BB0)

	inline static constexpr unsigned int UIIdCardObject_TypeDefinitionIndex = 6176;

	class UIIdCardObject : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* spinePos; // 0x18
		UIWidget* spineRenderqueueTarget; // 0x20
		UILabel* studentName; // 0x28
		UILabel* userName; // 0x30
		UILabel* level; // 0x38
		UIEmblemParcel* emblemParcel; // 0x40
		UILabel* friendCode; // 0x48
		UILabel* comment; // 0x50
		UITexture* raidRankingIcon; // 0x58
		UILabel* raidRankingLabel; // 0x60
		UITexture* eliminateRaidRankingIcon; // 0x68
		UILabel* eliminateRaidRankingLabel; // 0x70
		UITexture* arenaRankingIcon; // 0x78
		UILabel* arenaRankingLabel; // 0x80
		UILabel* multiFloorRaidClearedDifficultyLabel; // 0x88
		UITexture* background; // 0x90
		::UnityEngine::Renderer* spineMaskRenderer; // 0x98
		::UnityEngine::Material* defaultIdCardMaterial; // 0xA0
		::UnityEngine::Material* popupIdCardMaterial; // 0xA8
		PortraitSpineCharacter* spineCharacter; // 0xB0

		::System::Void _SetMyIdCard_g__DestroyExistingSpine|21_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDOBJECT__SETMYIDCARD_G__DESTROYEXISTINGSPINE|21_1_OFFSET))(nullptr);
		}

		::System::Void SetAsPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDOBJECT_SETASPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmblem(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDOBJECT_SETEMBLEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetMyIdCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDOBJECT_SETMYIDCARD_OFFSET))(nullptr);
		}

		::System::Void _SetMyIdCard_b__21_0(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDOBJECT__SETMYIDCARD_B__21_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpineStencil()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDOBJECT_SETSPINESTENCIL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetMultiFloorRaidClearedDifficulty(::MX::GameLogic::DBModel::FriendIdCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendIdCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDOBJECT_SETMULTIFLOORRAIDCLEAREDDIFFICULTY_OFFSET))(arg, nullptr);
		}

	};

