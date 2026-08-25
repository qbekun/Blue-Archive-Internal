#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define UIFORMATIONECHELONCARDS_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1FFB0E0)
#define UIFORMATIONECHELONCARDS_GET_SPECIALCARDS_OFFSET UNITYSDK_OFFSET(0x1FFB120)
#define UIFORMATIONECHELONCARDS_GETCARDS_OFFSET UNITYSDK_OFFSET(0x1FFB1F0)
#define UIFORMATIONECHELONCARDS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB2D0)
#define UIFORMATIONECHELONCARDS_GET_STRIKERCARDS_OFFSET UNITYSDK_OFFSET(0x1FFB200)

	inline static constexpr unsigned int UIFormationEchelonCards_TypeDefinitionIndex = 3099;

	class UIFormationEchelonCards : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* strikersRoot; // 0x10
		::UnityEngine::GameObject* specialsRoot; // 0x18
		::Il2CppArray<::System::Object*>* strikerCards; // 0x20
		::Il2CppArray<::System::Object*>* specialCards; // 0x28

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONECHELONCARDS_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SpecialCards()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONECHELONCARDS_GET_SPECIALCARDS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCards(::System::Boolean arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONECHELONCARDS_GETCARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONECHELONCARDS_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StrikerCards()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONECHELONCARDS_GET_STRIKERCARDS_OFFSET))(nullptr);
		}

	};

