#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSHOWENEMYCOUNTUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x217D2D0)
#define GROUNDCOMMANDSHOWENEMYCOUNTUI_.CCTOR_OFFSET UNITYSDK_OFFSET(0x217D320)
#define GROUNDCOMMANDSHOWENEMYCOUNTUI_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x217D4F0)
#define GROUNDCOMMANDSHOWENEMYCOUNTUI_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x217D330)
#define GROUNDCOMMANDSHOWENEMYCOUNTUI_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x217DE20)

	inline static constexpr unsigned int GroundCommandShowEnemyCountUI_TypeDefinitionIndex = 4043;

	class GroundCommandShowEnemyCountUI : public Il2CppObject
	{
	public:
		::System::Boolean Show; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUI_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, GroundCommandShowEnemyCountUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, GroundCommandShowEnemyCountUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUI_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUI_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, GroundCommandShowEnemyCountUI&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, GroundCommandShowEnemyCountUI&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSHOWENEMYCOUNTUI_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

