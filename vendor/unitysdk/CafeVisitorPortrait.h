#pragma once
#include "unitysdk.h"

class UICafeCharacterFavor;
class UILabel;
namespace UnityEngine { class Animation; }

#define CAFEVISITORPORTRAIT_PLAYREADY_OFFSET UNITYSDK_OFFSET(0x22611F0)
#define CAFEVISITORPORTRAIT_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x22612E0)
#define CAFEVISITORPORTRAIT_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x22614A0)
#define CAFEVISITORPORTRAIT_PLAYANI_OFFSET UNITYSDK_OFFSET(0x2261230)
#define CAFEVISITORPORTRAIT_RESET_OFFSET UNITYSDK_OFFSET(0x2261420)
#define CAFEVISITORPORTRAIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2261530)
#define CAFEVISITORPORTRAIT_PLAYOPEN_OFFSET UNITYSDK_OFFSET(0x2261540)

	inline static constexpr unsigned int CafeVisitorPortrait_TypeDefinitionIndex = 4576;

	class CafeVisitorPortrait : public Il2CppObject
	{
	public:
		UICafeCharacterFavor* cafeCharacterFavor; // 0x18
		UILabel* nameLabel; // 0x20
		Il2CppObject* objectsToReset; // 0x28
		::UnityEngine::Animation* anim; // 0x30

		::System::Void PlayReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEVISITORPORTRAIT_PLAYREADY_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEVISITORPORTRAIT_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animation* get_Anim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEVISITORPORTRAIT_GET_ANIM_OFFSET))(nullptr);
		}

		::System::Void PlayAni(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEVISITORPORTRAIT_PLAYANI_OFFSET))(str, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEVISITORPORTRAIT_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEVISITORPORTRAIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEVISITORPORTRAIT_PLAYOPEN_OFFSET))(nullptr);
		}

	};

