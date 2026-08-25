#pragma once
#include "unitysdk.h"

class BossAppearState;
namespace UnityEngine { class Animation; }

#define WORLDRAIDZONEBALLOONANIINFO_SET_ANINAME_OFFSET UNITYSDK_OFFSET(0xC0B880)
#define WORLDRAIDZONEBALLOONANIINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC0B890)
#define WORLDRAIDZONEBALLOONANIINFO_GET_ANINAME_OFFSET UNITYSDK_OFFSET(0xC0B8A0)
#define WORLDRAIDZONEBALLOONANIINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0B8B0)
#define WORLDRAIDZONEBALLOONANIINFO_GET_NEEDPLAY_OFFSET UNITYSDK_OFFSET(0xC0B8C0)
#define WORLDRAIDZONEBALLOONANIINFO_RESETINFO_OFFSET UNITYSDK_OFFSET(0xC0B8D0)
#define WORLDRAIDZONEBALLOONANIINFO_GET_ANITYPE_OFFSET UNITYSDK_OFFSET(0xC0B940)
#define WORLDRAIDZONEBALLOONANIINFO_GET_ANICLIP_OFFSET UNITYSDK_OFFSET(0xC0B950)
#define WORLDRAIDZONEBALLOONANIINFO_SET_ANITYPE_OFFSET UNITYSDK_OFFSET(0xC0B960)
#define WORLDRAIDZONEBALLOONANIINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC0B970)
#define WORLDRAIDZONEBALLOONANIINFO_SET_ANICLIP_OFFSET UNITYSDK_OFFSET(0xC0B980)
#define WORLDRAIDZONEBALLOONANIINFO_SET_NEEDPLAY_OFFSET UNITYSDK_OFFSET(0xC0B990)

	inline static constexpr unsigned int WorldRaidZoneBalloonAniInfo_TypeDefinitionIndex = 8808;

	class WorldRaidZoneBalloonAniInfo : public Il2CppObject
	{
	public:
		BossAppearState* _AniType_k__BackingField; // 0x10
		::System::Int64 _GroupId_k__BackingField; // 0x18
		::UnityEngine::Animation* _AniClip_k__BackingField; // 0x20
		::System::String* _AniName_k__BackingField; // 0x28
		::System::Boolean _NeedPlay_k__BackingField; // 0x30

		::System::Void set_AniName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_SET_ANINAME_OFFSET))(str, nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::String* get_AniName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_GET_ANINAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_GET_NEEDPLAY_OFFSET))(nullptr);
		}

		::System::Void ResetInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_RESETINFO_OFFSET))(nullptr);
		}

		BossAppearState* get_AniType()
		{
			return ((BossAppearState*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_GET_ANITYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_AniClip()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_GET_ANICLIP_OFFSET))(nullptr);
		}

		::System::Void set_AniType(BossAppearState* arg)
		{
			((::System::Void(*)(BossAppearState*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_SET_ANITYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_AniClip(::UnityEngine::Animation* arg)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_SET_ANICLIP_OFFSET))(arg, nullptr);
		}

		::System::Void set_NeedPlay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIINFO_SET_NEEDPLAY_OFFSET))(arg, nullptr);
		}

	};

