#pragma once
#include "unitysdk.h"

#define MINIGAMESHOOTINGSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2163040)
#define MINIGAMESHOOTINGSUMMARY_KILLENEMY_OFFSET UNITYSDK_OFFSET(0x2163110)
#define MINIGAMESHOOTINGSUMMARY_ADDGEAS_OFFSET UNITYSDK_OFFSET(0x21631D0)

	inline static constexpr unsigned int MiniGameShootingSummary_TypeDefinitionIndex = 4002;

	class MiniGameShootingSummary : public Il2CppObject
	{
	public:
		::System::Int64 EventContentId; // 0x10
		::System::Int64 StageId; // 0x18
		::System::Int64 PlayerCharacterId; // 0x20
		Il2CppObject* GeasIds; // 0x28
		::System::Int64 SectionCount; // 0x30
		::System::Int64 ArriveSection; // 0x38
		::System::Single LeftTimeSec; // 0x40
		::System::Single ProgressedTimeSec; // 0x44
		Il2CppObject* KillEnemies; // 0x48
		::System::Boolean IsWin; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESHOOTINGSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void KillEnemy(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESHOOTINGSUMMARY_KILLENEMY_OFFSET))(arg, nullptr);
		}

		::System::Void AddGeas(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESHOOTINGSUMMARY_ADDGEAS_OFFSET))(arg, nullptr);
		}

	};

