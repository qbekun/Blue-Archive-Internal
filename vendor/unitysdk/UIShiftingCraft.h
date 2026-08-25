#pragma once
#include "unitysdk.h"

class UIShiftingCraftRecipeList;
class UIShiftingCraftMaterialList;
namespace UnityEngine { class Animation; }
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISHIFTINGCRAFT_CO_CRAFTBEGINDIRECTING_OFFSET UNITYSDK_OFFSET(0x23A9590)
#define UISHIFTINGCRAFT_ONBACK_OFFSET UNITYSDK_OFFSET(0x23A9620)
#define UISHIFTINGCRAFT_OPENRECIPELIST_OFFSET UNITYSDK_OFFSET(0x23A9710)
#define UISHIFTINGCRAFT_INITIALIZEONSHORTCUT_OFFSET UNITYSDK_OFFSET(0x23A9790)
#define UISHIFTINGCRAFT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x23A97B0)
#define UISHIFTINGCRAFT_OPENMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x23A97E0)
#define UISHIFTINGCRAFT_HANDLESELECTEDRECIPE_OFFSET UNITYSDK_OFFSET(0x23A9840)
#define UISHIFTINGCRAFT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23A9920)
#define UISHIFTINGCRAFT_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x23A9AA0)
#define UISHIFTINGCRAFT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23A9AB0)
#define UISHIFTINGCRAFT_HANDLESTARTSHIFTINGCRAFT_OFFSET UNITYSDK_OFFSET(0x23A9CD0)
#define UISHIFTINGCRAFT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x23A9DB0)
#define UISHIFTINGCRAFT_SETMATERIALLIST_OFFSET UNITYSDK_OFFSET(0x23A98E0)
#define UISHIFTINGCRAFT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23AA190)
#define UISHIFTINGCRAFT_GET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0x23AA1A0)
#define UISHIFTINGCRAFT_AWAKE_OFFSET UNITYSDK_OFFSET(0x23AA1B0)

	inline static constexpr unsigned int UIShiftingCraft_TypeDefinitionIndex = 5204;

	class UIShiftingCraft : public Il2CppObject
	{
	public:
		UIShiftingCraftRecipeList* shiftingCraftRecipeList; // 0xD8
		UIShiftingCraftMaterialList* shiftingCraftMaterialList; // 0xE0
		::System::Int64 slotId; // 0xE8
		::UnityEngine::Animation* Anim; // 0xF0
		::System::String* Ani_ShiftingCraft_Complete; // 0x0
		::System::String* Ani_ShiftingCraft; // 0x0
		::MX::Data::ShiftingCraftRecipeExcelInfo* OpenConditionRecipeData; // 0xF8

		::System::Collections::IEnumerator* co_CraftBeginDirecting()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_CO_CRAFTBEGINDIRECTING_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OpenRecipeList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_OPENRECIPELIST_OFFSET))(nullptr);
		}

		::System::Void InitializeOnShortCut(::System::Int64 arg, ::MX::Data::ShiftingCraftRecipeExcelInfo* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_INITIALIZEONSHORTCUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OpenMaterialList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_OPENMATERIALLIST_OFFSET))(nullptr);
		}

		::System::Boolean HandleSelectedRecipe(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_HANDLESELECTEDRECIPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialized(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleStartShiftingCraft(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_HANDLESTARTSHIFTINGCRAFT_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaterialList(::MX::Data::ShiftingCraftRecipeExcelInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_SETMATERIALLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_.CTOR_OFFSET))(nullptr);
		}

		UIShiftingCraftMaterialList* get_MaterialList()
		{
			return ((UIShiftingCraftMaterialList*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_GET_MATERIALLIST_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHIFTINGCRAFT_AWAKE_OFFSET))(nullptr);
		}

	};

