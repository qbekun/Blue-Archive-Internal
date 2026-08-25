#pragma once
#include "unitysdk.h"

class UIToastSlot;
namespace UnityEngine { class Coroutine; }
namespace MX::Data::Excel { class ToastExcel; }
namespace FlatData { class ToastType; }
namespace MX::GameLogic::DBModel { class ToastDB; }

#define UITOAST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB74A60)
#define UITOAST_CLEAR_OFFSET UNITYSDK_OFFSET(0xB74A70)
#define UITOAST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB74BD0)
#define UITOAST_SHOWMISSIONTOAST_OFFSET UNITYSDK_OFFSET(0xB74EA0)
#define UITOAST_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0xB75040)
#define UITOAST_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0xB751C0)
#define UITOAST_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0xB752F0)
#define UITOAST_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0xB750F0)
#define UITOAST_SHOWTOAST_OFFSET UNITYSDK_OFFSET(0xB752A0)
#define UITOAST_HANDLEPCNOTICELEFT_OFFSET UNITYSDK_OFFSET(0xB757E0)
#define UITOAST_HANDLETACTICLEFT_OFFSET UNITYSDK_OFFSET(0xB75490)
#define UITOAST_HANDLETACTICRIGHT_OFFSET UNITYSDK_OFFSET(0xB75530)
#define UITOAST_HANDLENOTICECENTER_OFFSET UNITYSDK_OFFSET(0xB75740)
#define UITOAST_HANDLESOCIALCENTER_OFFSET UNITYSDK_OFFSET(0xB755D0)
#define UITOAST_COHANDLESOCIALCENTER_OFFSET UNITYSDK_OFFSET(0xB76170)
#define UITOAST_HANDLESOCIALMISSION_OFFSET UNITYSDK_OFFSET(0xB74EC0)
#define UITOAST_SHOWSOCIALMISSION_OFFSET UNITYSDK_OFFSET(0xB76260)
#define UITOAST_COHANDLENOTICECENTER_OFFSET UNITYSDK_OFFSET(0xB75420)
#define UITOAST_.CTOR_OFFSET UNITYSDK_OFFSET(0xB76310)
#define UITOAST__COHANDLENOTICECENTER_B__34_2_OFFSET UNITYSDK_OFFSET(0xB76440)

	inline static constexpr unsigned int UIToast_TypeDefinitionIndex = 8488;

	class UIToast : public Il2CppObject
	{
	public:
		UIToastSlot* tacticLeft; // 0x18
		UIToastSlot* tacticRight; // 0x20
		UIToastSlot* pcNoticeLeft; // 0x28
		Il2CppObject* socialCenters; // 0x30
		::System::Int32 centerSlot; // 0x38
		UIToastSlot* socialMission; // 0x40
		UIToastSlot* socialMissionWithPortrait; // 0x48
		UIToastSlot* noticeCenter; // 0x50
		Il2CppObject* socialMissionQueue; // 0x58
		::UnityEngine::Coroutine* socialMissionCoroutine; // 0x60
		Il2CppObject* socialCenterQueue; // 0x68
		::UnityEngine::Coroutine* socialCenterCoroutine; // 0x70
		Il2CppObject* noticeToasts; // 0x78
		::UnityEngine::Coroutine* noticeCoroutine; // 0x80
		::System::Int64 currentNoticeId; // 0x88
		::System::Single socialCenterShowDelay; // 0x90

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOAST_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOAST_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOAST_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ShowMissionToast(::System::String* str, ::System::String* str2, ::System::Single arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Single, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_SHOWMISSIONTOAST_OFFSET))(str, str2, arg, arg2, arg3, nullptr);
		}

		::System::Void ShowToast(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_SHOWTOAST_OFFSET))(str, nullptr);
		}

		::System::Void ShowToast(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_SHOWTOAST_OFFSET))(str, str2, nullptr);
		}

		::System::Void ShowToast(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_SHOWTOAST_OFFSET))(arg, nullptr);
		}

		::System::Void ShowToast(::MX::Data::Excel::ToastExcel* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::ToastExcel*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_SHOWTOAST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ShowToast(::FlatData::ToastType* arg, ::System::String* str, ::System::Single arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::FlatData::ToastType*, ::System::String*, ::System::Single, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_SHOWTOAST_OFFSET))(arg, str, arg2, arg3, arg4, nullptr);
		}

		::System::Void HandlePcNoticeLeft(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_HANDLEPCNOTICELEFT_OFFSET))(str, arg, nullptr);
		}

		::System::Void HandleTacticLeft(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_HANDLETACTICLEFT_OFFSET))(str, arg, nullptr);
		}

		::System::Void HandleTacticRight(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_HANDLETACTICRIGHT_OFFSET))(str, arg, nullptr);
		}

		::System::Void HandleNoticeCenter(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_HANDLENOTICECENTER_OFFSET))(str, arg, nullptr);
		}

		::System::Void HandleSocialCenter(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_HANDLESOCIALCENTER_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoHandleSocialCenter()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOAST_COHANDLESOCIALCENTER_OFFSET))(nullptr);
		}

		::System::Void HandleSocialMission(::System::String* str, ::System::String* str2, ::System::Single arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Single, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST_HANDLESOCIALMISSION_OFFSET))(str, str2, arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* ShowSocialMission()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOAST_SHOWSOCIALMISSION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoHandleNoticeCenter()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOAST_COHANDLENOTICECENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOAST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _CoHandleNoticeCenter_b__34_2(::MX::GameLogic::DBModel::ToastDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ToastDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITOAST__COHANDLENOTICECENTER_B__34_2_OFFSET))(arg, nullptr);
		}

	};

