#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Logic::Battles { class O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39; }
namespace UnityEngine { class GameObject; }
namespace FlatData { class BulletTimeType; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class KeyCode; }
namespace MX::Visual::Battles::SkillRange { class SkillGuide; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Vector3; }

#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GET_GUIDE_OFFSET UNITYSDK_OFFSET(0x1D80D00)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_ISOVERCANUSEAREA_OFFSET UNITYSDK_OFFSET(0x1D80D20)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_CLEARFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1D81D60)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_TRYFIRESKILLANDENDBULLETTIME_OFFSET UNITYSDK_OFFSET(0x1D81D70)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_CANUSEINPUT_OFFSET UNITYSDK_OFFSET(0x1D825A0)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_ISOVERUI_OFFSET UNITYSDK_OFFSET(0x1D82850)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D82D00)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GET_TEMPORARYCANUSESKILLAREAS_OFFSET UNITYSDK_OFFSET(0x1D83CC0)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SET_LASTSKILLUSERFRAME_OFFSET UNITYSDK_OFFSET(0x1D83CD0)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SYNCTEMPORARYAREAVISUALS_OFFSET UNITYSDK_OFFSET(0x1D83D10)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GET_LASTSKILLUSERFRAME_OFFSET UNITYSDK_OFFSET(0x1D84230)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SET_GUIDE_OFFSET UNITYSDK_OFFSET(0x1D83310)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SHOULDENDBULLETTIME_OFFSET UNITYSDK_OFFSET(0x1D84270)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GET_SELECTEDSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1D84430)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS__.CTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1D84440)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_ENDBULLETTIME_OFFSET UNITYSDK_OFFSET(0x1D82AE0)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS__.CTOR_B__34_2_OFFSET UNITYSDK_OFFSET(0x1D84450)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_UPDATEPROCESS_OFFSET UNITYSDK_OFFSET(0x1D84460)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_UPDATEGUIDETOWARDINPUT_OFFSET UNITYSDK_OFFSET(0x1D85CF0)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_TARGETSIDECHECK_OFFSET UNITYSDK_OFFSET(0x1D81AD0)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SET_SELECTEDSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x1D84EA0)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GETPARSESKILLCARDTYPE_OFFSET UNITYSDK_OFFSET(0x1D83290)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GETNEXTTARGETINDIRECTION_OFFSET UNITYSDK_OFFSET(0x1D859D0)
#define MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS__.CTOR_B__34_1_OFFSET UNITYSDK_OFFSET(0x1D866F0)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int SkillBulletTimeProcess_TypeDefinitionIndex = 20342;

	class SkillBulletTimeProcess : public Il2CppObject
	{
	public:
		::System::String* TagSkillTouchDefender; // 0x0
		::System::String* TagIgnoreTouchDefender; // 0x0
		::System::String* TagUISkillCard; // 0x0
		::System::String* TagCanNotUseSkillPoint; // 0x0
		::System::String* ResourcePathCanUseSkillAreaVisual; // 0x0
		::System::String* ToastKeyInvalidTarget; // 0x0
		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* skillCard; // 0x10
		MXBattleTask* battleTask; // 0x18
		AsyncSkillGuideHandler* skillGuideHandler; // 0x20
		::System::Boolean isCheckCanUseSkillPoint; // 0x28
		::MX::Logic::Battles::O6258293a6fdb8d9d3ceab40a511b1305e11a635a155aab54997aa5321b5e4a39* skillCardManager; // 0x30
		::System::Boolean isPressed; // 0x38
		::System::Int32 selectedSkillIndex; // 0x3C
		Il2CppObject* temporaryCanUseSkillAreas; // 0x40
		Il2CppObject* currentTemporaryCanUseSkillAreaVisuals; // 0x48
		::UnityEngine::GameObject* temporaryCanUseSkillAreaResource; // 0x50
		::FlatData::BulletTimeType* curBulletTimeSkillCardType; // 0x58
		::System::Boolean _isPressedKeyboard; // 0x5C
		::System::Boolean _isFocusedTarget; // 0x5D
		::MX::Logic::BattleEntities::BattleEntity* _keyboardSelectedTarget; // 0x60
		::MX::Logic::BattleEntities::BattleEntity* _previousSelectedTarget; // 0x68
		::UnityEngine::Vector2* _lastKeyboardDirection; // 0x70
		::System::DateTime* _lastUpdateFocusTime; // 0x78
		::System::Single _updatePosSec; // 0x80
		::UnityEngine::KeyCode* _keyCode; // 0x84
		::System::Int32 _LastSkillUserFrame_k__BackingField; // 0x0

		::MX::Visual::Battles::SkillRange::SkillGuide* get_Guide()
		{
			return (return (::MX::Visual::Battles::SkillRange::SkillGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GET_GUIDE_OFFSET))(nullptr);
		}

		::System::Boolean IsOverCanUseArea(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_ISOVERCANUSEAREA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearFollowTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_CLEARFOLLOWTARGET_OFFSET))(nullptr);
		}

		::System::Void TryFireSkillAndEndBulletTime(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_TRYFIRESKILLANDENDBULLETTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanUseInput(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_CANUSEINPUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsOverUI(OverUIResult&* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(OverUIResult&*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_ISOVERUI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_TemporaryCanUseSkillAreas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GET_TEMPORARYCANUSESKILLAREAS_OFFSET))(nullptr);
		}

		::System::Void set_LastSkillUserFrame(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SET_LASTSKILLUSERFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void SyncTemporaryAreaVisuals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SYNCTEMPORARYAREAVISUALS_OFFSET))(nullptr);
		}

		::System::Int32 get_LastSkillUserFrame()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GET_LASTSKILLUSERFRAME_OFFSET))(nullptr);
		}

		::System::Void set_Guide(::MX::Visual::Battles::SkillRange::SkillGuide* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SET_GUIDE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldEndBulletTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SHOULDENDBULLETTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectedSkillIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GET_SELECTEDSKILLINDEX_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__34_0(::MX::Visual::Battles::SkillRange::SkillGuide* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS__.CTOR_B__34_0_OFFSET))(arg, nullptr);
		}

		::System::Void EndBulletTime(::System::Boolean arg, ::FlatData::BulletTimeType* arg)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::BulletTimeType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_ENDBULLETTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _.ctor_b__34_2(::MX::Visual::Battles::SkillRange::SkillGuide* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS__.CTOR_B__34_2_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateProcess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_UPDATEPROCESS_OFFSET))(nullptr);
		}

		::System::Void UpdateGuideTowardInput(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_UPDATEGUIDETOWARDINPUT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TargetSideCheck(::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_TARGETSIDECHECK_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectedSkillIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_SET_SELECTEDSKILLINDEX_OFFSET))(arg, nullptr);
		}

		::FlatData::BulletTimeType* GetParseSkillCardType(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* arg)
		{
			return (return (::FlatData::BulletTimeType*(*)(::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GETPARSESKILLCARDTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* GetNextTargetInDirection(Il2CppObject* arg, ::UnityEngine::Vector2* arg, ::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return (return (::MX::Logic::BattleEntities::BattleEntity*(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS_GETNEXTTARGETINDIRECTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void _.ctor_b__34_1(::MX::Visual::Battles::SkillRange::SkillGuide* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuide*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLBULLETTIMEPROCESS__.CTOR_B__34_1_OFFSET))(arg, nullptr);
		}

	};
}

