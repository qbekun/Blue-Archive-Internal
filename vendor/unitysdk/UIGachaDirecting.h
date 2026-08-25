#pragma once
#include "unitysdk.h"

class GachaAmount;
namespace FlatData { class DirectingCharacter; }
class GachaSignature;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Camera; }
class UIRewardConfirm;
class UISkip;
namespace FlatData { class GachaPhase; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define UIGACHADIRECTING_AWAKE_OFFSET UNITYSDK_OFFSET(0x258F6D0)
#define UIGACHADIRECTING_CO_ANIMATIONPROCESS_OFFSET UNITYSDK_OFFSET(0x258F870)
#define UIGACHADIRECTING_FOVCALCULATE_OFFSET UNITYSDK_OFFSET(0x258F900)
#define UIGACHADIRECTING__AWAKE_B__21_0_OFFSET UNITYSDK_OFFSET(0x258F950)
#define UIGACHADIRECTING_LOADGACHADIRECTINGPARTS_OFFSET UNITYSDK_OFFSET(0x258F960)
#define UIGACHADIRECTING_INITIALIZEBEFOREHANDGACHA_OFFSET UNITYSDK_OFFSET(0x258F9F0)
#define UIGACHADIRECTING_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2590250)
#define UIGACHADIRECTING__OPENNEXTDIRECTING_B__32_0_OFFSET UNITYSDK_OFFSET(0x2590950)
#define UIGACHADIRECTING_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2590980)
#define UIGACHADIRECTING_SETCARD_OFFSET UNITYSDK_OFFSET(0x2590AF0)
#define UIGACHADIRECTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x2590D20)
#define UIGACHADIRECTING_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0x2590F00)
#define UIGACHADIRECTING__CO_ANIMATIONPROCESS_B__29_1_OFFSET UNITYSDK_OFFSET(0x2590F10)
#define UIGACHADIRECTING_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2590F30)
#define UIGACHADIRECTING_PRELOADSPINE_OFFSET UNITYSDK_OFFSET(0x2591040)
#define UIGACHADIRECTING__CO_ANIMATIONPROCESS_B__29_0_OFFSET UNITYSDK_OFFSET(0x25911F0)
#define UIGACHADIRECTING_CLEAR_OFFSET UNITYSDK_OFFSET(0x25900B0)
#define UIGACHADIRECTING_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2591280)
#define UIGACHADIRECTING_CO_OPENANIMATION_OFFSET UNITYSDK_OFFSET(0x2591310)
#define UIGACHADIRECTING_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x25913C0)
#define UIGACHADIRECTING_OPENNEXTDIRECTING_OFFSET UNITYSDK_OFFSET(0x25914D0)
#define UIGACHADIRECTING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x25916F0)

	inline static constexpr unsigned int UIGachaDirecting_TypeDefinitionIndex = 6253;

	class UIGachaDirecting : public Il2CppObject
	{
	public:
		Il2CppObject* loadedDirectorDic; // 0xD8
		Il2CppObject* directorDic; // 0xE0
		GachaAmount* gachaAmount; // 0xE8
		::FlatData::DirectingCharacter* directingCharacter; // 0xEC
		::System::Boolean hasSSR; // 0xF0
		::System::Boolean isTwist; // 0xF1
		GachaSignature* GachaSignature; // 0xF8
		MXButton* SkipButton; // 0x100
		::UnityEngine::GameObject* SignatureStanby; // 0x108
		Il2CppObject* characterIds; // 0x110
		::System::Boolean signatureFinish; // 0x118
		::System::Boolean skipDirecting; // 0x119
		::UnityEngine::Camera* mGameCamera; // 0x120
		::UnityEngine::Camera* activeDirectingCamera; // 0x128
		::System::Boolean isMultiplied; // 0x130
		::System::Single FOVMultiplier; // 0x134
		::System::Int32 MIN; // 0x0
		::System::Int32 MAX; // 0x0
		Il2CppObject* rewardConfirmDataList; // 0x138
		::Il2CppArray<::System::Object*>* gachaPhaseOrder; // 0x140

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_AnimationProcess()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_CO_ANIMATIONPROCESS_OFFSET))(nullptr);
		}

		::System::Single FOVCalculate(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_FOVCALCULATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _Awake_b__21_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING__AWAKE_B__21_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* LoadGachaDirectingParts()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_LOADGACHADIRECTINGPARTS_OFFSET))(nullptr);
		}

		::System::Void InitializeBeforehandGacha(Il2CppObject* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_INITIALIZEBEFOREHANDGACHA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenNextDirecting_b__32_0(UIRewardConfirm* arg)
		{
			((::System::Void(*)(UIRewardConfirm*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING__OPENNEXTDIRECTING_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_SETCARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Void _co_AnimationProcess_b__29_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING__CO_ANIMATIONPROCESS_B__29_1_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void PreLoadSpine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_PRELOADSPINE_OFFSET))(nullptr);
		}

		::System::Void _co_AnimationProcess_b__29_0(UISkip* arg)
		{
			((::System::Void(*)(UISkip*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING__CO_ANIMATIONPROCESS_B__29_0_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_CLEAR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_OpenAnimation(::FlatData::GachaPhase* arg, ::UnityEngine::Playables::PlayableDirector* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::GachaPhase*, ::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_CO_OPENANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OpenNextDirecting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_OPENNEXTDIRECTING_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHADIRECTING_ONDESTROY_OFFSET))(nullptr);
		}

	};

