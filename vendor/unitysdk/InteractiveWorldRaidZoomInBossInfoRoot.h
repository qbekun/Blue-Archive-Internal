#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidZoomInBossInfo;
class EventDelegate;
class BossAppearState;

#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETBOSSSPINEBACKGROUND_OFFSET UNITYSDK_OFFSET(0x26089D0)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETARTTHEME_OFFSET UNITYSDK_OFFSET(0x26089F0)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_PLAYAPPEARANIMATION_OFFSET UNITYSDK_OFFSET(0x2608AB0)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETALLCLEAR_OFFSET UNITYSDK_OFFSET(0x2608B10)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2608B30)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETSPINEBACKGROUNDDECO_OFFSET UNITYSDK_OFFSET(0x2608B40)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_REGISTERONCLICKBOSSENTER_OFFSET UNITYSDK_OFFSET(0x2608B70)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_REFRESHMOSTPARTICIPATED_OFFSET UNITYSDK_OFFSET(0x2608BC0)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETBOSSLABEL_OFFSET UNITYSDK_OFFSET(0x2608BF0)
#define INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETBOSSSPINE_OFFSET UNITYSDK_OFFSET(0x2608C50)

	inline static constexpr unsigned int InteractiveWorldRaidZoomInBossInfoRoot_TypeDefinitionIndex = 6483;

	class InteractiveWorldRaidZoomInBossInfoRoot : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* bossInfos; // 0x18
		InteractiveWorldRaidZoomInBossInfo* _currentBossInfo; // 0x20

		::System::Void SetBossSpineBackground(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETBOSSSPINEBACKGROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetArtTheme(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETARTTHEME_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAppearAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_PLAYAPPEARANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetAllClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETALLCLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSpineBackgroundDeco(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETSPINEBACKGROUNDDECO_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterOnClickBossEnter(EventDelegate* arg)
		{
			((::System::Void(*)(EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_REGISTERONCLICKBOSSENTER_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMostParticipated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_REFRESHMOSTPARTICIPATED_OFFSET))(arg, nullptr);
		}

		::System::Void SetBossLabel(::System::String* str, ::System::Decimal* arg, BossAppearState* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::Decimal*, BossAppearState*, ::System::Boolean, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETBOSSLABEL_OFFSET))(str, arg, arg2, arg3, arg4, str2, nullptr);
		}

		::System::Void SetBossSpine(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDZOOMINBOSSINFOROOT_SETBOSSSPINE_OFFSET))(str, nullptr);
		}

	};

