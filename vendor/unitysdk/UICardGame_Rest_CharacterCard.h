#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }

#define UICARDGAME_REST_CHARACTERCARD_CO_DIRECTING_OFFSET UNITYSDK_OFFSET(0xA4F450)
#define UICARDGAME_REST_CHARACTERCARD_SETDATA_OFFSET UNITYSDK_OFFSET(0xA4F500)
#define UICARDGAME_REST_CHARACTERCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4F7B0)

	inline static constexpr unsigned int UICardGame_Rest_CharacterCard_TypeDefinitionIndex = 464;

	class UICardGame_Rest_CharacterCard : public Il2CppObject
	{
	public:
		UILabel* healthLabel; // 0x18
		UITexture* characterTexture; // 0x20
		::UnityEngine::GameObject* dimObj; // 0x28
		::System::Int32 afterHealth; // 0x30
		::System::Int32 maxHealth; // 0x34

		::System::Collections::IEnumerator* Co_Directing(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_CHARACTERCARD_CO_DIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_CHARACTERCARD_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_CHARACTERCARD_.CTOR_OFFSET))(nullptr);
		}

	};

