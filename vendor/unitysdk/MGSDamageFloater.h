#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animator; }
namespace MX::MinigameShooting { class Character; }
namespace FlatData { class FontType; }
namespace UnityEngine { class Vector3; }

#define MGSDAMAGEFLOATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x205EF90)
#define MGSDAMAGEFLOATER_PLAYDAMAGEFLOATER_OFFSET UNITYSDK_OFFSET(0x205EFA0)
#define MGSDAMAGEFLOATER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x205F1B0)
#define MGSDAMAGEFLOATER_COPLAY_OFFSET UNITYSDK_OFFSET(0x205F2C0)

	inline static constexpr unsigned int MGSDamageFloater_TypeDefinitionIndex = 3390;

	class MGSDamageFloater : public Il2CppObject
	{
	public:
		UILabel* normalLabel; // 0x18
		::UnityEngine::GameObject* criticalNormalIcon; // 0x20
		::UnityEngine::GameObject* miss; // 0x28
		::UnityEngine::Animator* animator; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGSDAMAGEFLOATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayDamageFloater(::MX::MinigameShooting::Character* arg, ::FlatData::FontType* arg2, ::System::Int64 arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::FlatData::FontType*, ::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MGSDAMAGEFLOATER_PLAYDAMAGEFLOATER_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MGSDAMAGEFLOATER_SETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::String* str, Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MGSDAMAGEFLOATER_COPLAY_OFFSET))(str, arg, nullptr);
		}

	};

