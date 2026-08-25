#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaUnit; }
namespace UnityEngine { class Animator; }
class HexaUI;
class UICampaign;
class ShaderBaseAnimationData;
class ShaderPresetData;
class DynamicCharacter;
class Emoji;
namespace MX::Campaign { class HexaTile; }
namespace UnityEngine { class Transform; }
namespace FlatData { class EmojiEvent; }
class HexaUnitVisual;
namespace UnityEngine { class GameObject; }
class HexaTileVisual;
class UIType;
namespace MX::Campaign { class HexaTileMap; }

#define HEXAUNITVISUAL_GET_HEXAUI_OFFSET UNITYSDK_OFFSET(0xF82C20)
#define HEXAUNITVISUAL_GET_ENTERSTRATEGYANINAME_OFFSET UNITYSDK_OFFSET(0xF82C30)
#define HEXAUNITVISUAL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF82C40)
#define HEXAUNITVISUAL_PLAYIDLEONLYSTART_OFFSET UNITYSDK_OFFSET(0xF82DF0)
#define HEXAUNITVISUAL_PLAYHIDESHADERANI_OFFSET UNITYSDK_OFFSET(0xF82E40)
#define HEXAUNITVISUAL_COMOVE_OFFSET UNITYSDK_OFFSET(0xF82E90)
#define HEXAUNITVISUAL_PLAYSHOWSHADERANI_OFFSET UNITYSDK_OFFSET(0xF82F70)
#define HEXAUNITVISUAL_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xF82FC0)
#define HEXAUNITVISUAL_RESETDISABLEPRESET_OFFSET UNITYSDK_OFFSET(0xF76170)
#define HEXAUNITVISUAL_PLAYEMOJI_OFFSET UNITYSDK_OFFSET(0xF82FE0)
#define HEXAUNITVISUAL_COPLAYSHOWSHADERANI_OFFSET UNITYSDK_OFFSET(0xF73870)
#define HEXAUNITVISUAL_SETHEXAUNIT_OFFSET UNITYSDK_OFFSET(0xF7FDB0)
#define HEXAUNITVISUAL_COPLAYHIDESHADERANI_OFFSET UNITYSDK_OFFSET(0xF73D60)
#define HEXAUNITVISUAL_SET_ENTERSTRATEGYANINAME_OFFSET UNITYSDK_OFFSET(0xF83130)
#define HEXAUNITVISUAL_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0xF83140)
#define HEXAUNITVISUAL_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0xF83150)
#define HEXAUNITVISUAL_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0xF83210)
#define HEXAUNITVISUAL_PLAYPICKUP_OFFSET UNITYSDK_OFFSET(0xF832D0)
#define HEXAUNITVISUAL__MOVE_B__44_0_OFFSET UNITYSDK_OFFSET(0xF83390)
#define HEXAUNITVISUAL_START_OFFSET UNITYSDK_OFFSET(0xF833C0)
#define HEXAUNITVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0xF83480)
#define HEXAUNITVISUAL_SETFOG_OFFSET UNITYSDK_OFFSET(0xF80DD0)
#define HEXAUNITVISUAL_SETTACTICSKIPUI_OFFSET UNITYSDK_OFFSET(0xF83510)
#define HEXAUNITVISUAL_MOVE_OFFSET UNITYSDK_OFFSET(0xF83540)
#define HEXAUNITVISUAL_DESELECT_OFFSET UNITYSDK_OFFSET(0xF83620)
#define HEXAUNITVISUAL_COHIDEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xF836B0)
#define HEXAUNITVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF83750)
#define HEXAUNITVISUAL_SET_HEXAUI_OFFSET UNITYSDK_OFFSET(0xF83760)
#define HEXAUNITVISUAL_PLAYCAMPAIGNSTARTANI_OFFSET UNITYSDK_OFFSET(0xF83770)
#define HEXAUNITVISUAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF837D0)
#define HEXAUNITVISUAL_INITDATA_OFFSET UNITYSDK_OFFSET(0xF7FF40)
#define HEXAUNITVISUAL_APPLYDISABLEPRESET_OFFSET UNITYSDK_OFFSET(0xF762E0)
#define HEXAUNITVISUAL_SETTACTICREADYUI_OFFSET UNITYSDK_OFFSET(0xF837E0)
#define HEXAUNITVISUAL_PLAYIDLE_OFFSET UNITYSDK_OFFSET(0xF833D0)
#define HEXAUNITVISUAL_MAKETAGOBJECT_OFFSET UNITYSDK_OFFSET(0xF83840)
#define HEXAUNITVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xF83950)
#define HEXAUNITVISUAL_SETMOVEVISUAL_OFFSET UNITYSDK_OFFSET(0xF839A0)
#define HEXAUNITVISUAL_INITVISUAL_OFFSET UNITYSDK_OFFSET(0xF72660)
#define HEXAUNITVISUAL__COMOVE_B__45_0_OFFSET UNITYSDK_OFFSET(0xF83D20)

	inline static constexpr unsigned int HexaUnitVisual_TypeDefinitionIndex = 863;

	class HexaUnitVisual : public Il2CppObject
	{
	public:
		::System::String* AddressKey; // 0x18
		::System::Int64 LeaderServerId; // 0x20
		::System::Int64 FixedEchelonId; // 0x28
		::MX::Campaign::HexaUnit* Data; // 0x30
		::UnityEngine::Animator* ani; // 0x38
		HexaUI* _HexaUI_k__BackingField; // 0x40
		UICampaign* uiCampaign; // 0x48
		ShaderBaseAnimationData* hideAnimation; // 0x50
		ShaderBaseAnimationData* showAnimation; // 0x58
		ShaderPresetData* disablePreset; // 0x60
		Il2CppObject* propertyInfos; // 0x68
		::Il2CppArray<::System::Object*>* mats; // 0x70
		::System::String* _EnterStrategyAniName_k__BackingField; // 0x78
		::System::Single enterStrategyAniDuration; // 0x80
		::System::String* pickupAniName; // 0x88
		DynamicCharacter* dynamicCharacter; // 0x90
		Emoji* playingEmoji; // 0x98
		Il2CppObject* _Renderers_k__BackingField; // 0xA0

		HexaUI* get_HexaUI()
		{
			return ((HexaUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_GET_HEXAUI_OFFSET))(nullptr);
		}

		::System::String* get_EnterStrategyAniName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_GET_ENTERSTRATEGYANINAME_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void PlayIdleOnlyStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_PLAYIDLEONLYSTART_OFFSET))(nullptr);
		}

		::System::Void PlayHideShaderAni(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_PLAYHIDESHADERANI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoMove(::MX::Campaign::HexaTile* arg, ::MX::Campaign::HexaTile* arg2, ::MX::Campaign::HexaTile* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTile*, ::MX::Campaign::HexaTile*, ::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_COMOVE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayShowShaderAni(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_PLAYSHOWSHADERANI_OFFSET))(arg, nullptr);
		}

		::System::Void set_Renderers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_SET_RENDERERS_OFFSET))(arg, nullptr);
		}

		::System::Void ResetDisablePreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_RESETDISABLEPRESET_OFFSET))(nullptr);
		}

		::System::Void PlayEmoji(::UnityEngine::Transform* arg, Emoji* arg2, ::FlatData::EmojiEvent* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::UnityEngine::Transform*, Emoji*, ::FlatData::EmojiEvent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_PLAYEMOJI_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayShowShaderAni()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_COPLAYSHOWSHADERANI_OFFSET))(nullptr);
		}

		HexaUnitVisual* SetHexaUnit(::UnityEngine::GameObject* arg)
		{
			return ((HexaUnitVisual*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_SETHEXAUNIT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayHideShaderAni()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_COPLAYHIDESHADERANI_OFFSET))(nullptr);
		}

		::System::Void set_EnterStrategyAniName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_SET_ENTERSTRATEGYANINAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Renderers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_GET_RENDERERS_OFFSET))(nullptr);
		}

		::System::Void RotateLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_ROTATELEFT_OFFSET))(nullptr);
		}

		::System::Void RotateRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_ROTATERIGHT_OFFSET))(nullptr);
		}

		::System::Void PlayPickup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_PLAYPICKUP_OFFSET))(nullptr);
		}

		::System::Boolean _Move_b__44_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL__MOVE_B__44_0_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_START_OFFSET))(nullptr);
		}

		::System::Void Select()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_SELECT_OFFSET))(nullptr);
		}

		::System::Void SetFog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_SETFOG_OFFSET))(arg, nullptr);
		}

		::System::Void SetTacticSkipUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_SETTACTICSKIPUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Move(::MX::Campaign::HexaTile* arg, ::MX::Campaign::HexaTile* arg2, ::MX::Campaign::HexaTile* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Campaign::HexaTile*, ::MX::Campaign::HexaTile*, ::MX::Campaign::HexaTile*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_MOVE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Deselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_DESELECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoHideHighLight(HexaTileVisual* arg, ::System::Single arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(HexaTileVisual*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_COHIDEHIGHLIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_HexaUI(HexaUI* arg)
		{
			((::System::Void(*)(HexaUI*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_SET_HEXAUI_OFFSET))(arg, nullptr);
		}

		::System::Void PlayCampaignStartAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_PLAYCAMPAIGNSTARTANI_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void InitData(::MX::Campaign::HexaUnit* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_INITDATA_OFFSET))(arg, str, nullptr);
		}

		::System::Void ApplyDisablePreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_APPLYDISABLEPRESET_OFFSET))(nullptr);
		}

		::System::Void SetTacticReadyUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_SETTACTICREADYUI_OFFSET))(arg, nullptr);
		}

		::System::Void PlayIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_PLAYIDLE_OFFSET))(nullptr);
		}

		HexaUI* MakeTagObject(UIType* arg)
		{
			return ((HexaUI*(*)(UIType*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_MAKETAGOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetMoveVisual(::MX::Campaign::HexaTileMap* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_SETMOVEVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void InitVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL_INITVISUAL_OFFSET))(nullptr);
		}

		::System::Void _CoMove_b__45_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUNITVISUAL__COMOVE_B__45_0_OFFSET))(nullptr);
		}

	};

