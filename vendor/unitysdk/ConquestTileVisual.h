#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
class ConquestTilePropVisual;
namespace MX::Conquest { class ConquestTile; }
class ConquestUnitVisual;
class ConquestObjectVisual;
class HexaUIConquestUnitInfo;
namespace UnityEngine { class Animation; }
class ConquestTileFx;
class RefreshInfo;

#define CONQUESTTILEVISUAL_PLAYUNFOG_OFFSET UNITYSDK_OFFSET(0x1D07AB0)
#define CONQUESTTILEVISUAL_GET_ISFULLYCONQUESTED_OFFSET UNITYSDK_OFFSET(0x1D08BF0)
#define CONQUESTTILEVISUAL_GET_REFRESHCACHE_OFFSET UNITYSDK_OFFSET(0x1D08C60)
#define CONQUESTTILEVISUAL_SETCONQUESTUNITPOSITION_OFFSET UNITYSDK_OFFSET(0x1D058D0)
#define CONQUESTTILEVISUAL_INDICATEEXPANDABLE_OFFSET UNITYSDK_OFFSET(0x1D08DE0)
#define CONQUESTTILEVISUAL_SETFOG_OFFSET UNITYSDK_OFFSET(0x1D088E0)
#define CONQUESTTILEVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D091C0)
#define CONQUESTTILEVISUAL_GET_ISCONQUESTED_OFFSET UNITYSDK_OFFSET(0x1D08DC0)
#define CONQUESTTILEVISUAL_SETUNEXPECTEDENEMYPOSITION_OFFSET UNITYSDK_OFFSET(0x1D05FD0)
#define CONQUESTTILEVISUAL_PLAYUNFOGANI_OFFSET UNITYSDK_OFFSET(0x1D08B60)
#define CONQUESTTILEVISUAL_CREATERUNTIMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D07330)
#define CONQUESTTILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D09260)
#define CONQUESTTILEVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0x1D092B0)
#define CONQUESTTILEVISUAL_SETCONQUESTOBJECTPOSITION_OFFSET UNITYSDK_OFFSET(0x1D092D0)
#define CONQUESTTILEVISUAL_SETPROPLEVEL_OFFSET UNITYSDK_OFFSET(0x1D08A90)
#define CONQUESTTILEVISUAL_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1D090D0)
#define CONQUESTTILEVISUAL_SETCONQUESTTILEPOSITION_OFFSET UNITYSDK_OFFSET(0x1D07230)
#define CONQUESTTILEVISUAL_HIDEPROPS_OFFSET UNITYSDK_OFFSET(0x1D09020)
#define CONQUESTTILEVISUAL_RESETREFRESHCACHE_OFFSET UNITYSDK_OFFSET(0x1D09370)

	inline static constexpr unsigned int ConquestTileVisual_TypeDefinitionIndex = 1577;

	class ConquestTileVisual : public Il2CppObject
	{
	public:
		Il2CppObject* additionalLocations; // 0x18
		::UnityEngine::Transform* unitRoot; // 0x20
		::System::String* hilightPath; // 0x28
		::UnityEngine::Transform* hilightRoot; // 0x30
		::UnityEngine::Transform* fxRoot; // 0x38
		::System::String* fxPath; // 0x40
		::System::String* expandablePath; // 0x48
		::UnityEngine::GameObject* NotFog; // 0x50
		::UnityEngine::GameObject* Fog; // 0x58
		ConquestTilePropVisual* propVisual; // 0x60
		ConquestTilePropVisual* erodedPropVisual; // 0x68
		::MX::Conquest::ConquestTile* Data; // 0x70
		ConquestUnitVisual* UnitVisual; // 0x78
		ConquestObjectVisual* ObjectVisual; // 0x80
		::UnityEngine::GameObject* UnexpectedEnemySymbol; // 0x88
		HexaUIConquestUnitInfo* HexaUIConquestUnitInfo; // 0x90
		::UnityEngine::GameObject* hiLight; // 0x98
		::UnityEngine::GameObject* expandableIndicator; // 0xA0
		::UnityEngine::Animation* ani; // 0xA8
		ConquestTileFx* TileFx; // 0xB0
		RefreshInfo* refreshCache; // 0xB8
		::System::Boolean IsFog; // 0xC0

		::System::Void PlayUnfog(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_PLAYUNFOG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFullyConquested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_GET_ISFULLYCONQUESTED_OFFSET))(nullptr);
		}

		RefreshInfo* get_RefreshCache()
		{
			return ((RefreshInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_GET_REFRESHCACHE_OFFSET))(nullptr);
		}

		::System::Void SetConquestUnitPosition(ConquestUnitVisual* arg)
		{
			((::System::Void(*)(ConquestUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_SETCONQUESTUNITPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void IndicateExpandable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_INDICATEEXPANDABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetFog(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_SETFOG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsConquested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_GET_ISCONQUESTED_OFFSET))(nullptr);
		}

		::System::Void SetUnexpectedEnemyPosition(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_SETUNEXPECTEDENEMYPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayUnfogAni(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_PLAYUNFOGANI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateRuntimeObject(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_CREATERUNTIMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Select(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_SELECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetConquestObjectPosition(ConquestObjectVisual* arg)
		{
			((::System::Void(*)(ConquestObjectVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_SETCONQUESTOBJECTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetPropLevel(::System::Boolean arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_SETPROPLEVEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_REFRESHSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetConquestTilePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_SETCONQUESTTILEPOSITION_OFFSET))(nullptr);
		}

		::System::Void HideProps()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_HIDEPROPS_OFFSET))(nullptr);
		}

		::System::Void ResetRefreshCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTILEVISUAL_RESETREFRESHCACHE_OFFSET))(nullptr);
		}

	};

