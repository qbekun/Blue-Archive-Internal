#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
namespace UnityEngine { class Color; }
namespace FlatData { class ContentType; }

#define UIRAIDDIFFICULTYTAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A23E0)
#define UIRAIDDIFFICULTYTAG_SETUI_OFFSET UNITYSDK_OFFSET(0x27A23F0)

	inline static constexpr unsigned int UIRaidDifficultyTag_TypeDefinitionIndex = 7482;

	class UIRaidDifficultyTag : public Il2CppObject
	{
	public:
		UILabel* difficultyLabel; // 0x18
		UISprite* difficultySprite; // 0x20
		::UnityEngine::Color* NormalColor; // 0x28
		::UnityEngine::Color* HardColor; // 0x38
		::UnityEngine::Color* VeryhardColor; // 0x48
		::UnityEngine::Color* HardcoreColor; // 0x58
		::UnityEngine::Color* ExtreamColor; // 0x68
		::UnityEngine::Color* InsaneColor; // 0x78
		::UnityEngine::Color* TormentColor; // 0x88
		::UnityEngine::Color* LunaticColor; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDIFFICULTYTAG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUI(::FlatData::ContentType* arg, ::System::String* str, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDIFFICULTYTAG_SETUI_OFFSET))(arg, str, arg2, nullptr);
		}

	};

