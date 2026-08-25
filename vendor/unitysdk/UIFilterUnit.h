#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXToggle;
class UISprite;
class UIFilterUnitIcon;
namespace FlatData { class FilterIcon; }

#define UIFILTERUNIT_GET_DEFAULTSELECTEDSPRITE_OFFSET UNITYSDK_OFFSET(0xAF4650)
#define UIFILTERUNIT_GET_WIDEICONS_OFFSET UNITYSDK_OFFSET(0xAF4660)
#define UIFILTERUNIT_GET_NORMALTOGGLE_OFFSET UNITYSDK_OFFSET(0xAF46D0)
#define UIFILTERUNIT_FINDMATCHEDFILTERICON_OFFSET UNITYSDK_OFFSET(0xAE98F0)
#define UIFILTERUNIT_GET_NORMALICONS_OFFSET UNITYSDK_OFFSET(0xAF46E0)
#define UIFILTERUNIT_GET_WIDETOGGLE_OFFSET UNITYSDK_OFFSET(0xAF4760)
#define UIFILTERUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF4770)

	inline static constexpr unsigned int UIFilterUnit_TypeDefinitionIndex = 8138;

	class UIFilterUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* normalIconRoot; // 0x18
		::UnityEngine::GameObject* wideIconRoot; // 0x20
		MXToggle* normalToggle; // 0x28
		MXToggle* wideToggle; // 0x30
		UISprite* defaultSelectedSprite; // 0x38
		::Il2CppArray<::System::Object*>* _normalIcons; // 0x40
		::Il2CppArray<::System::Object*>* _wideIcons; // 0x48

		UISprite* get_DefaultSelectedSprite()
		{
			return ((UISprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNIT_GET_DEFAULTSELECTEDSPRITE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_wideIcons()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNIT_GET_WIDEICONS_OFFSET))(nullptr);
		}

		MXToggle* get_NormalToggle()
		{
			return ((MXToggle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNIT_GET_NORMALTOGGLE_OFFSET))(nullptr);
		}

		UIFilterUnitIcon* FindMatchedFilterIcon(::FlatData::FilterIcon* arg, ::System::Boolean arg2)
		{
			return ((UIFilterUnitIcon*(*)(::FlatData::FilterIcon*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNIT_FINDMATCHEDFILTERICON_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_normalIcons()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNIT_GET_NORMALICONS_OFFSET))(nullptr);
		}

		MXToggle* get_WideToggle()
		{
			return ((MXToggle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNIT_GET_WIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

