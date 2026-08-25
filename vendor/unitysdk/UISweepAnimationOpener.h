#pragma once
#include "unitysdk.h"

class ContentSweepMultiSweepResponseMessage;
class ContentSweepResponseMessage;
namespace Mx::Sweep { class SweepBase; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
class UISweepAnimation;
class UIBase;

#define UISWEEPANIMATIONOPENER_GET_CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x26C7460)
#define UISWEEPANIMATIONOPENER_SET_CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x26C7470)
#define UISWEEPANIMATIONOPENER_GET_CONTENTSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x26C7480)
#define UISWEEPANIMATIONOPENER_SET_CONTENTSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x26C7490)
#define UISWEEPANIMATIONOPENER_GET_SWEEPBASE_OFFSET UNITYSDK_OFFSET(0x26C74A0)
#define UISWEEPANIMATIONOPENER_SET_SWEEPBASE_OFFSET UNITYSDK_OFFSET(0x26C74B0)
#define UISWEEPANIMATIONOPENER_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x26C74C0)
#define UISWEEPANIMATIONOPENER_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x26C74D0)
#define UISWEEPANIMATIONOPENER_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x26C74E0)
#define UISWEEPANIMATIONOPENER_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x26C74F0)
#define UISWEEPANIMATIONOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C7500)
#define UISWEEPANIMATIONOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C7530)
#define UISWEEPANIMATIONOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C7580)
#define UISWEEPANIMATIONOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C75E0)
#define UISWEEPANIMATIONOPENER_GETRANDOMSWEEPUINAME_OFFSET UNITYSDK_OFFSET(0x26C76D0)
#define UISWEEPANIMATIONOPENER_INITIALIZEUISWEEPANIMATION_OFFSET UNITYSDK_OFFSET(0x26C7870)
#define UISWEEPANIMATIONOPENER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x26C7900)
#define UISWEEPANIMATIONOPENER__OPENUI_B__24_0_OFFSET UNITYSDK_OFFSET(0x26C7980)

	inline static constexpr unsigned int UISweepAnimationOpener_TypeDefinitionIndex = 6989;

	class UISweepAnimationOpener : public Il2CppObject
	{
	public:
		ContentSweepMultiSweepResponseMessage* _ContentSweepMultiSweepResponseMessage_k__BackingField; // 0x18
		ContentSweepResponseMessage* _ContentSweepResponseMessage_k__BackingField; // 0x20
		::Mx::Sweep::SweepBase* _SweepBase_k__BackingField; // 0x28
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x30
		Il2CppObject* _Rewards_k__BackingField; // 0x38
		::System::Random* random; // 0x0

		ContentSweepMultiSweepResponseMessage* get_ContentSweepMultiSweepResponseMessage()
		{
			return ((ContentSweepMultiSweepResponseMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_GET_CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_ContentSweepMultiSweepResponseMessage(ContentSweepMultiSweepResponseMessage* arg)
		{
			((::System::Void(*)(ContentSweepMultiSweepResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_SET_CONTENTSWEEPMULTISWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		ContentSweepResponseMessage* get_ContentSweepResponseMessage()
		{
			return ((ContentSweepResponseMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_GET_CONTENTSWEEPRESPONSEMESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_ContentSweepResponseMessage(ContentSweepResponseMessage* arg)
		{
			((::System::Void(*)(ContentSweepResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_SET_CONTENTSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::Mx::Sweep::SweepBase* get_SweepBase()
		{
			return ((::Mx::Sweep::SweepBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_GET_SWEEPBASE_OFFSET))(nullptr);
		}

		::System::Void set_SweepBase(::Mx::Sweep::SweepBase* arg)
		{
			((::System::Void(*)(::Mx::Sweep::SweepBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_SET_SWEEPBASE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(ContentSweepMultiSweepResponseMessage* arg)
		{
			((::System::Void(*)(ContentSweepMultiSweepResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mx::Sweep::SweepBase* arg, ContentSweepResponseMessage* arg2)
		{
			((::System::Void(*)(::Mx::Sweep::SweepBase*, ContentSweepResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::Mx::Sweep::SweepBase* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::Mx::Sweep::SweepBase*, ::MX::GameLogic::Parcel::ParcelResultDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::String* GetRandomSweepUIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_GETRANDOMSWEEPUINAME_OFFSET))(nullptr);
		}

		::System::Void InitializeUISweepAnimation(UISweepAnimation* arg)
		{
			((::System::Void(*)(UISweepAnimation*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_INITIALIZEUISWEEPANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__24_0(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPANIMATIONOPENER__OPENUI_B__24_0_OFFSET))(arg, nullptr);
		}

	};

