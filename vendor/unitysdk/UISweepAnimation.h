#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
class ContentSweepResponseMessage;
class ContentSweepMultiSweepResponseMessage;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace Mx::Sweep { class SweepBase; }
class TooltipTargetParcelTracker;
class UISweepResult;

#define UISWEEPANIMATION_ONENDOPENANIMATION_OFFSET UNITYSDK_OFFSET(0xB28810)
#define UISWEEPANIMATION_RESETSWEEPSTATE_OFFSET UNITYSDK_OFFSET(0xB28B30)
#define UISWEEPANIMATION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB28C00)
#define UISWEEPANIMATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB28C20)
#define UISWEEPANIMATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB28E30)
#define UISWEEPANIMATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB28EF0)
#define UISWEEPANIMATION_SETTARGETPARCEL_OFFSET UNITYSDK_OFFSET(0xB28D90)
#define UISWEEPANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xB29080)
#define UISWEEPANIMATION__ONENDOPENANIMATION_B__10_0_OFFSET UNITYSDK_OFFSET(0xB29090)
#define UISWEEPANIMATION__ONENDOPENANIMATION_B__10_1_OFFSET UNITYSDK_OFFSET(0xB291D0)
#define UISWEEPANIMATION__ONENDOPENANIMATION_B__10_2_OFFSET UNITYSDK_OFFSET(0xB29260)
#define UISWEEPANIMATION__ONENDOPENANIMATION_B__10_3_OFFSET UNITYSDK_OFFSET(0xB294E0)
#define UISWEEPANIMATION__ONENDOPENANIMATION_B__10_4_OFFSET UNITYSDK_OFFSET(0xB29570)
#define UISWEEPANIMATION__ONENDOPENANIMATION_B__10_5_OFFSET UNITYSDK_OFFSET(0xB29710)

	inline static constexpr unsigned int UISweepAnimation_TypeDefinitionIndex = 8265;

	class UISweepAnimation : public Il2CppObject
	{
	public:
		::FlatData::ContentType* contentType; // 0xD8
		::System::Int64 stageId; // 0xE0
		ContentSweepResponseMessage* message; // 0xE8
		ContentSweepMultiSweepResponseMessage* contentSweepMultiMessage; // 0xF0
		::MX::GameLogic::Parcel::ParcelResultDB* parcelResultDB; // 0xF8
		Il2CppObject* rewards; // 0x100
		::MX::GameLogic::Parcel::ParcelKeyPair* targetParcel; // 0x108
		::System::Int64 currentCount; // 0x118
		::System::Int64 targetCount; // 0x120
		::System::Boolean multiSweep; // 0x128

		::System::Void OnEndOpenAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION_ONENDOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void ResetSweepState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION_RESETSWEEPSTATE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void Initialize(::Mx::Sweep::SweepBase* arg, ContentSweepResponseMessage* arg2)
		{
			((::System::Void(*)(::Mx::Sweep::SweepBase*, ContentSweepResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(ContentSweepMultiSweepResponseMessage* arg)
		{
			((::System::Void(*)(ContentSweepMultiSweepResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::Mx::Sweep::SweepBase* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::Mx::Sweep::SweepBase*, ::MX::GameLogic::Parcel::ParcelResultDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetTargetParcel(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION_SETTARGETPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnEndOpenAnimation_b__10_0(UISweepResult* arg)
		{
			((::System::Void(*)(UISweepResult*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION__ONENDOPENANIMATION_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnEndOpenAnimation_b__10_1(UISweepResult* arg)
		{
			((::System::Void(*)(UISweepResult*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION__ONENDOPENANIMATION_B__10_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnEndOpenAnimation_b__10_2(UISweepResult* arg)
		{
			((::System::Void(*)(UISweepResult*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION__ONENDOPENANIMATION_B__10_2_OFFSET))(arg, nullptr);
		}

		::System::Void _OnEndOpenAnimation_b__10_3(UISweepResult* arg)
		{
			((::System::Void(*)(UISweepResult*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION__ONENDOPENANIMATION_B__10_3_OFFSET))(arg, nullptr);
		}

		::System::Void _OnEndOpenAnimation_b__10_4(UISweepResult* arg)
		{
			((::System::Void(*)(UISweepResult*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION__ONENDOPENANIMATION_B__10_4_OFFSET))(arg, nullptr);
		}

		::System::Void _OnEndOpenAnimation_b__10_5(UISweepResult* arg)
		{
			((::System::Void(*)(UISweepResult*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATION__ONENDOPENANIMATION_B__10_5_OFFSET))(arg, nullptr);
		}

	};

