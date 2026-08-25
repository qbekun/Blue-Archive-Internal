#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace FlatData { class DamageAttribute; }
class CharacterVisual;
class GroundObstacleVisual;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define DAMAGEATTRIBUTEFLOATER_GET_CURRENTDAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x23B7C90)
#define DAMAGEATTRIBUTEFLOATER_SET_CURRENTDAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x23B7CA0)
#define DAMAGEATTRIBUTEFLOATER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23B7CB0)
#define DAMAGEATTRIBUTEFLOATER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23B7FA0)
#define DAMAGEATTRIBUTEFLOATER_SHOW_OFFSET UNITYSDK_OFFSET(0x23B8120)
#define DAMAGEATTRIBUTEFLOATER_SHOW_OFFSET UNITYSDK_OFFSET(0x23B8440)
#define DAMAGEATTRIBUTEFLOATER_SETDAMAGEATTRIBUTELABEL_OFFSET UNITYSDK_OFFSET(0x23B83C0)
#define DAMAGEATTRIBUTEFLOATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x23B8200)
#define DAMAGEATTRIBUTEFLOATER_REFRESHPANELDEPTH_OFFSET UNITYSDK_OFFSET(0x23B7DC0)
#define DAMAGEATTRIBUTEFLOATER_HANDLEUIOPENMESSAGE_OFFSET UNITYSDK_OFFSET(0x23B8560)
#define DAMAGEATTRIBUTEFLOATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23B8570)

	inline static constexpr unsigned int DamageAttributeFloater_TypeDefinitionIndex = 5237;

	class DamageAttributeFloater : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* normalLabel; // 0x18
		::UnityEngine::GameObject* resistLabel; // 0x20
		::UnityEngine::GameObject* weakLabel; // 0x28
		::UnityEngine::GameObject* effectiveLabel; // 0x30
		::UnityEngine::Transform* targetTransform; // 0x38
		::System::Single offsetY; // 0x40
		::FlatData::DamageAttribute* _CurrentDamageAttribute_k__BackingField; // 0x44

		::FlatData::DamageAttribute* get_CurrentDamageAttribute()
		{
			return ((::FlatData::DamageAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_GET_CURRENTDAMAGEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentDamageAttribute(::FlatData::DamageAttribute* arg)
		{
			((::System::Void(*)(::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_SET_CURRENTDAMAGEATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Show(CharacterVisual* arg, ::FlatData::DamageAttribute* arg2)
		{
			((::System::Void(*)(CharacterVisual*, ::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_SHOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Show(GroundObstacleVisual* arg, ::FlatData::DamageAttribute* arg2)
		{
			((::System::Void(*)(GroundObstacleVisual*, ::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_SHOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDamageAttributeLabel(::FlatData::DamageAttribute* arg)
		{
			((::System::Void(*)(::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_SETDAMAGEATTRIBUTELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void RefreshPanelDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_REFRESHPANELDEPTH_OFFSET))(nullptr);
		}

		::System::Boolean HandleUIOpenMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_HANDLEUIOPENMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEATTRIBUTEFLOATER_.CTOR_OFFSET))(nullptr);
		}

	};

