#pragma once
#include "unitysdk.h"

class UIGrid;
namespace MX::Logic::Battles { class Battle; }
class ISyncable;
class BuffIconData;
class BuffIconContent;

#define BUFFICONS_GET_TOTALICONNEED_OFFSET UNITYSDK_OFFSET(0x25D3080)
#define BUFFICONS_INIT_OFFSET UNITYSDK_OFFSET(0x25D3090)
#define BUFFICONS_ENABLEANIMATION_OFFSET UNITYSDK_OFFSET(0x25D33E0)
#define BUFFICONS_SYNCUITO_OFFSET UNITYSDK_OFFSET(0x25D35A0)
#define BUFFICONS_CLEAR_OFFSET UNITYSDK_OFFSET(0x25D3730)
#define BUFFICONS_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x25D39F0)
#define BUFFICONS_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x25D3E40)
#define BUFFICONS_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x25D40C0)
#define BUFFICONS_ICONREORDERATTACH_OFFSET UNITYSDK_OFFSET(0x25D3C70)
#define BUFFICONS_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x25D4890)
#define BUFFICONS_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x25D4B60)
#define BUFFICONS_ICONREORDERDETACH_OFFSET UNITYSDK_OFFSET(0x25D4DC0)
#define BUFFICONS_ICONANIMATIONDETACHFINISH_OFFSET UNITYSDK_OFFSET(0x25D5020)
#define BUFFICONS_ICONREORDERALL_OFFSET UNITYSDK_OFFSET(0x25D5940)
#define BUFFICONS_GETIDLEICON_OFFSET UNITYSDK_OFFSET(0x25D4340)
#define BUFFICONS_STEALBUSYICON_OFFSET UNITYSDK_OFFSET(0x25D44C0)
#define BUFFICONS_ICONMOVE_OFFSET UNITYSDK_OFFSET(0x25D4760)
#define BUFFICONS_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x25D6250)
#define BUFFICONS_SWITCH_OFFSET UNITYSDK_OFFSET(0x25D6370)
#define BUFFICONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x25D6610)

	inline static constexpr unsigned int BuffIcons_TypeDefinitionIndex = 6359;

	class BuffIcons : public Il2CppObject
	{
	public:
		::System::Int32 timeIntervalSwitch; // 0x0
		::System::Int32 showPerSwitch; // 0x28
		::System::Int32 switchCount; // 0x2C
		UIGrid* grid; // 0x30
		Il2CppObject* buffIconContents; // 0x38
		::System::Int32 currentSwitchIndex; // 0x40
		Il2CppObject* dispelAnimationDatas; // 0x48
		::MX::Logic::Battles::Battle* battle; // 0x50

		::System::Int32 get_TotalIconNeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_GET_TOTALICONNEED_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_INIT_OFFSET))(nullptr);
		}

		::System::Void EnableAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ENABLEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void SyncUITo(ISyncable* arg)
		{
			((::System::Void(*)(ISyncable*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_SYNCUITO_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_CLEAR_OFFSET))(nullptr);
		}

		::System::Void IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONREORDERATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONREORDERATTACH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3, ::System::UInt32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONREORDERATTACH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		BuffIconData* IconReorderAttach(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((BuffIconData*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONREORDERATTACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(BuffIconData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONREORDERDETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(BuffIconData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONREORDERDETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconReorderDetach(BuffIconData* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(BuffIconData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONREORDERDETACH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void IconAnimationDetachFinish(BuffIconContent* arg)
		{
			((::System::Void(*)(BuffIconContent*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONANIMATIONDETACHFINISH_OFFSET))(arg, nullptr);
		}

		::System::Void IconReorderAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONREORDERALL_OFFSET))(nullptr);
		}

		BuffIconContent* GetIdleIcon()
		{
			return ((BuffIconContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_GETIDLEICON_OFFSET))(nullptr);
		}

		BuffIconContent* StealBusyIcon()
		{
			return ((BuffIconContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_STEALBUSYICON_OFFSET))(nullptr);
		}

		::System::Void IconMove(::System::Int32 arg, BuffIconContent* arg2)
		{
			((::System::Void(*)(::System::Int32, BuffIconContent*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_ICONMOVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Switch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_SWITCH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONS_.CTOR_OFFSET))(nullptr);
		}

	};

