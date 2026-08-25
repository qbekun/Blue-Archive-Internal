#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UIMiniGameShootingArriveSection;

#define UIPOPUP_MINIGAMESWEEPSHOOTINGRECORD_SETDATA_OFFSET UNITYSDK_OFFSET(0x2084BB0)
#define UIPOPUP_MINIGAMESWEEPSHOOTINGRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2084E50)

	inline static constexpr unsigned int UIPopup_MiniGameSweepShootingRecord_TypeDefinitionIndex = 3434;

	class UIPopup_MiniGameSweepShootingRecord : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* NormalTag; // 0x18
		::UnityEngine::GameObject* HardTag; // 0x20
		UILabel* ClearSection; // 0x28
		UIMiniGameShootingArriveSection* ArriveSection; // 0x30

		::System::Void SetData(::System::Int64 arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEPSHOOTINGRECORD_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEPSHOOTINGRECORD_.CTOR_OFFSET))(nullptr);
		}

	};

