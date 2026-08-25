#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace FlatData { class ScenarioModeSubTypes; }

#define EPISODELISTSCROLLVIEWCONTROLLERMAIN_SET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x27EDC00)
#define EPISODELISTSCROLLVIEWCONTROLLERMAIN_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x27EDC10)
#define EPISODELISTSCROLLVIEWCONTROLLERMAIN_SETUI_OFFSET UNITYSDK_OFFSET(0x27EDC20)
#define EPISODELISTSCROLLVIEWCONTROLLERMAIN_GETMODEIDLIST_OFFSET UNITYSDK_OFFSET(0x27EDD60)
#define EPISODELISTSCROLLVIEWCONTROLLERMAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x27EDEE0)

	inline static constexpr unsigned int EpisodeListScrollViewControllerMain_TypeDefinitionIndex = 7710;

	class EpisodeListScrollViewControllerMain : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* status_Normal; // 0xA8
		::UnityEngine::GameObject* status_NoHidden; // 0xB0
		::UnityEngine::GameObject* status_Hidden; // 0xB8
		::FlatData::ScenarioModeSubTypes* _SubType_k__BackingField; // 0xC0

		::System::Void set_SubType(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERMAIN_SET_SUBTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERMAIN_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERMAIN_SETUI_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetModeIdList(::System::DateTime* arg)
		{
			return ((Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERMAIN_GETMODEIDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERMAIN_.CTOR_OFFSET))(nullptr);
		}

	};

