#pragma once
#include "unitysdk.h"

namespace FlatData { class TBGTileType; }
namespace MX::TableBoard { class TBGHexaTileData; }
namespace UnityEngine { class GameObject; }
class HexaUI_TBG_UnitInfo;
namespace UnityEngine { class Transform; }

#define TBGTILEVISUAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2094170)
#define TBGTILEVISUAL_SETLAYER_OFFSET UNITYSDK_OFFSET(0x20941B0)
#define TBGTILEVISUAL_SETLAYER_OFFSET UNITYSDK_OFFSET(0x20942C0)
#define TBGTILEVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0x20943B0)
#define TBGTILEVISUAL_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x208FEA0)
#define TBGTILEVISUAL_SETHEXATILEPOSITION_OFFSET UNITYSDK_OFFSET(0x2092A80)
#define TBGTILEVISUAL_CREATERUNTIMEOBJECT_OFFSET UNITYSDK_OFFSET(0x2092B40)
#define TBGTILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2094450)

	inline static constexpr unsigned int TBGTileVisual_TypeDefinitionIndex = 3496;

	class TBGTileVisual : public Il2CppObject
	{
	public:
		::FlatData::TBGTileType* TileType; // 0x18
		::MX::TableBoard::TBGHexaTileData* Data; // 0x20
		::UnityEngine::GameObject* HighLight; // 0x28
		::System::Boolean IsSelect; // 0x30
		::System::Action* onEnable; // 0x38
		HexaUI_TBG_UnitInfo* HexaUI; // 0x40

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEVISUAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetLayer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEVISUAL_SETLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayer(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEVISUAL_SETLAYER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Select(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEVISUAL_SELECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetHighLight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEVISUAL_SETHIGHLIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void SetHexaTilePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEVISUAL_SETHEXATILEPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateRuntimeObject(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TBGTILEVISUAL_CREATERUNTIMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGTILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

