#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSHOWBATTLEUI_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x217B660)
#define GROUNDCOMMANDSHOWBATTLEUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x217C590)
#define GROUNDCOMMANDSHOWBATTLEUI_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x217C5E0)
#define GROUNDCOMMANDSHOWBATTLEUI_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x217C8A0)
#define GROUNDCOMMANDSHOWBATTLEUI_.CCTOR_OFFSET UNITYSDK_OFFSET(0x217D200)
#define GROUNDCOMMANDSHOWBATTLEUI_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x217D210)
#define GROUNDCOMMANDSHOWBATTLEUI_SET_BGMID_OFFSET UNITYSDK_OFFSET(0x217D220)

	inline static constexpr unsigned int GroundCommandShowBattleUI_TypeDefinitionIndex = 4041;

	class GroundCommandShowBattleUI : public Il2CppObject
	{
	public:
		::System::Boolean DisappearInstantly; // 0x30
		::System::Boolean IsShowBattleUI; // 0x31
		::System::Boolean IsShowEmoji; // 0x32
		::System::Boolean IsShowSpeechBubble; // 0x33
		::System::Boolean ShowBattleStartSign; // 0x34
		::System::Boolean SoundOn; // 0x35
		::System::Boolean BGMOn; // 0x36
		Il2CppObject* _BGMId_k__BackingField; // 0x38

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandShowBattleUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandShowBattleUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUI_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUI_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandShowBattleUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandShowBattleUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUI_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUI_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_BGMId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUI_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Void set_BGMId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWBATTLEUI_SET_BGMID_OFFSET))(arg, nullptr);
		}

	};

