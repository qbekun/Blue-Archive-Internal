#pragma once
#include "unitysdk.h"

#define MINIGAMEBEATMAPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xD15050)

	inline static constexpr unsigned int MinigameBeatmapData_TypeDefinitionIndex = 656;

	class MinigameBeatmapData : public Il2CppObject
	{
	public:
		Il2CppObject* NoteList; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEBEATMAPDATA_.CTOR_OFFSET))(nullptr);
		}

	};

