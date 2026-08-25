#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Material; }

#define CHARACTERMOUTHEVENTRECEIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10B1CE0)
#define CHARACTERMOUTHEVENTRECEIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10B0EB0)
#define CHARACTERMOUTHEVENTRECEIVER_REFRESHMOUTHPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x10B5630)
#define CHARACTERMOUTHEVENTRECEIVER_REFRESHMOUTHINDEXTOUVUNIT_OFFSET UNITYSDK_OFFSET(0x10B56B0)
#define CHARACTERMOUTHEVENTRECEIVER_GETMOUTHMATERIAL_OFFSET UNITYSDK_OFFSET(0x10B58C0)
#define CHARACTERMOUTHEVENTRECEIVER_GETMOUTHMATERIAL_OFFSET UNITYSDK_OFFSET(0x10B58D0)
#define CHARACTERMOUTHEVENTRECEIVER_SETMOUTHTILE_OFFSET UNITYSDK_OFFSET(0x10B5980)
#define CHARACTERMOUTHEVENTRECEIVER_SETHORIZONTALLYFLIPPEDMOUTHTILE_OFFSET UNITYSDK_OFFSET(0x10B59A0)
#define CHARACTERMOUTHEVENTRECEIVER_SETMOUTHTILEINTERNAL_OFFSET UNITYSDK_OFFSET(0x10B59C0)
#define CHARACTERMOUTHEVENTRECEIVER_CONVERTTILEINDEXTOUV_OFFSET UNITYSDK_OFFSET(0x10B5AB0)
#define CHARACTERMOUTHEVENTRECEIVER_GETMOUTHTEXDEFAULTST_OFFSET UNITYSDK_OFFSET(0x10B5C10)
#define CHARACTERMOUTHEVENTRECEIVER_SETMOUTHTILETODEFAULT_OFFSET UNITYSDK_OFFSET(0x10B57A0)
#define CHARACTERMOUTHEVENTRECEIVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B1C60)

	inline static constexpr unsigned int CharacterMouthEventReceiver_TypeDefinitionIndex = 923;

	class CharacterMouthEventReceiver : public Il2CppObject
	{
	public:
		::UnityEngine::Renderer* MouthRenderer; // 0x18
		::System::Int32 MouthMaterialIndex; // 0x20
		::UnityEngine::Vector2* MouthDefaultUV; // 0x24
		::System::String* MouthShaderName; // 0x0
		::System::String* MouthTexName; // 0x0
		::System::String* MouthRowName; // 0x0
		::System::String* MouthColName; // 0x0
		::System::Int32 MouthTexId; // 0x2C
		::System::Int32 MouthRowId; // 0x30
		::System::Int32 MouthColId; // 0x34
		::System::Single MouthRowOffsetUnit; // 0x38
		::System::Single MouthColOffsetUnit; // 0x3C

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshMouthPropertyIDs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_REFRESHMOUTHPROPERTYIDS_OFFSET))(nullptr);
		}

		::System::Void RefreshMouthIndexToUVUnit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_REFRESHMOUTHINDEXTOUVUNIT_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetMouthMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_GETMOUTHMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetMouthMaterial(::UnityEngine::Renderer* arg, ::System::Int32 arg2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Renderer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_GETMOUTHMATERIAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMouthTile(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_SETMOUTHTILE_OFFSET))(arg, nullptr);
		}

		::System::Void SetHorizontallyFlippedMouthTile(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_SETHORIZONTALLYFLIPPEDMOUTHTILE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMouthTileInternal(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_SETMOUTHTILEINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ConvertTileIndexToUV(::System::Boolean arg, ::System::Int32 arg2, ::UnityEngine::Vector2&* arg3, ::UnityEngine::Vector2&* arg4)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_CONVERTTILEINDEXTOUV_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void GetMouthTexDefaultST(::UnityEngine::Material* arg, ::UnityEngine::Vector2&* arg2, ::UnityEngine::Vector2&* arg3)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_GETMOUTHTEXDEFAULTST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetMouthTileToDefault()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_SETMOUTHTILETODEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERMOUTHEVENTRECEIVER_.CTOR_OFFSET))(nullptr);
		}

	};

